import sys
from pathlib import Path
from tree_sitter import Language, Parser
from ctypes import cdll, c_void_p
from os import fspath
from typing import List, Union

from polynomials import Polynomial
from parsetree import Node, get_parser
from formatter import Formatter


def dump_node(node, level=0) -> str:
    if len(node.children) == 0:
        if len(node.type) < 5:
            return f"'{node.type}'"
        else:
            return f"({node.type})"
    rv = f"({node.type}"
    for i, ch in enumerate(node.children):
        rv += "\n" + "   "*(level+1)
        if node.child_names[i] != "":
            rv += f"{node.child_names[i]}: "
        rv += dump_node(ch, level+1)
    return rv + ")"


parser = get_parser("treesitter-cpp.so", "cpp")

source_code = sys.stdin.read().encode()

tree = parser.parse(source_code)
tree_root = Node.from_tree_sitter(tree.root_node)

print(dump_node(tree_root))

