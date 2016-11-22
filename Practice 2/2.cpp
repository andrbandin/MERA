// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	int guess;

	srand(time(NULL));

	int secret = rand() % 100 + 1;
	//printf_s("%d\n", secret);
	printf_s("Guess number (1 to 100) ");
	do {

		scanf_s("%d", &guess);

		if (secret < guess) {
			printf_s("Your number is less than %d\n", guess);
			printf_s("Again (1 to 100) ");
		}
		else
			if (secret > guess) {
				printf_s("Your number is greater than %d\n", guess);
				printf_s("Again (1 to 100) ");
			}

	} while (secret != guess);

	printf_s("BINGOOOOO!!!\n");

	system("pause");
	return 0;
}