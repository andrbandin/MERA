// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <time.h>
#include <windows.h>
# define N 8


int main()
{


	int i = 0,j; char  arr[N], temp;
	srand(time(NULL) | clock());


	for (i,j = N - 1; i<N, i<j; i++, j--)
	{
		arr[i] = rand() % 10 + '0';
		arr[j] = rand() % 26 + 'a';

		temp = arr[i]; 
		arr[i] = arr[j]; 
		arr[j] = temp;

		arr[N - 1] = '\0';      
	}

	puts(arr);
	printf_s("\n");
	system("pause");
	return 0;
			}