import re


def extract_variable_part(lines):
    """Find patterns with varying arguments like numbers"""
    common_pattern = None
    variable_positions = []
    extracted_values = []
    for line in lines:
        numbers = re.findall(r"\d+", line)
        extracted_values.append(numbers)

        masked_line = re.sub(r"\d+", "{}", line)
        if common_pattern is None:
            common_pattern = masked_line
        elif masked_line != common_pattern:
            return None, None, None
    return common_pattern, extracted_values, variable_positions


def reroll_loops(code):
    lines = code.split("\n")
    new_code = []
    i = 0
    while i < len(lines):
        line = lines[i].strip()
        if not line:
            new_code.append("")
            i += 1
            continue

        count = 1
        similar_lines = [line]
        while i + count < len(lines) and lines[i + count].strip():
            next_line = lines[i + count].strip()
            similar_lines.append(next_line)

            common_pattern, extracted_values, _ = extract_variable_part(similar_lines)
            if not common_pattern:
                break
            count += 1

        if count > 1:
            start = int(extracted_values[0][0])
            end = int(extracted_values[-1][0])
            loop_var = "j"
            new_code.append(
                f"for (int {loop_var} = {start}; {loop_var} <= {end}; {loop_var}++) {{"
            )
            formatted_line = common_pattern.format(loop_var)
            new_code.append(f"    {formatted_line}")
            new_code.append("}")
            i += count
        else:
            new_code.append(line)
            i += 1
    return "\n".join(new_code)


c_code = """printf("Hello %d", 1);
printf("Hello %d", 2);
printf("Hello %d", 3);
printf("World %d", 5);
printf("World %d", 6);
printf("Single line");"""

rerolled_code = reroll_loops(c_code)
print(rerolled_code)
