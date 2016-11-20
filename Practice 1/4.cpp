// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>

int main()
{ 
	int f, d;
	float cm;
	printf("Input ft and inches like this(1 1)");
	scanf_s("%i %i", &f, &d);
	while (f < 0 || d < 0)
	{
		rewind(stdin);
		printf("Wrong, input ft and inches like this(1 1)");
		scanf_s("%i %i", &f, &d);
	}

	cm = (f * 12) * (d * 2.54);

	printf("Your growth is %.1f cm \n",cm);

	system("pause");
    return 0;
}

