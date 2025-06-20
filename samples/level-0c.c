#include <stdio.h>

int square(int n) {
	//  +---------------+
	//  |               |
	//  |               |
	//  |               |
	//  |               |
	//  |               |
	//  |               |
	//  |               |
	//  +---------------+
	return n*n;
}

int bacteria = 3141592;

void lather() {
	bacteria += 3;
}

void rinse() {
	bacteria /= 2;
}

void wash_hands() {
	lather();
	rinse();

	lather();
	rinse();

	lather();
	rinse();

	lather();
	rinse();

	lather();
	// Maybe use distilled water this time, just to be safe.
	rinse();
}

void wash_feet() {
	// It's best if you sit down for this.
	lather();
	rinse();
	// It's okay to stand up again.

	// It's best if you sit down for this.
	lather();
	rinse();
	// It's okay to stand up again.

	// It's best if you sit down for this.
	lather();
	rinse();
	// It's okay to stand up again.

	// It's best if you sit down for this.
	lather();
	rinse();
	// It's okay to stand up again.
}

int main(int argc, char **argv) {
	printf("%d squared: %d\n", 111111, square(111111));
	wash_hands();
	wash_feet();
	printf("bacteria left: %d\n", bacteria);
}
