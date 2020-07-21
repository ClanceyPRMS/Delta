extern "C"
{
	#include <stdio.h>
	#include <math.h>
	#include <stdlib.h>
}
int main()
{
	double x, y, a , b , c , f ;
	int selector1;
	printf("------------------------------------------------\n");
	printf("Delta.-Version:v0.1.6_alpha.\n");
	printf("Present by Kloncesoft.All rights reserved.\n");
	printf("------------------------------------------------\n");
	printf("Select a program:\n");
	printf("1.Exchange between degree Celsius(C) and Fahrenhait(F)\n");
	printf("2.Example of conditional calculating\n");
	scanf_s("%d", &selector1);
	if (selector1 = 1)
	{
		int fselector;
		printf("Please select: 1. C=>F | 2. F=>C\n");
		scanf_s("%d", &fselector);
		if (fselector = 1)
		{
			printf("Input degree Celsius(C):");
			scanf_s("%lf", &c);
			f = 1.8 * c + 32;
			printf("The corresponding degree Fahrenhait of the degree Celsius %lf is %lf\n", c, f);
		}
		else if (fselector = 2)
		{
			printf("Input degree Fahrenhait(F):");
			scanf_s("%lf", &f);
			c = (f - 32) / 1.8;
			printf("The corresponding degree Celsius of the degree Fahrenhait %lf is %lf\n", f, c);
		}
		else
		{
			printf("Error 2:Invaild Selector Number\n");
		}
	}
	else if (selector1 = 2)
	{
		printf("Input the value of x,y:");
		scanf_s("%lf%lf", &x, &y);
		a = (x * 2 + 2) / y;
		b = (a >= 1 ? a : (a >= 0 ? (1 / a) : (-1 * a)));
		printf("%lf\n", b);
	}
	else
	{
		printf("Error 2:Invalid Selector Number\n");
	}
	system("pause");
	return 0;
}
