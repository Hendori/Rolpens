#!/usr/bin/python

import csv

PROJECTS = ("coreutils", "openssl", "godot")
FLAGSETS = ("O2", "O3", "no-unroll")

def add(a, b):
    for (i, x) in enumerate(b):
        a[i] += x


print("\\begin{tabular}{llccc}")
print("")

print("    \\hrule")
print("    flags & & for & while & do \\")
print("    \\hrule")
print("")

for project in PROJECTS:
    print("")
    print("    \\textbf{" + project + "} & & & & \\\\")
    print("")

    sheets = [[] for _ in FLAGSETS]
    filescovered = [set() for _ in FLAGSETS]

    for (i, fs) in enumerate(FLAGSETS):
        with open(f"{project}-{fs}.csv","r") as f:
            csvr = csv.reader(f)
            for row in csvr: break # Skip first row
            sheets[i] = [["/".join(row[0].split("/")[3:])] + [int(x) for x in row[1:]] for row in csvr]
            filescovered[i] = set([row[0] for row in sheets[i]])

    shared_files = set.intersection(*filescovered)

    tally = [[0]*(len(sheet[0])-1) for sheet in sheets]
    for (i,sheet) in enumerate(sheets):
        for row in sheet:
            if row[0] in shared_files:
                add(tally[i], row[1:])

    for (i, fs) in enumerate(FLAGSETS):
        print(f"     {fs  :9s} & \\textit{{before}} & {tally[i][0]} & {tally[i][1]} & {tally[i][2]} \\\\")
        print(f"               & \\textit{{after}}  & {tally[i][3]} & {tally[i][4]} & {tally[i][5]} \\\\")

    print("")
    print("    \\hrule")

print("")
print("\\end{tabular}")
