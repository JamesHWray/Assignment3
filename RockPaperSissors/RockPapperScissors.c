#include <stdio.h>
#include <string.h>
#include "main.h"

char *ThrownOut(char PlayerOne[],char PlayerTwo[]) {
	char* options[3] = { { "Rock" }, { "Paper" }, { "Scissors" } };
	int isValidOne = 1;
	int isValidTwo = 1;
	int pOneChoise = -1;
	int pTwoChoise = -1;
	for (int i = 0; i < 3; i++) {
		if (strcmp(options[i], PlayerOne) == 0|| strcmp(options[i], PlayerTwo) == 0) {
			if (strcmp(options[i], PlayerOne) == 0) { isValidOne = 0; }
			if (strcmp(options[i], PlayerTwo) == 0) { isValidTwo = 0; }
		}

	}
	if (isValidOne != 0 || isValidTwo != 0) {
		return "Invalid";
	}
	else
	{
		return "Valid";
	}
}
int main(void) {
	char Result[15];
	char PlayerOne[] = {"Paper"};
	char PlayerTwo[] = { "Rock" };
	strcpy_s(Result ,sizeof(Result), ThrownOut(PlayerOne, ""));
	printf("%s", Result);
}