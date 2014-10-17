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

int main(int argc, char *argv[]) {

	tempfunc();
	getch();
	/*
	int age = 28;
	printf("     |     |     \n");
	printf("     |     |     \n");
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("     |     |     \n");
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("     |     |     \n");
	printf("     |     |     \n");
	getch();
	return 0;
	*/
}