#include "stdafx.h"
#include <Windows.h>



int main()
{
	int h;
	printf("Enter the number of rows: ");
	scanf_s("%d", &h);
	while (h < 0 || h > 50)
	{
		rewind(stdin);
		printf("Enter the number of rows again(1-50): ");
		scanf_s("%d", &h);
	}


	for (int l = 1; l <= h; l++) {

		for (int s = 0; s <= h - l; s++) {
			printf(" ");
		}

		for (int w = 1; w <= 2 * l - 1; w++) {
			printf("*");
		}
		printf("\n");
	}


	system("pause");

	return 0;
}