import os
from typing import Union, List, Tuple, Iterable

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

