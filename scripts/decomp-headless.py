#!/usr/bin/python

import argparse
import os
import subprocess

argparser = argparse.ArgumentParser(
        prog="decomp-headless",
        description="Decompileer een binary naar C")
argparser.add_argument("-o", nargs="?", default="-")
argparser.add_argument("binary")
config = argparser.parse_args()

new_env = os.environ.copy()
if config.o != "-":
    os.makedirs(os.path.dirname(config.o), exist_ok=True)
    new_env["GHIDRA_C_OUTPUT_FILE"] = config.o

with open("/dev/null", "wb") as discard:
    subprocess.call([os.path.dirname(__file__)+"/run_ghidra/run.sh", config.binary], env=new_env, stdout=discard)

