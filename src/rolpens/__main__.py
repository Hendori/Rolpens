import argparse

import rolpens.rolpens as rolpens
from rolpens.parsetree import get_parser
from rolpens.project import find_code_files
import sys

sys.setrecursionlimit(3000)


argparser = argparse.ArgumentParser(
    prog="tree-analyse.py",
    description="Probeer loops die zijn uitgerold terug te rollen naar een for-constructie",
)
argparser.add_argument("files", nargs="+")
config = argparser.parse_args()

parser = get_parser("treesitter-cpp.so", "cpp")

project_stats = dict()

for project, file in find_code_files(config.files):
    if project not in project_stats:
        project_stats[project] = rolpens.RerollResult()

    res = rolpens.process_file(file, parser)
    project_stats[project] += res


for project, stats in project_stats.items():
    if len(project_stats) > 1:
        print(f"In {project}:")

    print("totaal loops gevonden is " + str(stats.count_loops))
    print("totaal reductie regels is  " + str(stats.reduction_through_loops))
    print("totaal aantal regels is  " + str(stats.total_line_numbers))
    print("gereduceerd is " + str(stats.reduction_through_loops / stats.total_line_numbers))
