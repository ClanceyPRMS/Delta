extern "C"
{
	#include <stdio.h>
	#include <math.h>
	#include <stdlib.h>
}
int main()
{
	double x, y, a , b , c , f ;
	int main_sele;
	printf("------------------------------------------------\n");
	printf("Delta.-Version:v0.1.7.6_alpha.\n");
	printf("Present by Kloncesoft.All rights reserved.\n");
	printf("------------------------------------------------\n");
	printf("Select a program:\n");
	printf("|1.Basic calculator    |   2.Scientific calculator\n");
	printf("|3.Unit exchange       |   4.Comming soon.\n");
	scanf_s("%d", &main_sele);  /*=运算符不正确: 在 Boolean 上下文中执行了常量赋值。应考虑改用“==”*/
	if (main_sele == 1) /*The main selector.Now executes if its value is 1*/
	{
		int ba_cal_selector;
		printf("Select the branch program:  1.+  2.-  3.* 4./\n");
		scanf_s("%d", &ba_cal_selector);
		switch (ba_cal_selector)    /*Execute the basic calculator program*/
		{
		case 1:
			printf("a=x+y.Now input the values of x and y:");
			scanf_s("%lf%lf", &x, &y);
			a = x + y;
			printf("%lf+%lf=%lf\n", x, y, a);
			break;
		case 2:
			printf("a=x-y.Now input the values of x and y:");
			scanf_s("%lf%lf", &x, &y);
			a = x - y;
			printf("%lf-%lf=%lf\n", x, y, a);
			break;
		case 3:
			printf("a=x*y.Now input the values of x and y:");
			scanf_s("%lf%lf", &x, &y);
			a = x * y;
			printf("%lf*%lf=%lf\n", x, y, a);
			break;
		case 4:
			printf("a=x/y.Now input the values of x and y:");
			scanf_s("%lf%lf", &x, &y);
			a = x / y;
			printf("%lf/%lf=%lf\n", x, y, a);
			break;
		default:
			printf("Error 2:Invalid selector number.\n");
			break;
		}     /*Ends basic calculator program*/
	}
	else if (main_sele==2)
	{
		int sc_cal_sele;
		printf("Select the branch program: 1.sin  2.cos  3.tan  4.log 5.Example of conditional calculating\n");
		scanf_s("%d", &sc_cal_sele);      
		switch (sc_cal_sele)
		{
		case 1:
			printf("y=sin(x).Now input the value of x:");
			scanf_s("%lf", &x);
			y = sin(x);
			printf("sin(%lf)=%lf\n", x, y);
			break;
		case 2:
			printf("y=cos(x).Now input the value of x:");
			scanf_s("%lf", &x);
			y = cos(x);
			printf("cos(%lf)=%lf\n", x, y);
			break;
		case 3:
			printf("y=tan(x).Now input the value of x:");
			scanf_s("%lf", &x);
			y = tan(x);
			printf("tan(%lf)=%lf\n", x, y);
			break;
		case 4:   /*Log is still in development*/
			printf("y=log(a)x.Now input the values of a and x:");
			scanf_s("%lf%lf", &a,&x);  /*Do not give the values to'x' and 'y' by mistake.*/
			y = log(a); x;
			printf("%lf=log(%lf)%lf\n", y,a,x);
			break;
		case 5:
			printf("Input the value of x,y:");
			scanf_s("%lf%lf", &x, &y);
			a = (x * 2 + 2) / y;
			b = (a >= 1 ? a : (a >= 0 ? (1 / a) : (-1 * a)));
			printf("%lf\n", b);
			break;
		default:
			printf("Error 2:Invalid selector number.\n");
			break;
		}
	}
	else if (main_sele==3)
	{
		int un_exch;
		printf("Select the branch program:\n");
		printf("1.Exchange between degree Celsius(C) and Fahrenhait(F)\n");
		scanf_s("%d", &un_exch);
		switch (un_exch)
		{
		case 1:
			int f2c_c2f;
			printf("Please select: 1. C=>F | 2. F=>C\n");
			scanf_s("%d", &f2c_c2f);
			switch (f2c_c2f)
			{
			case 1:
				printf("Input degree Celsius(C):");
				scanf_s("%lf", &c);
				f = 1.8 * c + 32;
				printf("The corresponding degree Fahrenhait of the degree Celsius %lf is %lf\n", c, f);
				break;
			case 2:
				printf("Input degree Fahrenhait(F):");
				scanf_s("%lf", &f);
				c = (f - 32) / 1.8;
				printf("The corresponding degree Celsius of the degree Fahrenhait %lf is %lf\n", f, c);
				break;
			default:
				printf("Error 2:Invaild Selector Number\n");
				break;
			} /*Ends f<=>c exchange program*/
			break;  /*Ends case 1.*/
		default:
			printf("Error 2:Invaild Selector Number\n");
			break;
		}
	}
	else if (main_sele==4)
	{
		printf("Comming soon.Support me on my GitHub please :-)\n");
	}
	else
	{
		printf("Error 2:Invalid Selector Number\n");
	}
	system("pause");
	return 0;
}
