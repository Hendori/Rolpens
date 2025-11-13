import argparse
from typing import Optional

from rolpens.parsetree import Node, get_parser
from rolpens.project import find_code_files

def is_not_arithmetic(node: Node) -> bool:
    if node.type in ("identifier"):
        return False
    if node.type not in ("unary_expression", "binary_expression"):
        return True
    operator = node.child_by_field_name("operator")
    return operator.type not in ["+", "-", "*", "/", "%", "<<", ">>", "&", "|", "~", "^"]

def expr_shape(node: Node, iterator_name: bytes) -> str:
    if node.type == "identifier":
        if node.text == iterator_name:
            return "𝑥"
        elif node.text.decode().isupper():
            return "const"
        else:
            return "ident"
    elif node.type == "sizeof_expression":
        return "const"
    elif node.type == "number_literal":
        return "num"
    elif node.type == "char_literal":
        return "char"
    elif node.type == "call_expression":
        return "call()"
    elif node.type == "parenthesized_expression":
        return " ".join([expr_shape(x, iterator_name) for x in node.children])

    if len(node.type) < 4 and len(node.children) == 0:
        return node.type

    rv, sep = f"({node.type}", " "
    if node.type in ("binary_expression", "unary_expression"):
        rv, sep = "(", ""

    for ch in node.children:
        rv += sep + expr_shape(ch, iterator_name)
        sep = " "
    return rv + ")"

parser = get_parser("treesitter-cpp.so", "cpp")

argparser = argparse.ArgumentParser(
        prog="find-iterator-expressions.py",
        description="Probeer loops die zijn uitgerold terug te rollen naar een for-constructie")
argparser.add_argument("files", nargs="+")
argparser.add_argument("--junk-path", type=int, default=0)
argparser.add_argument("--log-file", type=str, default="find-iterator-expressions.log")
argparser.add_argument("--project-name-path-index", type=int, default=-1)
config = argparser.parse_args()

shape_count = {}

with open(config.log_file, "a") as logf:

    for project_name, filename in find_code_files(config.files, config.project_name_path_index):
        source_code = b""
        with open(filename, "rb") as f:
            source_code = f.read()

        line_lengths = [len(x) for x in source_code.split(b"\n")]

        filename_printed = False
        def print_file_header(node: Optional[Node]):
            global filename_printed
            filename_printed = True

            # Display filename
            filename_d = filename
            if config.junk_path > 0:
                filename_d = "/".join(filename.split("/")[config.junk_path:])
                if filename_d == "":
                    filename_d = filename

            if Node is None:
                logf.write(f"{filename_d}\n")
                return

            line = 1
            (offset,_) = node.byte_range
            for l in line_lengths:
                if l > offset:
                    break
                line += 1
                offset -= l + 1
            logf.write(f"{filename_d}:{line}\n")

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
                    print_file_header(for_loop)
                    logf.write(str(initializer) + "\n")
                    continue
            elif initializer.type == "declaration":
                declarator = initializer.child_by_field_name("declarator")
                if declarator is None or declarator.type != "init_declarator":
                    print_file_header(for_loop)
                    logf.write(str(initializer) + "\n")
                    continue
                declarator = declarator.child_by_field_name("declarator")
                if declarator is None or declarator.type != "identifier":
                    print_file_header(for_loop)
                    logf.write(str(initializer) + "\n")
                    continue
                varname = declarator.text
            else:
                print_file_header(for_loop)
                logf.write(initializer.type + "\n")
                logf.write(str(for_loop) + "\n")
                a,b = for_loop.byte_range
                loop_body = for_loop.child_by_field_name("body")
                if loop_body is not None:
                    b,_ = loop_body.byte_range
                logf.write(source_code[a:b].decode() + " {\n")
                continue

            loop_body = for_loop.child_by_field_name("body")
            if loop_body is None:
                continue

            loop_printed = False

            for expr in loop_body.get_nodes_by_type(["binary_expression","unary_expression","identifier"], lazy=is_not_arithmetic):
                if is_not_arithmetic(expr):
                    continue

                has_iterator = False
                for n in expr.get_nodes_by_type("identifier", lazy=False, descend_denylist=["call_expression", "subscript_expression"]):
                    if n.text == varname:
                        has_iterator = True
                if has_iterator:
                    if not loop_printed:
                        print_file_header(for_loop)
                        a,_ = for_loop.byte_range
                        b,_ = loop_body.byte_range
                        logf.write(source_code[a:b].decode().rstrip() + " {\n")
                        loop_printed = True

                    a,b = expr.byte_range
                    expr_source = source_code[a:b].decode()
                    shape = expr_shape(expr, varname)

                    logf.write("    " + expr_source + " #### " + shape + "\n")
                    ct, og_repr = shape_count.get((shape,project_name), (0, expr_source))
                    shape_count[(shape,project_name)] = (ct + 1, og_repr)

            if loop_printed:
                logf.write("}\n")
        if filename_printed:
            logf.write("\n\n")

    project_names = {
        "godot": "Godot",
        "openssl": "OpenSSL",
        "coreutils": "coreutils"
    }
    project_column_order = ["coreutils", "openssl", "godot"]

    canonical_shape = [
        ("Raw", set({
            "𝑥",
            "(𝑥 + ident)",
            "(𝑥 - ident)",
            "(𝑥 * ident)",
            "(𝑥 / ident)",
            "(𝑥 % ident)",
            "(𝑥 & ident)",
            "(𝑥 << ident)",
            "(ident + 𝑥)",
            "(ident - 𝑥)",
            "(ident * 𝑥)",
            "(ident << 𝑥)",
            "(ident | 𝑥)",
            "(𝑥 + call())",
            "(𝑥 - call())",
            "(𝑥 * call())",
            "(𝑥 / call())",
            "(call() + 𝑥)",
            "(call() - 𝑥)",
            "(call() * 𝑥)",
            "(call() / 𝑥)",
            "(call() << 𝑥)",
            "(call() >> 𝑥)",
            "((ident + 𝑥) + ident)",
            "(𝑥 + (subscript_expression ident (subscript_argument_list [ num ])))",
            "(𝑥 * (field_expression ident -> (field_identifier)))",
            "(𝑥 - (field_expression ident . (field_identifier)))",
            "(𝑥 + (ident * (field_expression ident . (field_identifier))))",
            "((𝑥 * (field_expression ident -> (field_identifier))) + ident)",
            "((ident + (𝑥 * ident)) + num)",
            "((field_expression (field_expression ident . (field_identifier)) . (field_identifier)) + 𝑥)",
            "((field_expression (field_expression ident -> (field_identifier)) -> (field_identifier)) + 𝑥)",
            "(( (ident + 𝑥) ) % ident)",
            "((ident * ident) + 𝑥)",
            "(((num * ident) + 𝑥) + (ident * num))",
            "(((num * ident) + ident) + (𝑥 * num))",
            "((𝑥 * ident) + ident)",
            "((subscript_expression ident (subscript_argument_list [ num ])) + (ident * 𝑥))",
            "((ident * num) + 𝑥)",
            "(ident + (𝑥 * ident))",
            "((ident + ident) + 𝑥)",
            "((const - num) - ( (𝑥 - (call_expression (primitive_type) (argument_list ( (call_expression (field_expression (field_expression ident -> (field_identifier)) . (field_identifier)) (argument_list ( ))) )))) ))", # I don't even
            "(𝑥 + (update_expression ident ++))",
            "((field_expression ident . (field_identifier)) + 𝑥)",
            "((subscript_expression ident (subscript_argument_list [ ident ])) + (𝑥 * ident))",
            "(𝑥 + (subscript_expression ident (subscript_argument_list [ ident ])))",
            "((𝑥 * ident) + (subscript_expression ident (subscript_argument_list [ ident ])))",
            "(((𝑥 * ident) * ident) - ((field_expression ident . (field_identifier)) * ident))",
            "(𝑥 + (ident * num))",
            "(𝑥 + (ident * const))",
            "(𝑥 + (ident * ident))",
            "((𝑥 * ident) / ident)",
            "((ident * 𝑥) + ident)",
            "(( (𝑥 * ident) ) + ident)",
            "(( (ident * ident) ) + 𝑥)",
            "((( (ident + (ident * ident)) ) * num) + 𝑥)",
            "((ident * const) + 𝑥)",
            "((𝑥 + ident) << ident)",
            "(( (ident >> 𝑥) ) & num)",
            "(( (ident >> ( ((num - (ident * num)) - (𝑥 * num)) )) ) & num)",
            "(( (ident >> ( ((num - (𝑥 * num)) - (ident * num)) )) ) & num)",
            "(( ((((𝑥 * ( (ident - ident) )) + (ident * ( (ident - ident) ))) + (num * ident)) + num) ) >> num)",
            "(( ((((ident * ( (ident - ident) )) + (𝑥 * ( (ident - ident) ))) + (num * ident)) + num) ) >> num)",
            "((𝑥 * ident) + (subscript_expression ident (subscript_argument_list [ (qualified_identifier (namespace_identifier) :: const) ])))",
            "(ident + (𝑥 * (field_expression ident . (field_identifier))))",
            "(𝑥 + (field_expression (subscript_expression ident (subscript_argument_list [ ident ])) . (field_identifier)))",
            "(𝑥 - (field_expression ident -> (field_identifier)))",
            "((field_expression ident -> (field_identifier)) + (𝑥 * (field_expression ident -> (field_identifier))))",
            "((field_expression (field_expression ident -> (field_identifier)) . (field_identifier)) + 𝑥)",
            "(( ((field_expression ident . (field_identifier)) * num) ) + 𝑥)",
            "((cast_expression ( (type_descriptor (primitive_type) (type_qualifier (const)) (abstract_pointer_declarator *)) ) ident) + (ident * 𝑥))",
            "((subscript_expression (field_expression ident . (field_identifier)) (subscript_argument_list [ ident ])) + 𝑥)",
            "((𝑥 * (field_expression (field_expression ident -> (field_identifier)) . (field_identifier))) + ident)",
            "((ident * (field_expression ident -> (field_identifier))) + 𝑥)",
            "(( (call() << num) ) | 𝑥)",
            "(( (𝑥 >> ident) ) << ( (ident * num) ))",
            "((call() * ident) + 𝑥)",
            "(call() + (( (𝑥 + (ident * ident)) ) * ident))",
            "(call() + (( (ident + (𝑥 * ident)) ) * ident))",
            "((qualified_identifier (namespace_identifier) :: ident) + 𝑥)",
            "((field_expression ( (pointer_expression * 𝑥) ) -> (field_identifier)) & const)",
            "(ident + (𝑥 * (field_expression ident -> (field_identifier))))",
            "((ident * (field_expression ident . (field_identifier))) + 𝑥)",
        })),
        ("Degree 1 polynomial", set({
            "(𝑥 + num)",
            "(𝑥 - num)",
            "(𝑥 * num)",
            "(num + 𝑥)",
            "(num - 𝑥)",
            "(num * 𝑥)",
            "(- 𝑥)",
            "(𝑥 + const)",
            "(𝑥 - const)",
            "(𝑥 * const)",
            "(const + 𝑥)",
            "(const - 𝑥)",
            "(const * 𝑥)",
            "((const + 𝑥) + num)",
            "((𝑥 * const) - num)",
            "((𝑥 * const) + num)",
            "((𝑥 + const) + num)",
            "(ident + (𝑥 * const))",
            "(ident + (num * 𝑥))",
            "(ident >> ( (- 𝑥) ))",
            "((𝑥 * num) + ident)",
            "((𝑥 + num) + ident)",
            "((𝑥 * const) + ident)",
            "(( (𝑥 * num) ) + num)",
            "(( (𝑥 + num) ) * num)",
            "(num + (𝑥 * num))",
            "(( (𝑥 + num) ) % ident)",
            "(( (𝑥 + num) ) % call())",
            "(num * ( (𝑥 + num) ))",
            "((𝑥 * num) - num)",
            "(( (𝑥 + num) ) * const)",
            "(num + (𝑥 * const))",
            "(( (𝑥 + num) ) * ident)",
            "((field_expression ident -> (field_identifier)) + 𝑥)",
            "((const * num) * 𝑥)",
            "(num + (num * 𝑥))",
            "((num * num) + 𝑥)",
            "(ident + (𝑥 * num))",
            "((𝑥 * num) + num)",
            "((num * 𝑥) + num)",
            "((num * 𝑥) - num)",
            "(( (𝑥 * num) ) + num)",
            "(( (𝑥 * const) ) + num)",
            "((ident + 𝑥) + num)",
            "((ident + 𝑥) - num)",
            "((ident - 𝑥) - num)",
            "((ident - num) + 𝑥)",
            "((num * 𝑥) + ident)",
            "((num + 𝑥) + ident)",
            "((num - 𝑥) - ident)",
            "((num + ident) + 𝑥)",
            "((𝑥 * ident) * num)",
            "((𝑥 + ident) + num)",
            "((ident + (num * 𝑥)) + num)",
            "((num + (𝑥 * num)) + num)",
            "((( (ident + 𝑥) ) * num) + num)",
            "((( (𝑥 - num) ) + ident) - ident)",
            "(( (ident >> (𝑥 * num)) ) & num)",
            "(( (ident >> ( (𝑥 * num) )) ) & num)",
            "(( ((ident * num) + 𝑥) ) * const)",
            "(( ((𝑥 * num) + ident) ) * const)",
            "((( (𝑥 * ident) ) * num) + num)",
            "((( (𝑥 + (ident * num)) ) * num) + num)",
            "((( (ident + (𝑥 * num)) ) * num) + num)",
            "((𝑥 + ident) - num)",
            "(((ident * num) + (𝑥 * num)) + num)",
            "((ident + (𝑥 * num)) + num)",
            "(((𝑥 * num) + (ident * num)) + num)",
            "(( ((𝑥 * num) + num) ) * num)",
            "((( (𝑥 + num) ) * num) + num)",
            "((( (𝑥 - num) ) * num) + num)",
            "(((ident + ident) + 𝑥) + num)",
            "((((ident * ident) * num) + (𝑥 * num)) + num)",
            "((((𝑥 * ident) * num) + (ident * num)) + num)",
            "((( (𝑥 + ( (ident * ident) )) ) * num) + num)",
            "((( (ident + ( (𝑥 * ident) )) ) * num) + num)",
            "((( (ident + num) ) * ident) + ( (𝑥 + num) ))",
            "((( (𝑥 + num) ) * ident) + ( (ident + num) ))",
            "(( (𝑥 * num) ) * num)",
            "((𝑥 - ident) - num)",
            "((𝑥 * ident) + num)",
            "((ident - num) - 𝑥)",
            "(ident + (num * 𝑥))",
            "((( (𝑥 + num) ) * ident) + (subscript_expression ident (subscript_argument_list [ num ])))",
            "((( (𝑥 - num) ) * ident) + (subscript_expression ident (subscript_argument_list [ num ])))",
            "(( (𝑥 - num) ) * ident)",
            "(( (𝑥 * ident) ) + num)",
            "((ident + ((𝑥 * const) * num)) + (const * num))",
            "((( (ident >> (𝑥 + num)) ) + ident) ^ ident)",
            "(ident + ( ((𝑥 * num) + num) ))",
            "((( (𝑥 + (ident * ident)) ) * num) + ident)",
            "((( (ident + (𝑥 * ident)) ) * num) + ident)",
            "(((ident * num) + 𝑥) - num)",
            "((( ((ident * ident) + 𝑥) ) * num) + num)",
            "((( ((𝑥 * ident) + ident) ) * num) + num)",
            "(( ((ident * ident) + 𝑥) ) * num)",
            "(( ((ident + num) + 𝑥) ) % ident)",
            "(( ((𝑥 * ident) + ident) ) * num)",
            "(((ident * num) + 𝑥) + (ident * num))",
            "(((ident * num) + ident) + (𝑥 * num))",
            "(((𝑥 * num) + ident) + (ident * num))",
            "((ident + (( (𝑥 + num) ) * const)) - num)",
            "(( (((( (( (num + (ident / num)) ) / ( (ident - num) )) ) * 𝑥) * ( (ident - num) )) + num) ) >> num)",
            "((𝑥 * num) + (subscript_expression ident (subscript_argument_list [ (cast_expression ( (type_descriptor (primitive_type)) ) (pointer_expression * ident)) ])))",
            "((subscript_expression (field_expression ident . (field_identifier)) (subscript_argument_list [ num ])) + (( (𝑥 + num) ) * (field_expression ident . (field_identifier))))",
            "((( ((field_expression ident . (field_identifier)) * num) ) + ( (𝑥 * num) )) + num)",
            "(((field_expression ident . (field_identifier)) - 𝑥) - num)",
            "(((field_expression ident . (field_identifier)) + 𝑥) + num)",
            "((( ((𝑥 * (field_expression ident . (field_identifier))) + ident) ) * num) + num)",
            "((( ((ident * (field_expression ident . (field_identifier))) + 𝑥) ) * num) + num)",
            "(( (ident >> ( (num - (𝑥 * num)) )) ) & num)",
            "((( (𝑥 + ident) ) * num) + num)",
            "((cast_expression ( (type_descriptor (primitive_type)) ) 𝑥) + num)",
            "(call() + (( ((𝑥 * num) + ((ident * num) * ident)) ) * const))",
            "(call() + (( ((ident * num) + ((𝑥 * num) * ident)) ) * const))",
            "(( (( (( (ident >> ( ((ident + (𝑥 * num)) + num) )) ) & num) ) << num) ) | ( (( (ident >> ( (ident + (𝑥 * num)) )) ) & num) ))",
            "(( (( (( (ident >> ( ((𝑥 + (ident * num)) + num) )) ) & num) ) << num) ) | ( (( (ident >> ( (𝑥 + (ident * num)) )) ) & num) ))",
        })),
        ("Polynomial, degree >1", set({
            "(( (ident - 𝑥) ) * ( (ident - 𝑥) ))",
        })),
        ("Division/modulo", set({
            "(𝑥 % num)",
            "(𝑥 / num)",
            "(𝑥 % const)",
            "(𝑥 / const)",
            "(( (𝑥 + num) ) % num)",
            "((𝑥 / num) + num)",
            "((ident / num) / ( (𝑥 / num) ))",
            "(ident + (𝑥 / num))",
            "(( (ident + 𝑥) ) % num)",
            "(( (𝑥 + ident) ) % num)",
            "((subscript_expression (field_expression ident . (field_identifier)) (subscript_argument_list [ (𝑥 / const) ])) & ( (num << ( (𝑥 & ( (const - num) )) )) ))",
        })),
        ("Bit shift / mask", set({
            "(𝑥 & num)",
            "(𝑥 | num)",
            "(𝑥 << num)",
            "(𝑥 >> num)",
            "(( (𝑥 << num) ) + num)",
            "(( (𝑥 >> num) ) & num)",
            "(𝑥 & const)",
            "(𝑥 | const)",
            "(𝑥 >> const)",
            "(𝑥 << const)",
            "(~ 𝑥)",
            "(( (𝑥 << num) ) | ( (𝑥 >> num) ))",
            "(( (𝑥 << num) ) | 𝑥)",
            "(( (𝑥 << num) ) | num)",
            "(ident + ( (𝑥 << num) ))",
            "(( (𝑥 + num) ) & num)",
            "(( (𝑥 * num) ) & num)",
            "(((cast_expression ( (type_descriptor (primitive_type)) ) ident) | ( (num << num) )) | ( (𝑥 << num) ))",
            "(( (𝑥 - num) ) >> num)",
            "((𝑥 + num) >> num)",
            "(ident + ( (𝑥 >> num) ))",
            "(num - (num * ( (( (𝑥 >> num) ) & num) )))",
            "(ident + (cast_expression ( (type_descriptor (primitive_type)) ) ( (𝑥 >> num) )))",
            "(( (𝑥 + num) ) >> num)",
            "(( (( (𝑥 >> num) ) & num) ) << num)",
            "(( (ident & num) ) + ( (𝑥 >> num) ))",
            "(( (𝑥 & num) ) + ( (ident >> num) ))",
            "(((((( (𝑥 >> num) ) * const) * num) + ( (conditional_expression ( (𝑥 & num) ) ? num : num) )) + ( (𝑥 & num) )) + ident)",
            "((ident * (field_expression ident . (field_identifier))) + ( (𝑥 >> num) ))",
            "(( ((( (𝑥 >> num) ) * ident) + ident) ) * num)",
            "(( ((( (ident >> num) ) * ident) + 𝑥) ) * num)",
        })),
        ("Bit shift exponentiation", set({
            "(num << 𝑥)",
            "(num >> 𝑥)",
            "(const >> 𝑥)",
            "(const << 𝑥)",
            "(ident & ( (num << 𝑥) ))",
            "(ident << ( (𝑥 * num) ))",
            "(num << ( (𝑥 & num) ))",
            "(( (ident >> ( (𝑥 << num) )) ) & num)",
            "((cast_expression ( (type_descriptor (primitive_type)) ) num) << 𝑥)",
            "((cast_expression ( (type_descriptor (type_identifier)) ) num) << 𝑥)",
            "((cast_expression ( (type_descriptor (primitive_type)) ) const) << ( (𝑥 * num) ))",
            "((field_expression ident -> (field_identifier)) >> 𝑥)",
            "(ident >> (𝑥 + num))",
            "(𝑥 >> ident)",
            "((subscript_expression ident (subscript_argument_list [ num ])) >> ( (num * 𝑥) ))",
            "(( ((subscript_expression ident (subscript_argument_list [ (𝑥 / num) ])) & (~ ( (num >> (cast_expression ( (type_descriptor (sized_type_specifier (unsigned) (primitive_type))) ) ( (𝑥 % num) ))) ))) ) | ( (( ((subscript_expression ident (subscript_argument_list [ num ])) & num) ) >> (cast_expression ( (type_descriptor (sized_type_specifier (unsigned) (primitive_type))) ) ( (𝑥 % num) ))) ))",
            "(( (ident + ( (num >> 𝑥) )) ) >> ( (num - 𝑥) ))",
            "(ident & ( (num >> ( (𝑥 & num) )) ))",
            "((subscript_expression ident (subscript_argument_list [ 𝑥 ])) & ( (num >> ( (num - 𝑥) )) ))",
        })),
        ("Other", set({
            "((pointer_expression * ( (update_expression ++ 𝑥) )) & num)",
            "((field_expression ident . (field_identifier)) + ( (conditional_expression ( (𝑥 == num) ) ? ident : (- ident)) ))",
            "(ident << ( (conditional_expression 𝑥 ? num : num) ))",
            "(( (conditional_expression ((𝑥 - num) < const) ? ident : ident) ) + call())",

            "(( ((cast_expression ( (type_descriptor (primitive_type)) ) (field_expression (field_expression 𝑥 -> (field_identifier)) . (field_identifier))) * num) ) / (field_expression ident . (field_identifier)))",
            "(( ((field_expression 𝑥 -> (field_identifier)) * ident) ) / num)",
            "(( ((field_expression 𝑥 -> (field_identifier)) + num) ) / num)",
            "(( ((field_expression 𝑥 -> (field_identifier)) - (field_expression ident -> (field_identifier))) ) ^ ( ((field_expression ident -> (field_identifier)) - (field_expression ident -> (field_identifier))) ))",
            "(( (ident * (field_expression 𝑥 -> (field_identifier))) ) / const)",
            "(( (ident * const) ) / (field_expression 𝑥 -> (field_identifier)))",
            "((((((((((pointer_expression * ident) << (string_literal \" (string_content) \")) << (qualified_identifier (namespace_identifier) :: ident)) << (qualified_identifier (namespace_identifier) :: ident)) << (field_expression (field_expression 𝑥 -> (field_identifier)) . (field_identifier))) << (field_expression (field_expression 𝑥 -> (field_identifier)) . (field_identifier))) << (field_expression (field_expression 𝑥 -> (field_identifier)) . (field_identifier))) << (field_expression (field_expression 𝑥 -> (field_identifier)) . (field_identifier))) << (field_expression (field_expression 𝑥 -> (field_identifier)) . (field_identifier))) << (qualified_identifier (namespace_identifier) :: ident))",
            "((((((((pointer_expression * ident) << (qualified_identifier (namespace_identifier) :: ident)) << (qualified_identifier (namespace_identifier) :: ident)) << call()) << (field_expression 𝑥 -> (field_identifier))) << (field_expression 𝑥 -> (field_identifier))) << (field_expression 𝑥 -> (field_identifier))) << (qualified_identifier (namespace_identifier) :: ident))",
            "(((((field_expression 𝑥 -> (field_identifier)) + (field_expression 𝑥 -> (field_identifier))) + (field_expression 𝑥 -> (field_identifier))) + (field_expression 𝑥 -> (field_identifier))) + ( (((field_expression 𝑥 -> (field_identifier)) | (field_expression 𝑥 -> (field_identifier))) | (! (! (field_expression 𝑥 -> (field_identifier))))) ))",
            "((((field_expression ident . (field_identifier)) << (string_literal \" (string_content) \")) << (field_expression 𝑥 -> (field_identifier))) << (string_literal \" (escape_sequence) \"))",
            "(((field_expression (field_expression (field_expression 𝑥 -> (field_identifier)) . (field_identifier)) . (field_identifier)) - (field_expression (field_expression (field_expression 𝑥 -> (field_identifier)) . (field_identifier)) . (field_identifier))) + num)",
            "(((field_expression (field_expression (field_expression 𝑥 -> (field_identifier)) . (field_identifier)) . (field_identifier)) - (field_expression (field_expression (field_expression 𝑥 -> (field_identifier)) . (field_identifier)) . (field_identifier))) + num)",
            "(((field_expression 𝑥 -> (field_identifier)) + (field_expression 𝑥 -> (field_identifier))) + const)",
            "(((field_expression 𝑥 -> (field_identifier)) + (field_expression 𝑥 -> (field_identifier))) + const)",
            "(((field_expression 𝑥 -> (field_identifier)) + (field_expression 𝑥 -> (field_identifier))) - num)",
            "((cast_expression ( (type_descriptor (primitive_type)) ) ( ((field_expression 𝑥 -> (field_identifier)) - (field_expression 𝑥 -> (field_identifier))) )) / num)",
            "((cast_expression ( (type_descriptor (primitive_type)) ) (cast_expression ( (type_descriptor (primitive_type)) ) (field_expression 𝑥 -> (field_identifier)))) / num)",
            "((cast_expression ( (type_descriptor (primitive_type)) ) (field_expression (field_expression 𝑥 -> (field_identifier)) -> (field_identifier))) / num)",
            "((cast_expression ( (type_descriptor (primitive_type)) ) (field_expression 𝑥 -> (field_identifier))) / num)",
            "((cast_expression ( (type_descriptor (primitive_type)) ) ident) - ((cast_expression ( (type_descriptor (primitive_type)) ) 𝑥) * num))",
            "((cast_expression ( (type_descriptor (type_identifier) (abstract_pointer_declarator *)) ) (field_expression ident -> (field_identifier))) + (field_expression 𝑥 -> (field_identifier)))",
            "((field_expression (field_expression 𝑥 -> (field_identifier)) -> (field_identifier)) - (field_expression (subscript_expression 𝑥 (subscript_argument_list [ num ])) . (field_identifier)))",
            "((field_expression (field_expression 𝑥 -> (field_identifier)) -> (field_identifier)) - (field_expression 𝑥 -> (field_identifier)))",
            "((field_expression ident -> (field_identifier)) + ( (( (((field_expression 𝑥 -> (field_identifier)) - (field_expression ident -> (field_identifier))) + num) ) & (~ num)) ))",
            "((field_expression ident -> (field_identifier)) + ( ((field_expression 𝑥 -> (field_identifier)) - (field_expression ident -> (field_identifier))) ))",
            "((field_expression ident -> (field_identifier)) + (field_expression 𝑥 -> (field_identifier)))",
            "((field_expression ident -> (field_identifier)) - (field_expression 𝑥 -> (field_identifier)))",
            "((field_expression 𝑥 -> (field_identifier)) & const)",
            "((field_expression 𝑥 -> (field_identifier)) & ident)",
            "((field_expression 𝑥 -> (field_identifier)) * num)",
            "((field_expression 𝑥 -> (field_identifier)) + ( (( ((field_expression ident -> (field_identifier)) - ident) ) >> num) ))",
            "((field_expression 𝑥 -> (field_identifier)) + ( (( (ident - (field_expression ident -> (field_identifier))) ) >> num) ))",
            "((field_expression 𝑥 -> (field_identifier)) + ( (ident >> num) ))",
            "((field_expression 𝑥 -> (field_identifier)) + ((( ((field_expression ident -> (field_identifier)) - (field_expression 𝑥 -> (field_identifier))) ) * ( ((field_expression ident -> (field_identifier)) - (field_expression 𝑥 -> (field_identifier))) )) / ( ((field_expression ident -> (field_identifier)) - (field_expression 𝑥 -> (field_identifier))) )))",
            "((field_expression 𝑥 -> (field_identifier)) + (field_expression ident -> (field_identifier)))",
            "((field_expression 𝑥 -> (field_identifier)) + (field_expression 𝑥 -> (field_identifier)))",
            "((field_expression 𝑥 -> (field_identifier)) + ident)",
            "((field_expression 𝑥 -> (field_identifier)) + num)",
            "((field_expression 𝑥 -> (field_identifier)) - ( ((field_expression 𝑥 -> (field_identifier)) - (field_expression 𝑥 -> (field_identifier))) ))",
            "((field_expression 𝑥 -> (field_identifier)) - (cast_expression ( (type_descriptor (primitive_type) (abstract_pointer_declarator *)) ) 𝑥))",
            "((field_expression 𝑥 -> (field_identifier)) - (field_expression (field_expression 𝑥 -> (field_identifier)) -> (field_identifier)))",
            "((field_expression 𝑥 -> (field_identifier)) - (field_expression ident -> (field_identifier)))",
            "((field_expression 𝑥 -> (field_identifier)) - (field_expression 𝑥 -> (field_identifier)))",
            "((field_expression 𝑥 -> (field_identifier)) - ident)",
            "((field_expression 𝑥 -> (field_identifier)) / const)",
            "((ident + num) + ( ((field_expression 𝑥 -> (field_identifier)) == const) ))",
            "(+ (field_expression (field_expression 𝑥 -> (field_identifier)) . (field_identifier)))",
            "(- (field_expression 𝑥 -> (field_identifier)))",
            "(ident & (field_expression 𝑥 -> (field_identifier)))",
            "(ident + (field_expression (field_expression 𝑥 -> (field_identifier)) . (field_identifier)))",
            "(ident + (field_expression 𝑥 -> (field_identifier)))",
            "(ident - (field_expression (field_expression 𝑥 -> (field_identifier)) . (field_identifier)))",
            "(ident - (field_expression 𝑥 -> (field_identifier)))",
            "(num * (field_expression 𝑥 -> (field_identifier)))",
            "(~ (field_expression 𝑥 -> (field_identifier)))",
            "(𝑥 + (field_expression 𝑥 -> (field_identifier)))",
        })),
        ("uncharacterised", set())
    ]
    uncharacterised = set()

    logf.write("\n\n\n\nFinal tally:\n\n")
    rows = []

    project_total = {}
    tally_table = {}

    for (shape, project_name), (ct, og_repr) in shape_count.items():
        if project_name not in project_names:
            project_names[project_name] = project_name
            project_column_order.append(project_name)

        project_total[project_name] = project_total.get(project_name, 0) + ct

        bucket = "uncharacterised"
        for label, shapes in canonical_shape:
            if shape in shapes:
                bucket = label
        tally_table[(bucket, project_name)] = tally_table.get((bucket, project_name), 0) + ct
        tally_table[(bucket, "total")] = tally_table.get((bucket, "total"), 0) + ct

        if bucket == "uncharacterised":
            uncharacterised.add(shape)
            rows.append((ct, shape, project_name, og_repr))

    top_shapes = []
    for (ct, shape, project_name, og_repr) in reversed(sorted(rows, key=lambda x: x[0])):
        logf.write(f"{ct:5d}   {project_name}   {shape}   {og_repr.replace('\n',' ')}\n")
        if ct > 1 and len(top_shapes) < 15:
            top_shapes.append(shape)

    logf.write("\n\nTop uncategorized shapes:\n")
    for shape in top_shapes:
        logf.write(f"            \"{shape}\",\n")


    print("\\begin{tabular}{l|"+"c"*len([a for a in project_total.values() if a > 0])+"|c}")
    print("                             & " + " & ".join([project_names[p] for p in project_column_order if project_total.get(p,0) > 0]) + " & Total \\\\")
    print("    \\hline")

    for (shape,_) in canonical_shape:
        row = f"    {shape:25s}"
        total = 0
        for project in project_column_order:
            ct = tally_table.get((shape, project), 0)
            total += ct
            if project_total.get(project,0) == 0:
                continue
            row += f"   & {ct:5d}"
        row += f"   & {total:5d} \\\\"
        print(row)
        if shape == "Polynomial, degree >1":
            print("    \\hline")

    print("    \\hline")
    print("                             & " + " & ".join([str(project_total[p]) for p in project_column_order if project_total.get(p,0) > 0]) + " &")


    print("\\end{tabular}")

