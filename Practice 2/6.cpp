#include "stdafx.h"
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <Windows.h>
#define n 80
int main() {
	int a;
	char str[n] = "", temp;
	printf("Input string:");
	fgets(str, n, stdin);
	int j = 0;
	int i;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == ' ')
		{
			if (j == 0) continue;
			if (str[i + 1] == ' ') continue;
		}
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		a = strlen(str);
		for (a; a > 0; a--) {
			if (str[a - 1] == ' ') {
				str[a - 1] = '\0';
			}
			else break;
		}
		j++;
	}
	printf("Result:%s", str);
	system("pause");
	return 0;
}