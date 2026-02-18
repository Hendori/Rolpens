import argparse
import os
import sys

import rolpens.rolpens as rolpens
from rolpens.formatter import Formatter
from rolpens.parsetree import get_parser
from rolpens.project import find_code_files

sys.setrecursionlimit(3000)


argparser = argparse.ArgumentParser(
    prog="rolpens",
    description="Rolpens tries to re-roll loops that were unrolled during compilation.",
)
argparser.add_argument(
    "--stats", default=False, action="store_true", help="Print statistics"
)
argparser.add_argument(
    "--output-dir",
    default=None,
    type=str,
    help="Directory in which to store processed files",
)
argparser.add_argument(
    "--results-file", default=None, type=str, help="file in which to store the results"
)

argparser.add_argument("file", nargs="+", help="Input C files")

config = argparser.parse_args()
workload = list(find_code_files(config.file))

to_stdout = False
if not config.stats and config.output_dir is None:
    if len(workload) <= 1:
        to_stdout = True
    else:
        sys.stderr.write(
            "Warning: no output directory set. Resorting to printing some statistics.\n"
        )
        sys.stderr.write(
            "(If this is what you wanted, suppress this message by adding the '--stats' flag.)\n"
        )
        config.stats = True

if config.output_dir is not None:
    os.makedirs(config.output_dir, exist_ok=True)

if config.results_file:
    with open(config.results_file, "w") as f:
        f.write("filename, for, while, do, for, while, do\n")

parser = get_parser("treesitter-cpp.so", "cpp")

project_stats = dict()

workloadsize = len(workload)
counter = 0
for project, filename in workload:
    counter += 1
    sys.stdout.write("\r\033[K")
    sys.stdout.write(f"\r{counter} van de {workloadsize} behandeld. Nu bij {filename}")
    sys.stdout.flush()
    if project not in project_stats:
        project_stats[project] = rolpens.RerollResult()

    # Read the C file
    with open(filename, "r") as f:
        source_code = f.read().encode()

    res = rolpens.process_file(filename, source_code, parser)
    if res.loops_found > 1:
        with open(config.results_file, "a") as f:
            f.write(
                f"{filename}, {res.before.for_loops}, {res.before.while_loops}, {res.before.do_loops}, {res.after.for_loops}, {res.after.while_loops}, {res.after.do_loops}, {res.loops_found}\n"
            )

    project_stats[project] += res

    if to_stdout or config.output_dir is not None:
        formatted = Formatter().format_tree(res.updated_tree)

        if to_stdout:
            print(formatted)
        elif config.output_dir is not None:
            with open(config.output_dir + "/" + os.path.basename(filename), "w+") as f:
                f.write(formatted)


if config.stats:
    for project, stats in project_stats.items():
        if len(project_stats) > 1:
            sys.stdout.write("\n")
            print(f"In {project}:")

        print(f"Loops found:        {stats.loops_found:-5d}")
        print(f"Statements removed: {stats.statements_removed:-5d}")
        print(f"           {'for':>6s} {'while':>6s} {'do':>6s} {'nodes':>8s}")
        print(
            f"   before:  {stats.before.for_loops:-6d} {stats.before.while_loops:-6d} {stats.before.do_loops:-6d} {stats.before.nodes:-8d}"
        )
        print(
            f"   after:   {stats.after.for_loops:-6d} {stats.after.while_loops:-6d} {stats.after.do_loops:-6d} {stats.after.nodes:-8d}"
        )
        if stats.before.nodes > 0:
            print(
                f"   Δ        {'':>6s} {'':>6s} {'':>6s} {(stats.before.nodes - stats.after.nodes) / (0.01 * stats.before.nodes):-8.1f}%"
            )
