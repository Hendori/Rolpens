from tree_sitter import Language, Parser
from ctypes import cdll, c_void_p
from os import fspath

from parsetree import Node
from formatter import Formatter


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


def find_duplicates(compound_node):
    children_list = list(compound_node.children)
    for i, startnode in enumerate(children_list):
        count = 1 # Die + 1 is er omdat het origineel van de loop ook meetelt
        for node in children_list[i + 1 :]:
            if compare_node_content(startnode, node):
                count += 1
            else:
                break
        if count >= 2:
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
    # Bouw een for-loop die {repeat_count} keer herhaalt
    for_node, loop_body = insert_loop(node, repeat_count)

    # Verwijder alle herhalingen, inclusief het origineel
    for _ in range(repeat_count):
        for_node.parent.remove_child(for_node.next_sibling)

    # En verplaats de node naar het loop-body
    loop_body.append_child(node)


for child_node in get_compound_statement_node(tree_root):
    changed = True
    while changed:
        changed = False
        for repeated_node, loop_count in sorted(
            find_duplicates(child_node), key=lambda x: -x[1]
        ):
            # print(repeated_node, loop_count)
            # TODO: if deze_loop_werkt(repeated_node, loop_count):
            reroll_l0_loop(repeated_node, loop_count)
            changed = True
            # print(json.dumps(repeated_node))
            # print(child_node)

            break

print(Formatter().format_tree(tree_root))
