import re


def reroll_loops(code):
    lines = code.split("\n")
    new_code = []
    i = 0

    while i < len(lines):
        line = lines[i].strip()

        # Skip empty lines
        if not line:
            new_code.append("")
            i += 1
            continue

        # Find repeated sequences
        count = 1
        while i + count < len(lines) and lines[i + count].strip() == line:
            count += 1

        # If repeated at least twice, replace with a loop
        if count > 1:
            new_code.append(f"for (int i = 0; i < {count}; i++) {{")
            new_code.append(f"    {line}")
            new_code.append("}")
            i += count  # Skip processed lines
        else:
            new_code.append(line)
            i += 1

    return "\n".join(new_code)


with open("level-0-not-working-for-rerolling.c", "r") as file:
    c_code = file.read()

rerolled_code = reroll_loops(c_code)
with open("level-0-not-working-for-rerolling-out.c", "w") as file:
    file.write(rerolled_code)
