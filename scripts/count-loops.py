import argparse
import csv

import sys

sys.path.insert(0, "..")
from rolpens.parsetree import Node, get_parser
from rolpens.project import find_code_files

sys.setrecursionlimit(3000)
parser = get_parser("treesitter-cpp.so", "cpp")

argparser = argparse.ArgumentParser(
    prog="count-loops.py",
    description="Tel hoe veel loops en nodes er voorkomen in elk bestand",
)
argparser.add_argument("files", nargs="+")
argparser.add_argument("--output-file", type=str, default="count-loops.csv")
argparser.add_argument("--project-name-path-index", type=int, default=-1)
config = argparser.parse_args()

total_for_loops = {}
total_while_loops = {}
total_do_loops = {}
total_nodes = {}


def count_nodes(node: Node) -> int:
    """Recursief alle nodes tellen in de AST."""
    count = 1  # tel de node zelf
    for child in node.children:
        count += count_nodes(child)
    return count


with open(config.output_file, "w") as outf:
    csvw = csv.writer(outf)
    csvw.writerow(
        [
            "File",
            "for loops",
            "while loops",
            "do-while loops",
            "total loops",
            "total nodes",
        ]
    )

    for project_name, filename in find_code_files(
        config.files, config.project_name_path_index
    ):
        source_code = b""
        with open(filename, "rb") as f:
            source_code = f.read()

        for_loops = 0
        while_loops = 0
        do_loops = 0

        # Parse the file into an abstract syntax tree
        tree = parser.parse(source_code)
        tree_root = Node.from_tree_sitter(tree.root_node)

        # Tel alle nodes
        nodes = count_nodes(tree_root)

        # Tel de loops
        for nd in tree_root.get_nodes_by_type(
            ["for_statement", "while_statement", "do_statement"]
        ):
            if nd.type == "for_statement":
                for_loops += 1
            elif nd.type == "while_statement":
                while_loops += 1
            elif nd.type == "do_statement":
                do_loops += 1
            else:
                print(nd.type)

        csvw.writerow(
            [
                filename,
                for_loops,
                while_loops,
                do_loops,
                for_loops + while_loops + do_loops,
                nodes,
            ]
        )

        total_for_loops[project_name] = total_for_loops.get(project_name, 0) + for_loops
        total_while_loops[project_name] = (
            total_while_loops.get(project_name, 0) + while_loops
        )
        total_do_loops[project_name] = total_do_loops.get(project_name, 0) + do_loops
        total_nodes[project_name] = total_nodes.get(project_name, 0) + nodes

project_names = {"godot": "Godot", "openssl": "OpenSSL", "coreutils": "coreutils"}
project_column_order = ["coreutils", "openssl", "godot"]

for k in total_for_loops.keys():
    if k not in project_column_order:
        project_column_order.append(k)

print("\\begin{tabular}{l|cccc}")
print("    & for & while & do-while & nodes \\\\")
print("    \\hline")

for p in project_column_order:
    total_loops = (
        total_for_loops.get(p, 0)
        + total_while_loops.get(p, 0)
        + total_do_loops.get(p, 0)
    )
    if total_loops == 0 and total_nodes.get(p, 0) == 0:
        continue
    print(
        f"    {project_names.get(p, p)} & {total_for_loops.get(p, 0)} & {total_while_loops.get(p, 0)} & {total_do_loops.get(p, 0)} & {total_nodes.get(p, 0)} \\\\"
    )

print("\\end{tabular}")
