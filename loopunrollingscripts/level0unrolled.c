
#include <stdio.h>

void it_crowd() {
puts("Are you feeling stressed, Jen\n");
for (int i = 0; i < 26; i++) {
    puts("Are you sure\n");
}
puts("Well, I guess you're not\n");
puts("Well done, Jen\n");
}

int some_calculation(int p) {
int x = 0;
for (int i = 0; i < 8; i++) {
    x += x*x + p;
}
return x;
}

int main(int argc, char **argv) {
it_crowd();
printf("Some calculation returned %d.", some_calculation(-23));
}

