// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>


int main()
{
	char rod;
	float deg,degNEW;
	printf("Enter degrees(D/R) ");
	scanf_s("%f%c", &deg, &rod);
	
	while (rod != 'R' && rod != 'D')
	{
		rewind(stdin);
		printf("Wrong, enter,input degrees again (45.00D/45.00R) ");
		scanf_s("%f%c", &deg, &rod);

	}


	while (deg < 0) 
	{

		rewind(stdin);
		printf("Wrong enter, input degrees again (D/R): ");
		scanf_s("%f %c", &deg, &rod);
	}

	if (rod == 'R')
	{ 	
	
		degNEW = (deg * 180) / 3.14;
		printf("%.3f%c  = %.3fD\n", deg, rod, degNEW);
	
	}
	 
	else 
	{
		degNEW = (deg * 3.14) / 180;
		printf("%.3f%c  = %.3fR\n", deg, rod, degNEW);
	}

	system("pause");

    return 0;
}

