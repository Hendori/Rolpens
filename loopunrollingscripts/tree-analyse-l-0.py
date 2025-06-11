import argparse
from pathlib import Path
from tree_sitter import Language, Parser
from ctypes import cdll, c_void_p
from os import fspath
from typing import Optional, List, Tuple, Union, Set

from polynomials import Polynomial
from parsetree import Node
from formatter import Formatter
import sys

sys.setrecursionlimit(3000)


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


_content_memo = {}


def compare_node_content(left, right):
    key = (id(left), id(right))
    if key in _content_memo:
        return _content_memo[key]

    if not compare_node_shapes(left, right):
        _content_memo[key] = False
        return False

    match left.type:
        case (
            "identifier"
            | "field_identifier"
            | "type_identifier"
            | "statement_identifier"
        ):
            result = left.text == right.text
        case "string_literal":
            result = left.text == right.text
        case _:
            result = all(
                compare_node_content(left.children[i], right.children[i])
                for i in range(len(left.children))
            )

    _content_memo[key] = result
    return result


def variables_in_scope(node) -> Set[str]:
    rv = set()

    for ch in node.children:
        if ch.type == "identifier":
            rv.add(ch.text.decode())
        elif ch.type in ("function_definition",):
            continue
        elif len(ch.children) > 0:
            child_vars = variables_in_scope(ch)
            if ch.type in ("for_statement"):
                # HACK: beschouw de lokale iteratorvariabele niet als onderdeel van de parent scope
                child_vars.discard(getattr(ch, "local_iterator", ""))

            rv |= child_vars

    return rv


class CandidateLoop:
    def __init__(self, body, instances):
        self.body = body
        self.instances = instances

        self._polynomials: Optional[List[Polynomial]] = None

    def reduction_size(self):
        return len(self.body) * (len(self.instances) - 1)

    def find_polynomials(self) -> List[Polynomial]:
        if self._polynomials is not None:
            return [x for x in self._polynomials]

        num_values = []
        for inst in self.instances:
            for n in inst:
                find_numeric_constants(num_values, n)

        # Hoe veel numerieke constantes staan er in elke instance?
        body_size = len(num_values) // len(self.instances)

        rv = []
        xs = list(range(len(self.instances)))
        for i in range(body_size):
            values = [0] * len(self.instances)
            for j in xs:
                values[j] = num_values[i + body_size * j]
            rv.append(Polynomial.from_lagrange(list(zip(xs, values))))

        self._polynomials = rv
        return rv

    def is_valid_loop(self) -> bool:
        ps = self.find_polynomials()
        its_working = True
        for p in ps:
            its_working = its_working and p.is_integer()
            its_working = its_working and (len(p) < len(self.instances) // 2)

        return its_working

    def new_identifier(self) -> str:
        def all_identifiers():
            yield from ("i","j","k")
            i = 1
            while True:
                yield f"i{i}"

        for ident in all_identifiers():
            # Ga omhoog in de tree waar deze loop zou moeten staan, en kijk of
            # deze kandidaatvariabele al bestaat. Indien nee, klaar.
            ident_exists = False
            for body_node in self.body:
                ident_exists = ident_exists or ident in variables_in_scope(body_node)

            ref_node = self.instances[0][0]
            while ref_node is not None:
                if ref_node.type in ("function_definition", "translation_unit", "for_statement"):
                    ident_exists = ident_exists or ident in variables_in_scope(ref_node)
                ref_node = ref_node.parent

            if not ident_exists:
                return ident
        return "i∞"


    def splice_polynomial_for_numeric_constant(self, node: Node, ps: List[Polynomial], loop_var: str):
        if node.type == "number_literal":
            p = ps.pop(0)
            p_node = p.as_node(loop_var)
            node.parent.insert_before(
                p_node, node, name=node.parent.field_name_for_child(node)
            )
            node.parent.remove_child(node)
        else:
            for child in node.children:
                self.splice_polynomial_for_numeric_constant(child, ps, loop_var)


    def create_for_statement(self, loop_var: str, start: int, count: int = 0, step: int = 1) -> Tuple[Node, Node]:
        if count == 0:
            count = start
            start = 0

        for_node = Node("for_statement")
        for_node.append_child(Node("(", b"("))

        # The iterator variable is local to this loop only.
        for_node.local_iterator = loop_var

        init_node = Node("declaration")
        init_node.append_child(Node("primitive_type", b"int"), "type")
        init_decl = Node("init_declarator")
        init_decl.append_child(Node("identifier", loop_var.encode()), "declarator")
        init_decl.append_child(Node("number_literal", str(start).encode()), "value")
        init_node.append_child(init_decl, "declarator")
        for_node.append_child(init_node, "initializer")
        for_node.append_child(Node(";", b";"))

        cond_node = Node("binary_expression")
        cond_node.append_child(Node("identifier", loop_var.encode()), "left")
        cond_node.append_child(Node("<", b"<"), "operator")
        cond_node.append_child(Node("number_literal", str(start + count).encode()), "right")
        for_node.append_child(cond_node, "condition")
        for_node.append_child(Node(";", b";"))

        upd_node = Node("update_expression")
        if step == 1:
            upd_node.append_child(Node("identifier", loop_var.encode()), "argument")
            upd_node.append_child(Node("++", b"++"), "operator")
        else:
            upd_node = Node("assignment_expression")
            upd_node.append_child(Node("identifier", loop_var.encode()), "argument")
            upd_node.append_child(Node("+=", b"+="), "operator")
            upd_node.append_child(Node("number_literal", str(step).encode()), "value")
        for_node.append_child(upd_node, "update")
        for_node.append_child(Node(")", b")"))

        loop_body = Node("compound_statement")
        for_node.append_child(loop_body, "body")

        return for_node, loop_body

    def reroll(self):
        loop_var = self.new_identifier()

        ps = self.find_polynomials()
        for node in self.body:
            self.splice_polynomial_for_numeric_constant(node, ps, loop_var)

        # bouw een for-loop die {repeat_count} keer herhaalt
        for_node, loop_body = self.create_for_statement(loop_var, len(self.instances))

        # Zet 'm voor de oorspronkelijke node
        self.instances[0][0].parent.insert_before(for_node, self.instances[0][0])

        # verplaats de nodes naar het loop-body
        for n in self.body:
            loop_body.append_child(n)

        # en verwijder alle herhalingen, inclusief het origineel
        for inst in self.instances:
            for n in inst:
                n.parent.remove_child(n)


def find_duplicates(compound_node):
    children_list = list(compound_node.children)
    for l in range(1, len(children_list) // 2):
        for i, startnode in enumerate(children_list):
            instances = []
            instances.append(children_list[i : i + l])

            for j in range(i + l, len(children_list) - l, l):
                same = True
                for k in range(l):
                    if not compare_node_content(
                        children_list[i + k], children_list[j + k]
                    ):
                        same = False
                        break
                if same:
                    instances.append(children_list[j : j + l])
                else:
                    break
            if len(instances) >= 2:
                loop_body = [x.clone() for x in instances[0]]
                yield CandidateLoop(loop_body, instances)


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
    if (
        (text.startswith("0") or (text.startswith("-0")))
        and text != "0"
        and not text.startswith("0.")
        and not text.startswith("-0.")
    ):
        return int(text, 8)
    try:
        number = float(text)
        if number.is_integer:
            return int(number)
        else:
            raise ValueError(f"'{text}' is echt een float.")
    except ValueError:
        raise ValueError(f"'{text}' is geen echt getal")


def process_file(filename):
    # reset memoization cache
    _content_memo.clear()

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
            for loop in sorted(
                find_duplicates(child_node), key=lambda x: -x.reduction_size()
            ):
                if loop.is_valid_loop():
                    global loop_found
                    loop_found += 1
                    print("loop gevonden")

                    loop.reroll()
                    changed = True

                    break
    if loop_found > 0:
        with open(str(location) + "/" + filename + str(loop_found) + "out", "w") as f:
            print(Formatter().format_tree(tree_root), file=f)


argparser = argparse.ArgumentParser(
    prog="tree-analyse.py",
    description="Probeer loops die zijn uitgerold terug te rollen naar een for-constructie",
)
argparser.add_argument("files", nargs="+")
config = argparser.parse_args()

C_LANGUAGE = lang_from_so("./treesitter-cpp.so", "cpp")

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
        process_file(Path(file))
