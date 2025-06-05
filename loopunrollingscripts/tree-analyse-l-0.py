import argparse
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
        case "identifier" | "field_identifier" | "type_identifier" | "statement_identifier":
            return left.text == right.text
        case "string_literal":
            return left.text == right.text
        case _:
            for i, left_child in enumerate(left.children):
                if not compare_node_content(left_child, right.children[i]):
                    return False
            return True


def find_duplicates(compound_node):
    children_list = list(compound_node.children)
    for l in range(1, len(children_list) // 2):
        for i, startnode in enumerate(children_list):
            count = 1  # Die + 1 is er omdat het origineel van de loop ook meetelt

            for j in range(i + l, len(children_list) - l, l):
                same = True
                for k in range(l):
                    if not compare_node_content(
                        children_list[i + k], children_list[j + k]
                    ):
                        same = False
                        break
                if same:
                    count += 1
                else:
                    break
            if count >= 2:
                yield (children_list[i : i + l], count)


def find_numeric_constants(result: List[Union[int, float]], node: Node):
    if node.type == "number_literal":
        result.append(parse_c_integer_literal(node.text.decode()))
    for child in node.children:
        find_numeric_constants(result, child)


def parse_c_integer_literal(text):
    text = text.strip().lower().rstrip("uUlL")
    if text.startswith("0x") or text.startswith("-0x"):
        return int(text, 16)
    if text.startswith("0b") or text.startswith("-0b"):
        return int(text, 2)
    if (text.startswith("0") or (text.startswith("-0"))) and text != "0":
        return int(text, 8)
    return int(text)


def find_polynomials_in_candidate_loop(
    loop_body: List[Node], repeat_count: int
) -> List[Polynomial]:
    num_values = []
    for n in loop_body:
        find_numeric_constants(num_values, n)

    node = loop_body[-1]
    for _ in range(1, repeat_count):
        for _ in loop_body:
            node = node.next_sibling
            find_numeric_constants(num_values, node)

    body_size = len(num_values) // repeat_count
    rv = [None] * body_size
    for i in range(body_size):
        values = [0] * repeat_count
        for j in range(repeat_count):
            values[j] = num_values[i + body_size * j]
        rv[i] = Polynomial.from_lagrange(list(zip(range(repeat_count), values)))

    return rv


def splice_polynomial_for_numeric_constant(
    node: Node, ps: List[Polynomial], loop_var: str
):
    if node.type == "number_literal":
        p = ps.pop(0)
        p_node = p.as_node(loop_var)
        node.parent.insert_before(
            p_node, node, name=node.parent.field_name_for_child(node)
        )
        node.parent.remove_child(node)
    else:
        for child in node.children:
            splice_polynomial_for_numeric_constant(child, ps, loop_var)


ident_count = 0


def new_identifier(reference_node: Node) -> str:
    global ident_count
    rv = f"i_{ident_count}"
    ident_count += 1
    # TODO: ga omhoog in de tree vanaf reference_node, en kijk of de
    # kandidaatvariabele al bestaat. Indien ja, verzin een andere.
    return rv


def insert_loop(
    reference_node: Node, loop_var: str, start: int, count: int = 0, step: int = 1
):
    if count == 0:
        count = start
        start = 0

    loop_var = loop_var.encode()

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


def reroll_l0_loop(nodes: List[Node], repeat_count: int, loop_var: str):
    global loop_found
    loop_found += 1
    print("loop gevonden")
    # Bouw een for-loop die {repeat_count} keer herhaalt
    for_node, loop_body = insert_loop(nodes[0], loop_var, repeat_count)

    # Verwijder alle herhalingen, inclusief het origineel
    for _ in range(repeat_count * len(nodes)):
        for_node.parent.remove_child(for_node.next_sibling)

    # En verplaats de nodes naar het loop-body
    for n in nodes:
        loop_body.append_child(n)


def process_file(filename):
    # Read the C file
    print("processing file " + str(filename))
    with open(filename, "r") as f:
        source_code = f.read().encode()

    file = Path(filename)
    filename = file.name
    location = file.parent

    # Parse the file into an abstract syntax tree
    tree = parser.parse(source_code)
    tree_root = Node.from_tree_sitter(tree.root_node)

    for child_node in get_compound_statement_node(tree_root):
        changed = True
        while changed:
            changed = False
            for loop_body, loop_count in sorted(
                find_duplicates(child_node), key=lambda x: -(x[1] - 1) * len(x[0])
            ):
                ps = find_polynomials_in_candidate_loop(loop_body, loop_count)
                its_working = True
                for p in ps:
                    its_working = its_working and p.is_integer()
                    its_working = its_working and (len(p) < loop_count // 2)
                if not its_working:
                    continue

                loop_var = new_identifier(loop_body[0])

                for node in loop_body:
                    splice_polynomial_for_numeric_constant(node, ps, loop_var)

                # TODO: if deze_loop_werkt(loop_body, loop_count):
                reroll_l0_loop(loop_body, loop_count, loop_var)
                changed = True

                break
        if loop_found:
            with open(
                str(location) + "/" + str(loop_found) + filename + "out", "w"
            ) as f:
                print(Formatter().format_tree(tree_root), file=f)


argparser = argparse.ArgumentParser(
        prog="tree-analyse.py",
        description="Probeer loops die zijn uitgerold terug te rollen naar een for-constructie")
argparser.add_argument("files", nargs="+")
config = argparser.parse_args()

C_LANGUAGE = lang_from_so("./treesitter-decomp-c.so", "decompc")

parser = Parser()
parser.language = C_LANGUAGE

for file in config.files:
    folder = Path(file)
    if folder.is_dir():
        for file in folder.glob("*.c"):
            loop_found = 0
            process_file(file)
    else:
        loop_found = 0
        process_file(file)
