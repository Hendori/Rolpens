class NotImplementedError(Exception):
    pass


class Formatter:
    def format_tree(self, root_node):
        self.indent = 0
        return self.format_node(root_node)

    def format_node(self, node) -> str:
        match node.type:
            # jq '.[] | select(.named) | .type' treesitter-decomp-c/src/node-types.json
            case "expression":
                return self._format_expression(node)
            case "statement":
                return self._format_statement(node)
            case "type_specifier":
                return self._format_type_specifier(node)
            case "abstract_array_declarator":
                return self._format_abstract_array_declarator(node)
            case "abstract_function_declarator":
                return self._format_abstract_function_declarator(node)
            case "abstract_parenthesized_declarator":
                return self._format_abstract_parenthesized_declarator(node)
            case "abstract_pointer_declarator":
                return self._format_abstract_pointer_declarator(node)
            case "abstract_reference_declarator":
                return self._format_abstract_reference_declarator(node)
            case "alignas_qualifier":
                return self._format_alignas_qualifier(node)
            case "alignof_expression":
                return self._format_alignof_expression(node)
            case "argument_list":
                return self._format_argument_list(node)
            case "array_declarator":
                return self._format_array_declarator(node)
            case "assignment_expression":
                return self._format_assignment_expression(node)
            case "attribute":
                return self._format_attribute(node)
            case "attribute_declaration":
                return self._format_attribute_declaration(node)
            case "attribute_specifier":
                return self._format_attribute_specifier(node)
            case "attributed_declarator":
                return self._format_attributed_declarator(node)
            case "attributed_statement":
                return self._format_attributed_statement(node)
            case "binary_expression":
                return self._format_binary_expression(node)
            case "bitfield_clause":
                return self._format_bitfield_clause(node)
            case "break_statement":
                return self._format_break_statement(node)
            case "call_expression":
                return self._format_call_expression(node)
            case "case_statement":
                return self._format_case_statement(node)
            case "cast_expression":
                return self._format_cast_expression(node)
            case "char_literal":
                return self._format_char_literal(node)
            case "comma_expression":
                return self._format_comma_expression(node)
            case "compound_literal_expression":
                return self._format_compound_literal_expression(node)
            case "compound_statement":
                return self._format_compound_statement(node)
            case "concatenated_string":
                return self._format_concatenated_string(node)
            case "condition_clause":
                return self._format_condition_clause(node)
            case "conditional_expression":
                return self._format_conditional_expression(node)
            case "continue_statement":
                return self._format_continue_statement(node)
            case "declaration":
                return self._format_declaration(node)
            case "declaration_list":
                return self._format_declaration_list(node)
            case "delete_expression":
                return self._format_delete_expression(node)
            case "destructor_name":
                return self._format_destructor_name(node)
            case "do_statement":
                return self._format_do_statement(node)
            case "else_clause":
                return self._format_else_clause(node)
            case "enum_specifier":
                return self._format_enum_specifier(node)
            case "enumerator":
                return self._format_enumerator(node)
            case "enumerator_list":
                return self._format_enumerator_list(node)
            case "expression_statement":
                return self._format_expression_statement(node)
            case "extension_expression":
                return self._format_extension_expression(node)
            case "field_declaration":
                return self._format_field_declaration(node)
            case "field_declaration_list":
                return self._format_field_declaration_list(node)
            case "field_designator":
                return self._format_field_designator(node)
            case "field_expression":
                return self._format_field_expression(node)
            case "for_statement":
                return self._format_for_statement(node)
            case "function_declarator":
                return self._format_function_declarator(node)
            case "function_definition":
                return self._format_function_definition(node)
            case "generic_expression":
                return self._format_generic_expression(node)
            case "gnu_asm_clobber_list":
                return self._format_gnu_asm_clobber_list(node)
            case "gnu_asm_expression":
                return self._format_gnu_asm_expression(node)
            case "gnu_asm_goto_list":
                return self._format_gnu_asm_goto_list(node)
            case "gnu_asm_input_operand":
                return self._format_gnu_asm_input_operand(node)
            case "gnu_asm_input_operand_list":
                return self._format_gnu_asm_input_operand_list(node)
            case "gnu_asm_output_operand":
                return self._format_gnu_asm_output_operand(node)
            case "gnu_asm_output_operand_list":
                return self._format_gnu_asm_output_operand_list(node)
            case "gnu_asm_qualifier":
                return self._format_gnu_asm_qualifier(node)
            case "goto_statement":
                return self._format_goto_statement(node)
            case "if_statement":
                return self._format_if_statement(node)
            case "init_declarator":
                return self._format_init_declarator(node)
            case "init_statement":
                return self._format_init_statement(node)
            case "initializer_list":
                return self._format_initializer_list(node)
            case "initializer_pair":
                return self._format_initializer_pair(node)
            case "labeled_statement":
                return self._format_labeled_statement(node)
            case "linkage_specification":
                return self._format_linkage_specification(node)
            case "macro_type_specifier":
                return self._format_macro_type_specifier(node)
            case "ms_based_modifier":
                return self._format_ms_based_modifier(node)
            case "ms_call_modifier":
                return self._format_ms_call_modifier(node)
            case "ms_declspec_modifier":
                return self._format_ms_declspec_modifier(node)
            case "ms_pointer_modifier":
                return self._format_ms_pointer_modifier(node)
            case "ms_unaligned_ptr_modifier":
                return self._format_ms_unaligned_ptr_modifier(node)
            case "namespace_identifier":
                return self._format_identifier(node)
            case "null":
                return self._format_null(node)
            case "offsetof_expression":
                return self._format_offsetof_expression(node)
            case "operator_name":
                return self._format_operator_name(node)
            case "optional_parameter_declaration":
                return self._format_parameter_declaration(node)
            case "parameter_declaration":
                return self._format_parameter_declaration(node)
            case "parameter_list":
                return self._format_parameter_list(node)
            case "parameter_pack_expansion":
                return self._format_parameter_pack_expansion(node)
            case "parenthesized_declarator":
                return self._format_parenthesized_declarator(node)
            case "parenthesized_expression":
                return self._format_parenthesized_expression(node)
            case "pointer_declarator":
                return self._format_pointer_declarator(node)
            case "pointer_expression":
                return self._format_pointer_expression(node)
            case "pointer_type_declarator":
                return self._format_pointer_type_declarator(node)
            case "preproc_call":
                return self._format_preproc_call(node)
            case "preproc_def":
                return self._format_preproc_def(node)
            case "preproc_defined":
                return self._format_preproc_defined(node)
            case "preproc_elif":
                return self._format_preproc_elif(node)
            case "preproc_elifdef":
                return self._format_preproc_elifdef(node)
            case "preproc_else":
                return self._format_preproc_else(node)
            case "preproc_function_def":
                return self._format_preproc_function_def(node)
            case "preproc_if":
                return self._format_preproc_if(node)
            case "preproc_ifdef":
                return self._format_preproc_ifdef(node)
            case "preproc_include":
                return self._format_preproc_include(node)
            case "preproc_params":
                return self._format_preproc_params(node)
            case "qualified_identifier":
                return self._format_qualified_identifier(node)
            case "ref_qualifier":
                return self._format_ref_qualifier(node)
            case "return_statement":
                return self._format_return_statement(node)
            case "seh_except_clause":
                return self._format_seh_except_clause(node)
            case "seh_finally_clause":
                return self._format_seh_finally_clause(node)
            case "seh_leave_statement":
                return self._format_seh_leave_statement(node)
            case "seh_try_statement":
                return self._format_seh_try_statement(node)
            case "sized_type_specifier":
                return self._format_sized_type_specifier(node)
            case "sizeof_expression":
                return self._format_sizeof_expression(node)
            case "storage_class_specifier":
                return self._format_storage_class_specifier(node)
            case "string_literal":
                return self._format_string_literal(node)
            case "struct_specifier":
                return self._format_struct_specifier(node)
            case "structured_binding_declarator":
                return self._format_structured_binding_declarator(node)
            case "subscript_argument_list":
                return self._format_subscript_argument_list(node)
            case "subscript_designator":
                return self._format_subscript_designator(node)
            case "subscript_expression":
                return self._format_subscript_expression(node)
            case "subscript_range_designator":
                return self._format_subscript_range_designator(node)
            case "switch_statement":
                return self._format_switch_statement(node)
            case "template_argument_list":
                return self._format_template_argument_list(node)
            case "template_function":
                return self._format_template_function(node)
            case "template_type":
                return self._format_template_type(node)
            case "translation_unit":
                return self._format_translation_unit(node)
            case "type_definition":
                return self._format_type_definition(node)
            case "type_descriptor":
                return self._format_type_descriptor(node)
            case "type_qualifier":
                return self._format_type_qualifier(node)
            case "unary_expression":
                return self._format_unary_expression(node)
            case "union_specifier":
                return self._format_union_specifier(node)
            case "update_expression":
                return self._format_update_expression(node)
            case "variadic_parameter":
                return self._format_variadic_parameter(node)
            case "while_statement":
                return self._format_while_statement(node)
            case "character":
                return self._format_character(node)
            case "comment":
                return self._format_comment(node)
            case "ERROR":
                return self._format_ERROR(node)
            case "escape_sequence":
                return self._format_escape_sequence(node)
            case "false":
                return self._format_false(node)
            case "field_identifier":
                return self._format_field_identifier(node)
            case "identifier":
                return self._format_identifier(node)
            case "ms_restrict_modifier":
                return self._format_ms_restrict_modifier(node)
            case "ms_signed_ptr_modifier":
                return self._format_ms_signed_ptr_modifier(node)
            case "ms_unsigned_ptr_modifier":
                return self._format_ms_unsigned_ptr_modifier(node)
            case "number_literal":
                return self._format_number_literal(node)
            case "preproc_arg":
                return self._format_preproc_arg(node)
            case "preproc_directive":
                return self._format_preproc_directive(node)
            case "primitive_type":
                return self._format_primitive_type(node)
            case "statement_identifier":
                return self._format_statement_identifier(node)
            case "string_content":
                return self._format_string_content(node)
            case "system_lib_string":
                return self._format_system_lib_string(node)
            case "true":
                return self._format_true(node)
            case "type_identifier":
                return self._format_type_identifier(node)
            case "signed" | "unsigned" | "long" | "short" | "this" | "operator" | "new":
                return node.text.decode()
            case "delete":
                return node.text.decode()
            case "(" | ")" | "{" | "}" | "[" | "]" | "," | ";" | ":" | "::":
                return node.text.decode()
            case "<" | ">" | "<=" | ">=" | "!=" | "==" | "!" | "||" | "&&":
                return node.text.decode()
            case "+" | "-" | "*" | "/" | "%" | "&" | "|" | "..." | "->" | "<-":
                return node.text.decode()
            case "=" | "+=" | "-=" | "*=" | "/=" | "%=" | "&=":
                return node.text.decode()
            case "[]" | "()":
                return node.text.decode()
            case "|=" | "&&=" | "||=" | "++" | "--" | "^" | ">>" | "<<" | "~":
                return node.text.decode()
            case _:
                print(node)
                print(node.byte_range)
                print("".join([self.format_node(ch) for ch in node.children]))
                print(node.text.decode())
                raise ValueError(
                    f"Unknown node type {node.type} within node of type {node.parent.type}"
                )

    def _ind(self) -> str:
        return "   " * self.indent

    def _format_abstract_array_declarator(self, node) -> str:
        return node.text.decode()

    def _format_abstract_function_declarator(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_abstract_parenthesized_declarator(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_abstract_pointer_declarator(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_abstract_reference_declarator(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_alignas_qualifier(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_alignof_expression(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_argument_list(self, node) -> str:
        self.indent += 1
        try:
            args = [
                self.format_node(x)
                for x in node.children
                if x.type not in ["(", ",", ")"]
            ]
            return "(" + ", ".join(args) + ")"
        finally:
            self.indent -= 1

    def _format_array_declarator(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_assignment_expression(self, node) -> str:
        left_f = self.format_node(node.child_by_field_name("left"))
        op_f = self.format_node(node.child_by_field_name("operator"))
        right_f = self.format_node(node.child_by_field_name("right"))
        return f"{left_f} {op_f} {right_f}"

    def _format_attribute(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_attribute_declaration(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_attribute_specifier(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_attributed_declarator(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_attributed_statement(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_binary_expression(self, node) -> str:
        left_f = self.format_node(node.child_by_field_name("left"))
        op_f = self.format_node(node.child_by_field_name("operator"))
        right_f = self.format_node(node.child_by_field_name("right"))
        if getattr(node, "tight", False):
            return f"{left_f}{op_f}{right_f}"
        return f"{left_f} {op_f} {right_f}"

    def _format_bitfield_clause(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_break_statement(self, node) -> str:
        return node.text.decode()

    def _format_call_expression(self, node) -> str:
        function_f = self.format_node(node.child_by_field_name("function"))
        arguments_f = self.format_node(node.child_by_field_name("arguments"))
        return function_f + arguments_f

    def _format_case_statement(self, node) -> str:
        return node.text.decode()

    def _format_cast_expression(self, node) -> str:
        type_f = self.format_node(node.child_by_field_name("type"))
        value_f = self.format_node(node.child_by_field_name("value"))
        return f"({type_f}){value_f}"

    def _format_char_literal(self, node) -> str:
        return node.text.decode()

    def _format_character(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_comma_expression(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_comment(self, node) -> str:
        return node.text.decode()

    def _format_ERROR(self, node) -> str:
        return node.text.decode()

    def _format_compound_literal_expression(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_compound_statement(self, node) -> str:
        close = "\n" + self._ind() + "}"
        self.indent += 1
        try:
            stmts = [
                self.format_node(x) for x in node.children if x.type not in ["{", "}"]
            ]
            if len(stmts) == 0:
                return "{}"
            return "{\n" + self._ind() + ("\n" + self._ind()).join(stmts) + close
        finally:
            self.indent -= 1

    def _format_concatenated_string(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_condition_clause(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_conditional_expression(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_continue_statement(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_declaration(self, node) -> str:
        type_f = self.format_node(node.child_by_field_name("type"))
        decl_f = self.format_node(node.child_by_field_name("declarator"))
        if node.parent.type == "compound_statement":
            # HACK: ik weet niet welke van de twee nou de uitzondering is,
            # die in een compound statement of die in een for-constructie.
            return f"{type_f} {decl_f};"
        else:
            return f"{type_f} {decl_f}"

    def _format_delete_expression(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_declaration_list(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_destructor_name(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_do_statement(self, node) -> str:
        f_body = self.format_node(node.child_by_field_name("body"))
        f_condition = self.format_node(node.child_by_field_name("condition"))
        return f"do {f_body} while {f_condition};"

    def _format_else_clause(self, node) -> str:
        return "else " + self.format_node(node.children[1])

    def _format_enum_specifier(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_enumerator(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_enumerator_list(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_escape_sequence(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_expression(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_expression_statement(self, node) -> str:
        return self.format_node(node.children[0]) + ";"

    def _format_extension_expression(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_false(self, node) -> str:
        return node.text.decode()

    def _format_field_declaration(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_field_declaration_list(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_field_designator(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_field_expression(self, node) -> str:
        return node.text.decode()

    def _format_field_identifier(self, node) -> str:
        return node.text.decode()

    def _format_for_statement(self, node) -> str:
        test_f = self.format_node(node.child_by_field_name("condition"))
        update_f = self.format_node(node.child_by_field_name("update"))
        body_f = self.format_node(node.child_by_field_name("body"))
        if node.child_by_field_name("initializer") != None:
            init_f = self.format_node(node.child_by_field_name("initializer"))
            return f"for ({init_f}; {test_f}; {update_f}) {body_f}"
        return f"for (; {test_f}; {update_f}) {body_f}"

    def _format_function_declarator(self, node) -> str:
        ident_f = self.format_node(node.child_by_field_name("declarator"))
        params_f = self.format_node(node.child_by_field_name("parameters"))
        return ident_f + params_f

    def _format_function_definition(self, node) -> str:
        decl_f = self.format_node(node.child_by_field_name("declarator"))
        if node.child_by_field_name("type") != None and node.child_by_field_name(
            "body"
        ):
            type_f = self.format_node(node.child_by_field_name("type"))
            body_f = self.format_node(node.child_by_field_name("body"))
            return type_f + " " + decl_f + " " + body_f
        if node.child_by_field_name("body") != None:
            body_f = self.format_node(node.child_by_field_name("body"))
            return decl_f + " " + body_f
        if node.child_by_field_name("type") != None:
            type_f = self.format_node(node.child_by_field_name("type"))
            return type_f + " " + decl_f
        return decl_f

    def _format_generic_expression(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_gnu_asm_clobber_list(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_gnu_asm_expression(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_gnu_asm_goto_list(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_gnu_asm_input_operand(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_gnu_asm_input_operand_list(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_gnu_asm_output_operand(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_gnu_asm_output_operand_list(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_gnu_asm_qualifier(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_goto_statement(self, node) -> str:
        return node.text.decode()

    def _format_identifier(self, node) -> str:
        return node.text.decode()

    def _format_if_statement(self, node) -> str:
        condition_f = self.format_node(node.child_by_field_name("condition"))
        consequence_f = self.format_node(node.child_by_field_name("consequence"))
        alternative_node = node.child_by_field_name("alternative")
        if alternative_node is not None:
            alternative_f = self.format_node(alternative_node)
            return f"if {condition_f} {consequence_f} {alternative_f}"
        return f"if {condition_f} {consequence_f}"

    def _format_init_declarator(self, node) -> str:
        ident_f = self.format_node(node.child_by_field_name("declarator"))
        value_node = node.child_by_field_name("value")
        if value_node is not None:
            value_f = self.format_node(value_node)
            return f"{ident_f} = {value_f}"
        return ident_f

    def _format_init_statement(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_initializer_list(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_initializer_pair(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_labeled_statement(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_linkage_specification(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_macro_type_specifier(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_ms_based_modifier(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_ms_call_modifier(self, node) -> str:
        return node.text.decode()

    def _format_ms_declspec_modifier(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_ms_pointer_modifier(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_ms_restrict_modifier(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_ms_signed_ptr_modifier(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_ms_unaligned_ptr_modifier(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_ms_unsigned_ptr_modifier(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_new_expression(self, node) -> str:
        return "".join([self.format_node(x) for x in node.children])

    def _format_null(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_number_literal(self, node) -> str:
        return node.text.decode()

    def _format_offsetof_expression(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_operator_name(self, node) -> str:
        return " ".join([self.format_node(x) for x in node.children])

    def _format_parameter_declaration(self, node) -> str:
        return " ".join([self.format_node(x) for x in node.children])

    def _format_parameter_pack_expansion(self, node) -> str:
        return " ".join([self.format_node(x) for x in node.children])

    def _format_parameter_list(self, node) -> str:
        return (
            "("
            + ", ".join(
                [
                    self.format_node(x)
                    for x in node.children
                    if x.type not in ["(", ",", ")"]
                ]
            )
            + ")"
        )

    def _format_parenthesized_declarator(self, node) -> str:
        return node.text.decode()

    def _format_parenthesized_expression(self, node) -> str:
        for child in node.children:
            if child.type in ["(", ")"]:
                continue
            return f"( {self.format_node(child)} )"
        return "()"

    def _format_pointer_declarator(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_pointer_expression(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_pointer_type_declarator(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_preproc_arg(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_preproc_call(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_preproc_def(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_preproc_defined(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_qualified_identifier(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_ref_qualifier(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_preproc_directive(self, node) -> str:
        return node.text.decode()

    def _format_preproc_elif(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_preproc_elifdef(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_preproc_else(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_preproc_function_def(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_preproc_if(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_preproc_ifdef(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_preproc_include(self, node) -> str:
        return "#include " + self.format_node(node.child_by_field_name("path"))

    def _format_preproc_params(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_primitive_type(self, node) -> str:
        return node.text.decode()

    def _format_return_statement(self, node) -> str:
        for child in node.children:
            if child.type in ["return", ";"]:
                continue
            return f"return {self.format_node(child)};"
        return "return;"

    def _format_seh_except_clause(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_seh_finally_clause(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_seh_leave_statement(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_seh_try_statement(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_sized_type_specifier(self, node) -> str:
        return " ".join([self.format_node(ch) for ch in node.children])

    def _format_sizeof_expression(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_statement(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_statement_identifier(self, node) -> str:
        return node.text.decode()

    def _format_storage_class_specifier(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_string_content(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_string_literal(self, node) -> str:
        return node.text.decode()

    def _format_struct_specifier(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_structured_binding_declarator(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_subscript_argument_list(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_subscript_designator(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_subscript_expression(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_subscript_range_designator(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_template_argument_list(self, node):
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_template_function(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_template_type(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_switch_statement(self, node) -> str:
        f_body = self.format_node(node.child_by_field_name("body"))
        f_condition = self.format_node(node.child_by_field_name("condition"))
        return f"switch {f_condition} {f_body}"

    def _format_system_lib_string(self, node) -> str:
        return node.text.decode()

    def _format_translation_unit(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_true(self, node) -> str:
        return node.text.decode()

    def _format_type_definition(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_type_descriptor(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])

    def _format_type_identifier(self, node) -> str:
        # TODO: check of dit klopt
        return node.text.decode()

    def _format_type_qualifier(self, node) -> str:
        return node.text.decode()

    def _format_type_specifier(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_unary_expression(self, node) -> str:
        return node.text.decode()

    def _format_union_specifier(self, node) -> str:
        print(node)
        print(node.text.decode())
        raise NotImplementedError()

    def _format_update_expression(self, node) -> str:
        left_f = self.format_node(node.child_by_field_name("argument"))
        op_f = self.format_node(node.child_by_field_name("operator"))
        return f"{left_f}{op_f}"

    def _format_variadic_parameter(self, node) -> str:
        return node.text.decode()

    def _format_while_statement(self, node) -> str:
        f_body = self.format_node(node.child_by_field_name("body"))
        f_condition = self.format_node(node.child_by_field_name("condition"))
        return f"while {f_condition} {f_body};"

    def return_children(self, node) -> str:
        return "".join([self.format_node(ch) for ch in node.children])
