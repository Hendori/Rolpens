#include <stdio.h>

void polynome_tables() {
	int i = 7;
	printf("P(%d) = %d\n", 0, 5);
	printf("P(%d) = %d\n", 1, -55);
	printf("P(%d) = %d\n", 2, -93);
	printf("P(%d) = %d\n", 3, -109);
	printf("P(%d) = %d\n", 4, -103);
	printf("P(%d) = %d\n", 5, -75);
	printf("P(%d) = %d\n", 6, -25);
	printf("P(%d) = %d\n", 7, 47);
	printf("P(%d) = %d\n", 8, 141);
	printf("P(%d) = %d\n", 9, 257);
	printf("P(%d) = %d\n", 10, 395);
	printf("but i is still %d\n", i);

	printf("P(%d) = %d\n", 0, 5);
	printf("P(%d) = %d\n", 1, -55);
	printf("P(%d) = %d\n", 2, -93);
	printf("P(%d) = %d\n", 3, -109);
	printf("P(%d) = %d\n", 4, -103);
	printf("P(%d) = %d\n", 5, -75);
	printf("P(%d) = %d\n", 6, -25);
	printf("P(%d) = %d\n", 7, 47);
	printf("P(%d) = %d\n", 8, 141);
	printf("P(%d) = %d\n", 9, 257);
	printf("P(%d) = %d\n", 10, 395);
}

void triangular_code() {
	printf("Row %d: ", 0);
	printf("\n");
	printf("Row %d: ", 1);
	printf("%d ", 1);
	printf("\n");
	printf("Row %d: ", 2);
	printf("%d ", 2);
	printf("%d ", 1);
	printf("\n");
	printf("Row %d: ", 3);
	printf("%d ", 3);
	printf("%d ", 2);
	printf("%d ", 1);
	printf("\n");
	printf("Row %d: ", 4);
	printf("%d ", 4);
	printf("%d ", 3);
	printf("%d ", 2);
	printf("%d ", 1);
	printf("\n");
	printf("Row %d: ", 5);
	printf("%d ", 5);
	printf("%d ", 4);
	printf("%d ", 3);
	printf("%d ", 2);
	printf("%d ", 1);
	printf("\n");
	printf("Row %d: ", 6);
	printf("%d ", 6);
	printf("%d ", 5);
	printf("%d ", 4);
	printf("%d ", 3);
	printf("%d ", 2);
	printf("%d ", 1);
	printf("\n");
	printf("Row %d: ", 7);
	printf("%d ", 7);
	printf("%d ", 6);
	printf("%d ", 5);
	printf("%d ", 4);
	printf("%d ", 3);
	printf("%d ", 2);
	printf("%d ", 1);
	printf("\n");
}

int main(int argc, char **argv) {
	triangular_code();
	polynome_tables();
}
