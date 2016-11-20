// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	char sex;
	float weight, height, ind;
	

	printf("Enter your sex(m/f): ");
	scanf_s("%c", &sex);

	while (sex != 'm' && sex != 'f')
	{
		rewind(stdin);
		printf("Incorrect value, try to enter a person's sex again(m/f)");
		scanf_s("%c", &sex);
	}

	printf("Enter your weight(kg): ");
	scanf_s("%f", &weight);

	while (weight <= 27 || weight >= 728) //https://goo.gl/6fCJdp -the thinnest, https://goo.gl/okyz6E - the fattest.
	{
		rewind(stdin);
		printf("Incorrect value, try to enter a person's weight again(kg)");
		scanf_s("%f", &weight);
	}

	printf("Enter your height(m): ");
	scanf_s("%f", &height);

	while (height <= 0.67 || height > 2.47) //https://goo.gl/Tb3ZSl - the smallest, https://goo.gl/2pIaIN - the biggest.

	{
		rewind(stdin);
		printf("Incorrect value, try to enter a person's height again(m)");
		scanf_s("%f", &height);
	}

	ind = weight / (height * height); 
	
	if (sex == 'm')
	{
		if (ind < 19)
		{
			printf("You need to gain weight");
		}
		else if (ind < 25)
		{
			printf("Your weight is norm");
		}
		else 
		{
			printf("You need to lose some weight");
		}
		

	}
	else
	{
		if (ind < 19)
		{
			printf("You need to gain weight");
		}
		else if (ind < 24)
		{
			printf("Your weight is norm");
		}
		else 
		{
			printf("You need to lose some weight");
		}
		

	}

	
	getchar();
	getchar();

	return 0;
}
