#include <stdio.h>

unsigned char some_blob[138] = "\x41\x6c\x6c\x69\x73\x6f\x6e\x00\x00\x00\x00\x00\x00\x00\x00\x00\xa5\x19\xd2\x04\x2a\x8f\x03\x42\x65\x72\x74\x72\x61\x6d\x00\x00\x00\x00\x00\x00\x00\x00\x00\x8e\xdc\x10\x09\x2d\xbe\x1d\x43\x61\x72\x6c\x6f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x6f\x91\x70\x1b\x2c\xbc\x0d\x44\x65\x76\x6f\x6e\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x91\xa2\x57\x1a\x28\x5a\x13\x45\x72\x6e\x65\x73\x74\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xd9\x17\x34\x0d\x2b\x93\x25\x46\x72\x61\x6e\x63\x69\x6e\x65\x00\x00\x00\x00\x00\x00\x00\x00\xb6\xc4\x98\x0f\x2a\x43\x12";

void all_badges() {
	int master_badge = 0;
	master_badge += *(unsigned short *)(some_blob + 16) - *(unsigned char *)(some_blob + 20);
	master_badge += *(unsigned short *)(some_blob + 39) - *(unsigned char *)(some_blob + 43);
	master_badge += *(unsigned short *)(some_blob + 62) - *(unsigned char *)(some_blob + 66);
	master_badge += *(unsigned short *)(some_blob + 85) - *(unsigned char *)(some_blob + 89);
	master_badge += *(unsigned short *)(some_blob + 108) - *(unsigned char *)(some_blob + 112);
	master_badge += *(unsigned short *)(some_blob + 131) - *(unsigned char *)(some_blob + 135);
	printf("We can open every door with badge #%d\n", master_badge);
}

void polynome_table() {
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

void red_herring() {
	printf("These are a few of my favorite numbers:\n");
	printf(" *  %d\n", 16);
	printf(" *  %d\n", 35);
	printf(" *  %d\n", 48);
	printf(" *  %d\n", 49);
	printf(" *  %d\n", 32);
}

void row_column(int *list) {
	int matrix[5][5];
	matrix[0][0] = list[0];
	matrix[0][1] = list[1];
	matrix[0][2] = list[2];
	matrix[0][3] = list[3];
	matrix[0][4] = list[4];
	matrix[1][0] = list[5];
	matrix[1][1] = list[6];
	matrix[1][2] = list[7];
	matrix[1][3] = list[8];
	matrix[1][4] = list[9];
	matrix[2][0] = list[10];
	matrix[2][1] = list[11];
	matrix[2][2] = list[12];
	matrix[2][3] = list[13];
	matrix[2][4] = list[14];
	matrix[3][0] = list[15];
	matrix[3][1] = list[16];
	matrix[3][2] = list[17];
	matrix[3][3] = list[18];
	matrix[3][4] = list[19];
	matrix[4][0] = list[20];
	matrix[4][1] = list[21];
	matrix[4][2] = list[22];
	matrix[4][3] = list[23];
	matrix[4][4] = list[24];
}

int main(int argc, char **argv) {
	all_badges();
	polynome_table();
	red_herring();
}
