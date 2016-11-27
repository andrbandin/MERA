#include "stdafx.h"
#include <Windows.h>


int main()
{
	int t=0;
	float H,HB,L, g=9.81 ;

	printf_s("Input H(m) - ");
	scanf_s("%f", &H);
	
	while (H > 0)
	{
		
			L = (g * t * t) / 2;
			H = H - L;
			t++;
			if (H <= 0)
			{
				H = 0;
			}
			printf_s("t = %.2dc  h = %.2fm \n", t, H);
			Sleep(1000);

	}
	printf_s("BABAH!\n");
	system("pause");

	return 0;



}