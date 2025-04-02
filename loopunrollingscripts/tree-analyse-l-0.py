import os
from tree_sitter import Language, Parser
from ctypes import cdll, c_void_p
from os import fspath


def lang_from_so(path: str, name: str) -> Language:
    lib = cdll.LoadLibrary(fspath(path))
    language_function = getattr(lib, f"tree_sitter_{name}")
    language_function.restype = c_void_p
    language_ptr = language_function()
    return Language(language_ptr)


so_path = os.path.expanduser(
    "~/Documents/unrolling_loops/loopunrollingscripts/treesitter-c.so"
)

C_LANGUAGE = lang_from_so(so_path, "c")

parser = Parser()
parser.language = C_LANGUAGE

# Read the C file
with open("level-0.c", "r") as f:
    source_code = f.read().encode()

# Parse and print the syntax tree
tree = parser.parse(source_code)
print(tree.root_node)  # Print the AST in S-expression format
