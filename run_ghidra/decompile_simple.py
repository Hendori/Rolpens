#!/usr/bin/env python2
# -*- coding:utf-8 -*-

"""
Python Script used to communicate with Ghidra's API. It will decompile the
specified functions and print the pseudo-C to stdout.
"""

import os, sys
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

# Communicates with Decompiler Interface
decompinterface = DecompInterface()

# Open Current Program
decompinterface.openProgram(currentProgram);


# Get Binary Functions
functions = list(currentProgram.getFunctionManager().getFunctions(True))

function_names = [ str(x) for x in getScriptArgs() ]
if len(function_names) == 0:
    function_names = [str(x) for x in functions if str(x)[0] != '_' and str(x)[:12] != '<EXTERNAL>::']

# Prints Current Python version (2.7)
print "Current Python version: " + str(sys.version.decode())
print "Available functions: " + ", ".join([str(x) for x in functions])
print "Selected functions: " + ", ".join(function_names)

# Iterates through all functions in the binary and decompiles them
# Then prints the Pseudo C Code

output = ""

for function in functions:
    if str(function) not in function_names:
        continue

    # Decompile function
    decompiled_function = decompinterface.decompileFunction(function, 0, ConsoleTaskMonitor())
    output += decompiled_function.getDecompiledFunction().getC() + "\n"

if "GHIDRA_C_OUTPUT_FILE" in os.environ:
    with open(os.environ["GHIDRA_C_OUTPUT_FILE"], "wb+") as f:
        f.write(output.encode("utf-8"))
else:
    print(output)

