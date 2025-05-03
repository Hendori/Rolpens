import argparse
from typing import List, Union

import sys
sys.path.insert(0, "..")
from loopunrollingscripts.parsetree import Node, get_parser

def is_not_arithmetic(node: Node) -> bool:
    if node.type not in ("unary_expression", "binary_expression"):
        return True
    operator = node.child_by_field_name("operator")
    return operator.type not in ["+", "-", "*", "/", "&", "|", "~", "^"]

parser = get_parser()

argparser = argparse.ArgumentParser(
        prog="tree-analyse.py",
        description="Probeer loops die zijn uitgerold terug te rollen naar een for-constructie")
argparser.add_argument("files", nargs="+")
config = argparser.parse_args()

for filename in config.files:
    source_code = b""
    with open(filename, "r") as f:
        source_code = f.read().encode()

    # Parse the file into an abstract syntax tree
    tree = parser.parse(source_code)
    tree_root = Node.from_tree_sitter(tree.root_node)

    for for_loop in tree_root.get_nodes_by_type("for_statement"):
        varname = b"i"
        initializer = for_loop.child_by_field_name("initializer")
        if initializer is None:
            continue
        elif initializer.type == "comma_expression":
            # FIXME: hier worden waarschijnlijk twee of meer iteratorvariabelen gebruikt, maar er is misschien wel iets te verzinnen
            continue
        elif initializer.type == "assignment_expression":
            varname = initializer.child_by_field_name("left").text
        elif initializer.type == "update_expression":
            argument = initializer.child_by_field_name("argument")
            if argument is not None and argument.type == "identifier":
                varname = argument.text
            else:
                print(initializer)
                continue
        elif initializer.type == "declaration":
            declarator = initializer.child_by_field_name("declarator")
            if declarator is None or declarator.type != "init_declarator":
                print(initializer)
                continue
            declarator = declarator.child_by_field_name("declarator")
            if declarator is None or declarator.type != "identifier":
                print(initializer)
                continue
            varname = declarator.text
        else:
            print(initializer.type)
            print(for_loop)
            a,b = for_loop.byte_range
            loop_body = for_loop.child_by_field_name("body")
            if loop_body is not None:
                b,_ = loop_body.byte_range
            print(source_code[a:b].decode() + " {")
            continue

        loop_body = for_loop.child_by_field_name("body")
        if loop_body is None:
            continue

        loop_printed = False

        for expr in loop_body.get_nodes_by_type(["binary_expression","unary_expression"], lazy=is_not_arithmetic):
            if is_not_arithmetic(expr):
                continue

            has_iterator = False
            for n in expr.get_nodes_by_type("identifier", lazy=False, descend_denylist=["call_expression", "subscript_expression"]):
                if n.text == varname:
                    has_iterator = True
            if has_iterator:
                if not loop_printed:
                    a,_ = for_loop.byte_range
                    b,_ = loop_body.byte_range
                    print(source_code[a:b].decode().rstrip() + " {")
                    loop_printed = True

                a,b = expr.byte_range
                print("    " + source_code[a:b].decode())

        if loop_printed:
            print("}")

