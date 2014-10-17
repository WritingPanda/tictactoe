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

// Thomas solution
void print_board(char board[9], char *message) {
	system("cls");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", board[0], board[1], board[2]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", board[3], board[4], board[5]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", board[6], board[7], board[8]);
	printf("     |     |     \n");
	printf("%s", message);
}

// Thomas solution
void attempt_move(char board[9], int pos) {
	if (' ' == board[pos]) {
		board[pos] = 'x';
		print_board(board, "nice move!");
	}
	else {
		print_board(board, "invalid move, try again");
	}
}

// Thomas solution
int main(int argc, char *argv[]) {
	char move = '\0';
	char board[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
	print_board(board, "ok, let's play!");
	while ('q' != move) {
		move = getch();
		switch (move) {
			case '7': attempt_move(board, 0); break;
			case '8': attempt_move(board, 1); break;
			case '9': attempt_move(board, 2); break;
			case '4': attempt_move(board, 3); break;
			case '5': attempt_move(board, 4); break;
			case '6': attempt_move(board, 5); break;
			case '1': attempt_move(board, 6); break;
			case '2': attempt_move(board, 7); break;
			case '3': attempt_move(board, 8); break;
		}
	}
	system("cls");
	printf("press any key to exit..\n");
	getch();
	return 0;
}