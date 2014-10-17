#include <stdio.h>

void tempfunc() {
	double var1 = 1.1;
	float var2 = 2.2;
	short int var3 = 3;
	long var4 = 4;

	printf("Variable: %04f\n Size: %u\n", var1, sizeof var1);
	printf("Variable: %04f\n Size: %u\n", var2, sizeof var2);
	printf("Variable: %04hi\n Size: %u\n", var3, sizeof var3);
	printf("Variable: %04li\n Size: %u\n", var4, sizeof var4);
}

void tempfunc2() {
	char *s = malloc(100);
	scanf_s("%s", s, 100);
	printf("The input string is %s\n", s);
	scanf_s("%s", s, 100);
	printf("The second input string is %s\n", s);
	free(s);
}

int main(int argc, char *argv[]) {

	printf("     |     |     \n");
	printf("     |     |     \n");
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("     |     |     \n");
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("     |     |     \n");
	printf("     |     |     \n");

	char move = '\0';

	// When doing comparisons, have the constant go first
	while ('q' != move) {
		move = getch();
		printf("%c", move);
	}
	printf("press any key to exit..\n");
	getch();
	return 0;
}