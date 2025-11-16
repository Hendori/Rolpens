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

    print(f"Loops found:        {stats.loops_found:-5d}")
    print(f"Statements removed: {stats.statements_removed:-5d}")
    print(f"           {"for":>6s} {"while":>6s} {"do":>6s} {"nodes":>8s}")
    print(f"   before:  {stats.before.for_loops:-6d} {stats.before.while_loops:-6d} {stats.before.do_loops:-6d} {stats.before.nodes:-8d}")
    print(f"   after:   {stats.after.for_loops:-6d} {stats.after.while_loops:-6d} {stats.after.do_loops:-6d} {stats.after.nodes:-8d}")
    if stats.before.nodes > 0:
        print(f"   Δ        {"":>6s} {"":>6s} {"":>6s} {(stats.before.nodes - stats.after.nodes)/(0.01*stats.before.nodes):-8.1f}%")
