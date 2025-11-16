def generate_c_code(num_lines: int, loop_size) -> str:
    code = []
    code.append("#include <stdio.h>")
    code.append("")
    code.append("int main() {")
    code.append(f"    for (int i = 0; i < {loop_size}; i++) {{")

    for i in range(1, num_lines + 1):
        code.append(f'        printf("Line {i}");')

    code.append("    }")
    code.append("    return 0;")
    code.append("}")

    return "\n".join(code)


if __name__ == "__main__":
    for num_lines in range(1, 20):
        for loop_size in range(1, 200):
            c_code = generate_c_code(num_lines, loop_size)
            filename = f"cfile-loop{loop_size}-length{num_lines}.c"
            with open(f"loops/{filename}", "w") as f:
                f.write(c_code)

            print(f"C-code opgeslagen in {filename}")
