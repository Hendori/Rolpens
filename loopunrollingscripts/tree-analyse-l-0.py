from tree_sitter import Language, Parser
from ctypes import cdll, c_void_p
from os import fspath
import json


class Node:
    def __init__(self, node_type: str, node_text:bytes = b""):
        self.type = node_type
        self.parent = None
        self.text = node_text
        self.children = []
        self.child_names = []

    def __repr__(self) -> str:
        return str(self)
    def __str__(self) -> str:
        # Formatteer een S-expressie
        rv = f"({self.type}"
        for i, child in enumerate(self.children):
            chstr = str(child)
            if len(chstr) < 5:
                continue

            if len(self.child_names) > i and self.child_names[i] != "":
                rv += f" {self.child_names[i]}: {chstr}"
            else:
                rv += " " + chstr
        return rv + ")"

    @staticmethod
    def from_tree_sitter(node):
        rv = Node(node.type)
        for i, tschild in enumerate(node.children):
            child = Node.from_tree_sitter(tschild)
            child.parent = rv
            rv.children.append(child)
            rv.child_names.append(node.field_name_for_child(i) or "")
        return rv


def lang_from_so(path: str, name: str) -> Language:
    lib = cdll.LoadLibrary(fspath(path))
    language_function = getattr(lib, f"tree_sitter_{name}")
    language_function.restype = c_void_p
    language_ptr = language_function()
    return Language(language_ptr)


C_LANGUAGE = lang_from_so("./treesitter-decomp-c.so", "decompc")

parser = Parser()
parser.language = C_LANGUAGE

# Read the C file
with open("level-0.c", "r") as f:
    source_code = f.read().encode()

# Parse and print the syntax tree
tree = parser.parse(source_code)
tree_root = Node.from_tree_sitter(tree.root_node)


def get_node_text(node):
    print(node)
    return source_code[node.start_byte : node.end_byte].decode()


def get_compound_statement_node(node):
    if node.type == "compound_statement":
        yield node
    for child in node.children:
        yield from get_compound_statement_node(child)


def compare_node_shapes(left, right):
    if left.type != right.type:
        return False
    if len(left.children) != len(right.children):
        return False
    for i, left_child in enumerate(left.children):
        if not compare_node_shapes(left_child, right.children[i]):
            return False
    return True


def compare_node_content(left, right):
    if not compare_node_shapes(left, right):
        return False
    match left.type:
        case "identifier" | "string_literal":
            return left.text == right.text
        case _:
            for i, left_child in enumerate(left.children):
                if not compare_node_content(left_child, right.children[i]):
                    return False
            return True


def find_duplicates(node):
    children_list = list(node.children)
    for i, startnode in enumerate(children_list):
        # print(str(startnode))
        # print("nieuw startnode gevonden")
        count = 0
        for node in children_list[i + 1 :]:
            if compare_node_content(startnode, node):
                # print(node)
                # print(get_node_text(node))
                # print("gedupliceerde regel gevonden")
                count += 1
            else:
                break
        if count > 1:
            # print(f"heey, we hebben duplicaten aantal {count}")
            yield (startnode, count)


def insert_loop(node):
    node.parent.children = node.parent.children[1:]


for child_node in get_compound_statement_node(tree_root):
    for loop in sorted(find_duplicates(child_node), key=lambda x: -x[1]):
        print(loop)
        # insert_loop(loop[0])
        # print(json.dumps(loop))
        # print(child_node)

        break
