import sys

from rolpens.parsetree import Node, get_parser, dump_node


parser = get_parser("treesitter-cpp.so", "cpp")

source_code = sys.stdin.read().encode()

tree = parser.parse(source_code)
tree_root = Node.from_tree_sitter(tree.root_node)

print(dump_node(tree_root))

