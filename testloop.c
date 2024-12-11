#include <stdio.h>
void regular() {
    int i;
    for (i=0;i<20;i++) {
        printf("inline %d\n", i);
    }
}

void withIfCompare() {
    int i;
    for (i=0; i<17; i++) {
        if (i==6) {
            printf("withIfCompare");
        }
    }
}

void withIfModulo() {
    int i;
    for (i=100; i<117; i++) {
        if (i%5==0) {
            printf("inlineWithIf %d\n", i);
        }
    }
}

void withFizzBuzz() {
    int j;
    for (j=0; j<17; j++) {
        if (j%3==0) {
            printf("fizz%d\n", j);
        }
        if (j%5==0) {
            printf("buzz%d\n", j);
        }
    }
}

int main() {
    regular();
    withIfCompare();
    withIfModulo();
    withFizzBuzz();
    return 0;
}
