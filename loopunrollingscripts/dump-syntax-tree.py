import sys
from pathlib import Path
from tree_sitter import Language, Parser
from ctypes import cdll, c_void_p
from os import fspath
from typing import List, Union

from polynomials import Polynomial
from parsetree import Node
from formatter import Formatter


def lang_from_so(path: str, name: str) -> Language:
    lib = cdll.LoadLibrary(fspath(path))
    language_function = getattr(lib, f"tree_sitter_{name}")
    language_function.restype = c_void_p
    language_ptr = language_function()
    return Language(language_ptr)

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


C_LANGUAGE = lang_from_so("./treesitter-decomp-c.so", "decompc")

parser = Parser()
parser.language = C_LANGUAGE

source_code = sys.stdin.read().encode()

tree = parser.parse(source_code)
tree_root = Node.from_tree_sitter(tree.root_node)

print(dump_node(tree_root))

