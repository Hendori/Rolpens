import argparse
from pathlib import Path

import rolpens.rolpens as rolpens
from rolpens.parsetree import get_parser
import sys

sys.setrecursionlimit(3000)


argparser = argparse.ArgumentParser(
    prog="tree-analyse.py",
    description="Probeer loops die zijn uitgerold terug te rollen naar een for-constructie",
)
argparser.add_argument("files", nargs="+")
config = argparser.parse_args()

parser = get_parser("treesitter-cpp.so", "cpp")

stats = rolpens.RerollResult()

for file in config.files:
    folder = Path(file)
    if folder.is_dir():
        for file in folder.glob("*.c"):
            res = rolpens.process_file(file, parser)
            stats += res
    else:
        res = rolpens.process_file(Path(file), parser)
        stats += res
print("totaal loops gevonden is " + str(stats.count_loops))
print("totaal reductie regels is  " + str(stats.reduction_through_loops))
print("totaal aantal regels is  " + str(stats.total_line_numbers))
print("gereduceerd is " + str(stats.reduction_through_loops / stats.total_line_numbers))
