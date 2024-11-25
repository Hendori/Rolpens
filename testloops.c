#include <stdio.h>
void regular() {
    int i;
    for (i=0; i<4;i++) {
        printf("inline\n");
    }
}

void withIfCompare() {
    int i;
    for (i=0; i<17; i++) {
        if (i==20) {
            printf("withIfCompare");
        }
    }
}

void withIfModulo() {
    int i;
    for (i=0; i<7; i++) {
        if (i%2==0) {
            printf("inlineWithIf\n");
        }
    }
}

void withFizzBuzz() {
    int j;
    for (j=2; j<19; j++) {
        if (j%3==0) {
            printf("fizz%d", j);
        }
        if (j%5==0) {
            printf("buzz%d", j);
        }
    }
}

void main() {
    int inlineWithIfSize=3;
    int i;
    regular();
    withIfCompare();
    withIfModulo();
    withFizzBuzz();
    return;

