import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-s", "--size", type=int)

args = parser.parse_args()

loopsize = args.size
filename = "createloops{}.c".format(loopsize)
codefragment = """printf("Current itteration: %d\\n", i);"""
filestart = "#include <stdio.h>"
startmain = "int main() {"

def createloop(size):
    loopString = f"""
    void loopWithSize{size}() {{
        int i;
        for (i=0; i<{size}; i++) {{
            {codefragment}
        }}
    printf("\\n");
    }}
    """
    with open(filename, "a") as file:
        file.write(loopString)


#starting regular code
with open(filename, "w") as file:
    file.write(filestart)

for a in range (1,loopsize):
    createloop(a)

with open(filename,"a") as file:
    file.write(startmain)

for a in range(1, loopsize):
    with open(filename, "a") as file:
        file.write(f"""
        loopWithSize{a}();
        """)

with open(filename, "a") as file:
    file.write("}")
