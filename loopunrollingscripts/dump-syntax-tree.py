import sys
from pathlib import Path
from tree_sitter import Language, Parser
from ctypes import cdll, c_void_p
from os import fspath
from typing import List, Union

from polynomials import Polynomial
from parsetree import Node, get_parser, dump_node
from formatter import Formatter


parser = get_parser("treesitter-cpp.so", "cpp")

source_code = sys.stdin.read().encode()

tree = parser.parse(source_code)
tree_root = Node.from_tree_sitter(tree.root_node)

print(dump_node(tree_root))

