extern "C"
{
	#include <stdio.h>
	#include <math.h>
	#include <stdlib.h>
}
int main()
{
	double x, y, a , b;
	printf("Delta.-Version:v0.1.4_alpha.\n");
	printf("Present by Kloncesoft.All rights reserved.\n");
	printf("Input the value of x,y:");
	scanf_s("%lf%lf", &x, &y);
	a = (x * 2 + 2) / y;
	b = (a >= 1 ? a : (a >= 0 ? (1 / a) : (-1 * a)));
	printf("%lf\n", b);
	system("pause");
	return 0;
}
