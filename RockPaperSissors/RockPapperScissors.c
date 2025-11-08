#include <stdio.h>
#include <string.h>
#include "main.h"

char *ThrownOut(char PlayerOne[],char PlayerTwo[]) {
		
	return "Invalid";
}
int main(void) {
	char Result[15];
	strcpy_s(Result ,sizeof(Result), ThrownOut("", ""));
	printf("%s", Result);
}