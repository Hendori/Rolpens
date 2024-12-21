loopsize = 100
compilersetting = 3
filename = "createloop{}-{}.c".format(loopsize,compilersetting)
codefragment = """printf("Current itteration: %d\\n, i);"""

f = open(filename, "a")

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
    print(loopString)

for a in range (1,100): {
    createloop(a)
}
