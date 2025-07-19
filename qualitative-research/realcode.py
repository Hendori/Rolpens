import os
from typing import Union, List, Tuple, Iterable, Optional, Callable
from loopunrollingscripts.parsetree import Node

def find_code_files(filenames: Union[str,List[str]], project_path_index: int = -1) -> Iterable[Tuple[str, str]]:
    if isinstance(filenames,str):
        filenames = [filenames]
    for filename in filenames:
        if os.path.isfile(filename):
            if filename[-2:] == ".c" or filename[-4:] == ".cpp":
                project_name = "project"
                if project_path_index >= 0 and len(filename.split("/")) > project_path_index:
                    project_name = filename.split("/")[project_path_index]
                yield (project_name, filename)
        elif os.path.isdir(filename):
            for chf in os.listdir(filename):
                if chf[:1] == ".":
                    continue
                yield from find_code_files(filename + "/" + chf, project_path_index)


def for_loops_in_tree(tree_root: Node, log_callback: Optional[Callable[[Node, str], None]]):
    if log_callback is None:
        def f(_a,_b): pass
        log_callback = f

    for for_loop in tree_root.get_nodes_by_type("for_statement"):
        varname = b"i"
        init_value: Optional[Node] = None

        initializer = for_loop.child_by_field_name("initializer")
        if initializer is None:
            continue
        elif initializer.type == "comma_expression":
            # FIXME: hier worden waarschijnlijk twee of meer iteratorvariabelen gebruikt, maar er is misschien wel iets te verzinnen
            continue
        elif initializer.type == "assignment_expression":
            varname = initializer.child_by_field_name("left").text
            init_value = initializer.child_by_field_name("right")
        elif initializer.type == "update_expression":
            argument = initializer.child_by_field_name("argument")
            if argument is not None and argument.type == "identifier":
                varname = argument.text
            else:
                log_callback(for_loop, str(initializer) + "\n")
                continue
        elif initializer.type == "declaration":
            declarator = initializer.child_by_field_name("declarator")
            if declarator is None or declarator.type != "init_declarator":
                log_callback(for_loop, str(initializer) + "\n")
                continue
            init_value = declarator.child_by_field_name("value")
            declarator = declarator.child_by_field_name("declarator")
            if declarator is None or declarator.type != "identifier":
                log_callback(for_loop, str(initializer) + "\n")
                continue
            varname = declarator.text
        else:
            source_text = for_loop.text
            loop_body = for_loop.child_by_field_name("body")
            if loop_body is not None and len(loop_body.text) > 2:
                source_text = source_text[:1-len(loop_body.text)]
            log_callback(for_loop, initializer.type + "\n" +
                str(for_loop) + "\n" +
                source_text.decode() + "\n")
            continue

        yield (for_loop, varname, init_value)

