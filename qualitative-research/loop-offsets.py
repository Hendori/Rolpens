import argparse
from typing import List, Union, Optional

import sys
sys.path.insert(0, "..")
from loopunrollingscripts.parsetree import Node, get_parser
from realcode import find_code_files, for_loops_in_tree

def is_not_arithmetic(node: Node) -> bool:
    if node.type in ("identifier"):
        return False
    if node.type not in ("unary_expression", "binary_expression"):
        return True
    operator = node.child_by_field_name("operator")
    return operator.type not in ["+", "-", "*", "/", "%", "<<", ">>", "&", "|", "~", "^"]

def expr_shape(node: Node, iterator_name: bytes) -> str:
    if node.type == "identifier":
        if node.text == iterator_name:
            return "𝑥"
        elif node.text.decode().isupper():
            return "const"
        else:
            return "ident"
    elif node.type == "sizeof_expression":
        return "const"
    elif node.type == "number_literal":
        return "num"
    elif node.type == "char_literal":
        return "char"
    elif node.type == "call_expression":
        return "call()"
    elif node.type == "parenthesized_expression":
        return " ".join([expr_shape(x, iterator_name) for x in node.children])

    if len(node.type) < 4 and len(node.children) == 0:
        return node.type

    rv, sep = f"({node.type}", " "
    if node.type in ("binary_expression", "unary_expression"):
        rv, sep = "(", ""

    for ch in node.children:
        rv += sep + expr_shape(ch, iterator_name)
        sep = " "
    return rv + ")"

parser = get_parser("treesitter-cpp.so", "cpp")

argparser = argparse.ArgumentParser(
        prog="find-iterator-expressions.py",
        description="Probeer loops die zijn uitgerold terug te rollen naar een for-constructie")
argparser.add_argument("files", nargs="+")
argparser.add_argument("--junk-path", type=int, default=0)
argparser.add_argument("--log-file", type=str, default="loop-offsets.log")
argparser.add_argument("--project-name-path-index", type=int, default=-1)
config = argparser.parse_args()

shape_count = {}

with open(config.log_file, "a") as logf:

    for project_name, filename in find_code_files(config.files, config.project_name_path_index):
        source_code = b""
        with open(filename, "rb") as f:
            source_code = f.read()

        line_lengths = [len(x) for x in source_code.split(b"\n")]

        filename_printed = False
        def log_callback(node: Optional[Node], log_message: str):
            global filename_printed
            if not filename_printed:
                filename_printed = True

                # Display filename
                filename_d = filename
                if config.junk_path > 0:
                    filename_d = "/".join(filename.split("/")[config.junk_path:])
                    if filename_d == "":
                        filename_d = filename

                if Node is None:
                    logf.write(f"{filename_d}\n")
                    return

                line = 1
                (offset,_) = node.byte_range
                for l in line_lengths:
                    if l > offset:
                        break
                    line += 1
                    offset -= l + 1
                logf.write(f"{filename_d}:{line}\n")

            if len(log_message) > 0:
                logf.write(log_message.rstrip() + "\n")


        # Parse the file into an abstract syntax tree
        tree = parser.parse(source_code)
        tree_root = Node.from_tree_sitter(tree.root_node)

        for (for_loop, varname, init_value) in for_loops_in_tree(tree_root, log_callback):

            if init_value is None:
                continue

            loop_printed = False

            log_callback(for_loop, for_loop.text.split(b"\n")[0].decode())
            log_callback(for_loop, init_value.type)

            if loop_printed:
                logf.write("}\n")
        if filename_printed:
            logf.write("\n\n")

    project_names = {
        "godot": "Godot",
        "openssl": "OpenSSL",
        "coreutils": "coreutils"
    }
    project_column_order = ["coreutils", "openssl", "godot"]

    uncharacterised = set()

    logf.write("\n\n\n\nFinal tally:\n\n")
    rows = []

    project_total = {}
    tally_table = {}

    for (shape, project_name), (ct, og_repr) in shape_count.items():
        if project_name not in project_names:
            project_names[project_name] = project_name
            project_column_order.append(project_name)

        project_total[project_name] = project_total.get(project_name, 0) + ct

        bucket = "uncharacterised"
        tally_table[(bucket, project_name)] = tally_table.get((bucket, project_name), 0) + ct
        tally_table[(bucket, "total")] = tally_table.get((bucket, "total"), 0) + ct

    top_shapes = []
    for (ct, shape, project_name, og_repr) in reversed(sorted(rows, key=lambda x: x[0])):
        logf.write(f"{ct:5d}   {project_name}   {shape}   {og_repr.replace('\n',' ')}\n")
        if ct > 1 and len(top_shapes) < 15:
            top_shapes.append(shape)

    logf.write("\n\nTop uncategorized shapes:\n")
    for shape in top_shapes:
        logf.write(f"            \"{shape}\",\n")


    print("\\begin{tabular}{l|"+"c"*len([a for a in project_total.values() if a > 0])+"|c}")
    print("                             & " + " & ".join([project_names[p] for p in project_column_order if project_total.get(p,0) > 0]) + " & Total \\\\")
    print("    \\hline")

    print("                             & " + " & ".join([str(project_total[p]) for p in project_column_order if project_total.get(p,0) > 0]) + " &")


    print("\\end{tabular}")


