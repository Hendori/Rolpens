import re


def extract_variable_part(lines):
    """Finds patterns with varying arguments (e.g., numbers)"""
    common_pattern = None
    variable_positions = []
    extracted_values = []

    for line in lines:
        numbers = re.findall(r"\d+", line)  # Extract all numbers
        print(numbers)
        extracted_values.append(numbers)
        print(extracted_values)

        # Replace numbers with a placeholder (e.g., "Hello %d")
        masked_line = re.sub(r"\d+", "{}", line)

        if common_pattern is None:
            common_pattern = masked_line  # First line sets the pattern
        elif masked_line != common_pattern:
            return None, None, None  # Different structure → Not a loop

    return common_pattern, extracted_values, variable_positions


def reroll_loops(code):
    lines = code.split("\n")
    new_code = []
    i = 0
    extracted_values = []

    while i < len(lines):
        line = lines[i].strip()

        # Skip empty lines
        if not line:
            new_code.append("")
            i += 1
            continue

        # Find repeated patterns
        count = 1
        similar_lines = [line]

        while i + count < len(lines) and lines[i + count].strip():
            next_line = lines[i + count].strip()
            similar_lines.append(next_line)
            print(similar_lines)

            # Check if only numbers are changing
            common_pattern, extracted_values, _ = extract_variable_part(similar_lines)
            if not common_pattern:
                break  # Stop if pattern no longer holds

            count += 1

        if count > 1:
            # Convert extracted numbers to a range
            print(extracted_values)
            start = int(extracted_values[0][0])
            end = int(extracted_values[-1][0])
            loop_var = "i"

            new_code.append(
                f"for (int {loop_var} = {start}; {loop_var} <= {end}; {loop_var}++) {{"
            )
            formatted_line = common_pattern.format(loop_var)
            new_code.append(f"    {formatted_line}")
            new_code.append("}")
            i += count  # Skip processed lines
        else:
            new_code.append(line)
            i += 1

    return "\n".join(new_code)


# Example C code with unrolled loops
c_code = """printf("Hello %d", 1);
printf("Hello %d", 2);
printf("Hello %d", 3);
printf("World %d", 5);
printf("World %d", 6);
printf("Single line");"""

rerolled_code = reroll_loops(c_code)
print(rerolled_code)
