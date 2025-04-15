from tree_sitter import Language, Parser
from ctypes import cdll, c_void_p
from os import fspath
from typing import Self
from formatter import Formatter

from tree_sitter import Node as TSNode


class TreeError(Exception):
    pass


class Node:
    def __init__(self, node_type: str, node_text: bytes = b""):
        self.type = node_type

        self.parent = None
        self.next_sibling = None
        self.prev_sibling = None

        self.children = []
        self.child_names = []

        self.text = node_text
        self.grammar_id = 0
        self.grammar_name = ""
        self.id = 0

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
    def from_tree_sitter(node: TSNode):
        rv = Node(node.type, node.text)
        for i, tschild in enumerate(node.children):
            child = Node.from_tree_sitter(tschild)
            child.parent = rv
            if i > 0:
                child.prev_sibling = rv.children[i - 1]
                rv.children[i - 1].next_sibling = child
            rv.children.append(child)
            rv.child_names.append(node.field_name_for_child(i) or "")
        return rv

    def child_by_field_name(self, name: str):
        for i, node_name in enumerate(self.child_names):
            if node_name == name:
                return self.children[i]
        return None

    def remove_child(self, node: Self):
        for i, child in enumerate(self.children):
            if child == node:
                node.parent = None
                if node.next_sibling is not None:
                    node.next_sibling.prev_sibling = node.prev_sibling
                if node.prev_sibling is not None:
                    node.prev_sibling.next_sibling = node.next_sibling
                node.next_sibling = None
                node.prev_sibling = None
                del self.children[i]
                del self.child_names[i]
                return node
        raise TreeError("node not found")

    def append_child(self, node: Self, name: str = ""):
        node.parent = self
        if len(self.children) > 0:
            node.prev_sibling = self.children[-1]
            self.children[-1].next_sibling = node
        self.children.append(node)
        self.child_names.append(name)

    def insert_before(self, node: Self, reference_node: Self, name: str = ""):
        for i, child in enumerate(self.children):
            if child == reference_node:
                node.parent = self
                node.next_sibling = child
                child.prev_sibling = node
                if i > 0:
                    node.prev_sibling = self.children[i - 1]
                    self.children[i - 1].next_sibling = node
                self.children.insert(i, node)
                self.child_names.insert(i, name)
                return
        raise TreeError("reference node not found")


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
    # print(node)
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
        count = 0
        for node in children_list[i + 1 :]:
            if compare_node_content(startnode, node):
                count += 1
            else:
                break
        if count > 1:
            yield (startnode, count)


ident_count = 0


def new_identifier(reference_node: Node) -> str:
    global ident_count
    rv = f"i_{ident_count}"
    ident_count += 1
    # TODO: ga omhoog in de tree vanaf reference_node, en kijk of de
    # kandidaatvariabele al bestaat. Indien ja, verzin een andere.
    return rv


def insert_loop(reference_node: Node, start: int, count: int = 0, step: int = 1):
    if count == 0:
        count = start
        start = 0

    loop_var = new_identifier(reference_node).encode()

    for_node = Node("for_statement")
    for_node.append_child(Node("(", b"("))

    init_node = Node("declaration")
    init_node.append_child(Node("primitive_type", b"int"), "type")
    init_decl = Node("init_declarator")
    init_decl.append_child(Node("identifier", loop_var), "declarator")
    init_decl.append_child(Node("number_literal", str(start).encode()), "value")
    init_node.append_child(init_decl, "declarator")
    for_node.append_child(init_node, "initializer")
    for_node.append_child(Node(";", b";"))

    cond_node = Node("binary_expression")
    cond_node.append_child(Node("identifier", loop_var), "left")
    cond_node.append_child(Node("<", b"<"), "operator")
    cond_node.append_child(Node("number_literal", str(start + count).encode()), "right")
    for_node.append_child(cond_node, "condition")
    for_node.append_child(Node(";", b";"))

    upd_node = Node("update_expression")
    if step == 1:
        upd_node.append_child(Node("identifier", loop_var), "argument")
        upd_node.append_child(Node("++", b"++"), "operator")
    else:
        upd_node = Node("assignment_expression")
        upd_node.append_child(Node("identifier", loop_var), "argument")
        upd_node.append_child(Node("+=", b"+="), "operator")
        upd_node.append_child(Node("number_literal", str(step).encode()), "value")
    for_node.append_child(upd_node, "update")
    for_node.append_child(Node(")", b")"))

    loop_body = Node("compound_statement")
    for_node.append_child(loop_body, "body")

    # Zet 'm voor de oorspronkelijke node
    reference_node.parent.insert_before(for_node, reference_node)
    return for_node, loop_body


def reroll_l0_loop(node, repeat_count):
    # Verwijder alle herhalingen (de eerste node die wordt herhaald blijft staan)
    for _ in range(repeat_count):
        node.parent.remove_child(node.next_sibling)

    # Bouw een for-loop die {count} keer herhaalt
    _, loop_body = insert_loop(node, repeat_count)

    # En verplaats de node naar het loop-body
    node.parent.remove_child(node)
    loop_body.append_child(node)


for child_node in get_compound_statement_node(tree_root):
    changed = True
    while changed:
        changed = False
        for repeated_node, loop_count in sorted(
            find_duplicates(child_node), key=lambda x: -x[1]
        ):
            print(repeated_node, loop_count)
            # TODO: if deze_loop_werkt(repeated_node, loop_count):
            reroll_l0_loop(repeated_node, loop_count)
            changed = True
            # print(json.dumps(repeated_node))
            print(child_node)

            break

print(Formatter().format_tree(tree_root))
