import argparse
from typing import Optional

from rolpens.parsetree import Node, get_parser, parse_c_number_literal
from rolpens.project import find_code_files
from realcode import for_loops_in_tree


parser = get_parser("treesitter-cpp.so", "cpp")

argparser = argparse.ArgumentParser(
        prog="loop-offsets.py",
        description="Collect statistics about on which offset loops tend to start")
argparser.add_argument("files", nargs="+")
argparser.add_argument("--junk-path", type=int, default=0)
argparser.add_argument("--log-file", type=str, default="loop-offsets.log")
argparser.add_argument("--project-name-path-index", type=int, default=-1)
config = argparser.parse_args()

shape_count = {}

project_tally = {}
total_tally = {"zero": 0, "nonzero": 0, "other": 0}

with open(config.log_file, "a") as logf:

    for project_name, filename in find_code_files(config.files, config.project_name_path_index):
        if project_name not in project_tally:
            project_tally[project_name] = {"zero": 0, "nonzero": 0, "other": 0}

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
                for length in line_lengths:
                    if length > offset:
                        break
                    line += 1
                    offset -= length + 1
                logf.write(f"{filename_d}:{line}\n")

            if len(log_message) > 0:
                logf.write(log_message.rstrip() + "\n")


        # Parse the file into an abstract syntax tree
        tree = parser.parse(source_code)
        tree_root = Node.from_tree_sitter(tree.root_node)

        for (for_loop, varname, init_value) in for_loops_in_tree(tree_root, log_callback):

            if init_value is None:
                continue

            log_callback(for_loop, for_loop.text.split(b"\n")[0].decode())

            init_type = "unknown"
            if init_value.type != "number_literal":
                init_type = "other"
            else:
                if parse_c_number_literal(init_value.text.decode()) == 0:
                    init_type = "zero"
                else:
                    init_type = "nonzero"

            log_callback(for_loop, init_type)

            total_tally[init_type] += 1
            project_tally[project_name][init_type] += 1

        if filename_printed:
            logf.write("\n\n")

    project_names = {
        "godot": "Godot",
        "openssl": "OpenSSL",
        "coreutils": "coreutils"
    }
    project_column_order = ["coreutils", "openssl", "godot"]
    for proj in project_tally.keys():
        if proj not in project_names:
            project_names[proj] = proj
            project_column_order.append(proj)

    column_order = ["zero", "nonzero", "other"]


    print("\\begin{tabular}{l|ccc}")
    print("    \\textbf{Project} & " + " & ".join(["\\textbf{"+x+"}" for x in column_order]) + " \\\\")
    print("    \\hline")

    for proj in project_column_order:
        if proj in project_tally:
            ptally = project_tally[proj]
            print("    "+project_names[proj]+"  & " + " & ".join([str(ptally[k]) for k in column_order]) + " \\\\")

    print("    \\hline")

    print("    \\textit{total}  & " + " & ".join([str(total_tally[k]) for k in column_order]) )

    print("\\end{tabular}")


    if total_tally["nonzero"] > 0:
        ascom = total_tally["zero"] / total_tally["nonzero"]
        print(f"\n\nLooking through the source code of our triad of open-source projects, loops starting at zero are about {ascom:.1f} times as common as loops starting at any other value, making it an adequate default choice.\n\n")


