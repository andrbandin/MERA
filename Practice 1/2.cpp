// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>


int main()
{
	int h, m, s;

	printf("Input time (hh:mm:ss) ");
	scanf_s("%i%*c%i*%c%i", &h, &m, &s);

	while (s < 0 || s > 60 )
	{
		rewind(stdin);
		printf("Wrong second, input time again (hh:mm:ss) ");
		scanf_s("%i%*c%i*%c%i", &h, &m, &s);

	}

	while (m < 0 || m > 60)
	{
		rewind(stdin);
		printf("Wrong minute, input time again (hh:mm:ss) ");
		scanf_s("%i%*c%i*%c%i", &h, &m, &s);

	}

	while (h < 0 || h > 24)
	{
		rewind(stdin);
		printf("Wrong hour, input time again (hh:mm:ss) ");
		scanf_s("%i%*c%i*%c%i", &h, &m, &s);

	}

	if (h >= 6 && h < 12)
	{
		printf("Good morning\n");

	}

	else if (h >= 12 && h < 18) 
	{
		printf("Good afternoon\n");
	}

	else if (h >= 18 && h < 24) 
	{
		printf("Good evening\n");
	}

	else
	{
		printf("Good night\n");

	}

	system("pause");

    return 0;
}

