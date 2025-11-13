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

for file in config.files:
    folder = Path(file)
    if folder.is_dir():
        for file in folder.glob("*.c"):
            rolpens.loop_found = 0
            rolpens.process_file(file, parser)
    else:
        rolpens.loop_found = 0
        rolpens.process_file(Path(file), parser)
print("totaal loops gevonden is " + str(rolpens.count_loops))
print("totaal reductie regels is  " + str(rolpens.reduction_through_loops))
print("totaal aantal regels is  " + str(rolpens.total_line_numbers))
print("gereduceerd is " + str(rolpens.reduction_through_loops / rolpens.total_line_numbers))
