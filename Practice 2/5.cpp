// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <time.h>
#include <windows.h>


int main()
{
	int i, k, choose, passlenght = 8;
	srand(time(NULL));

	for (i = 0; i<10; i++)
	{
		for (k = 0; k<passlenght; k++)
		{
			choose = rand() % 3;
			switch (choose)
			{
			case 0:
				putchar(rand() % ('z' - 'a') + 'a');
				break;
			case 1:
				putchar(rand() % ('Z' - 'A') + 'A');
				break;
			default:
				putchar(rand() % ('9' - '0') + '0');
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}