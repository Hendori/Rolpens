import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-s", "--size", type=int)

args = parser.parse_args()

simpleLoop = """printf("simple loop\\n");"""
loopWithIndex = """printf("Current iteration%d\\n", i);"""
loopWithIf = """
        if (i%2==0) {
            printf("inlineWithModulo %d\\n", i);
        }
"""

loopsize = args.size
filename = "createloops{}.c".format(loopsize)
filestart = "#include <stdio.h>"
startmain = "int main() {"


def createloop(size, name, codefragment):
    loopString = f"""

    void {name}{size}() {{
        printf("now going into loop {name} with size {size}\\n");
        int i;
        for (i=0; i<{size}; i++) {{
            {codefragment}
        }}
        printf("\\n");
    }}
    """
    with open(filename, "a") as file:
        file.write(loopString)


# starting regular code
with open(filename, "w") as file:
    file.write(filestart)

for a in range(1, loopsize):
    createloop(a, "simpleLoop", simpleLoop)

for a in range(1, loopsize):
    createloop(a, "loopWithIndex", loopWithIndex)

for a in range(1, loopsize):
    createloop(a, "loopWithIf", loopWithIf)


with open(filename, "a") as file:
    file.write(startmain)

for a in range(1, loopsize):
    with open(filename, "a") as file:
        file.write(f"""
        simpleLoop{a}();
        loopWithIndex{a}();
        loopWithIf{a}();
        """)

with open(filename, "a") as file:
    file.write("}")
