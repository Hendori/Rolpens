#include <stdio.h>

void make_absolutely_sure_its_even(int n) {
// Note: this function is indented incorrectly intentionally
for (int i = 0; i < 7; i++) {
    if (n % 2 == 0) {
}
printf("%d might actually be even\n", n);
} else {
printf("I'm getting mixed signals about %d.\n", n);
}
} else {
printf("There's no way to be sure if %d is odd.\n", n);
}
} else {
printf("It's possible that %d is odd.\n", n);
}
} else {
printf("%d might be odd.\n", n);
}
} else {
printf("I wouldn't discount the possibility that %d is odd.\n", n);
}
} else {
printf("%d may very well be odd.\n", n);
}
} else {
printf("Look, who's to say if %d is odd. Do your own research!\n", n);
for (int i = 0; i < 2; i++) {
    }
}

int main(int argc, char **argv) { make_absolutely_sure_its_even(2); }
