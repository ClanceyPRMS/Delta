#pragma once
double scientificcalculator()
{
	int sele, sele1;
	double x, y, a, b, c, delta;
re_sc:
	printf("--------------------------------------\n");
	printf("|Scientific Calculator               |\n");
	printf("--------------------------------------\n");
	printf("|1.Trigonometric function            |\n");
	printf("|2.Quadratic Equation in one unknown |\n");
	printf("--------------------------------------\n");
	scanf_s("%d", &sele);
	if (sele == 1)
	{
		re_sc1:
		printf("---------------------------\n");
		printf("|Trigonometric function   |\n");
		printf("---------------------------\n");
		printf("|1. sin  |2. cos  |3. tan |\n");
		printf("---------------------------\n");
		printf("|4. log  |5.Eg conditional|\n");
		printf("---------------------------\n");
		scanf_s("%d", &sele1);
		switch (sele1)
			{
			case 1:
				printf("y=sin(x).Now input the value of x:");
				scanf_s("%lf", &x);
				y = sin(x);
				printf("sin(%lf)=%lf\n", x, y);
				return x, y;
				break;
			case 2:
				printf("y=cos(x).Now input the value of x:");
				scanf_s("%lf", &x);
				y = cos(x);
				printf("cos(%lf)=%lf\n", x, y);
				return x, y;
				break;
			case 3:
				printf("y=tan(x).Now input the value of x:");
				scanf_s("%lf", &x);
				y = tan(x);
				printf("tan(%lf)=%lf\n", x, y);
				return x, y;
				break;
			case 4:   /*Log is still in development*/
				printf("y=log(a)x.Now input the values of a and x:");
				scanf_s("%lf%lf", &a, &x);  /*Do not give the values to'x' and 'y' by mistake.*/
				y = log(a); x;
				printf("%lf=log(%lf)%lf\n", y, a, x);
				return y, a, x;
				break;
			case 5:
				printf("Input the value of x,y:");
				scanf_s("%lf%lf", &x, &y);
				a = (x * 2 + 2) / y;
				b = (a >= 1 ? a : (a >= 0 ? (1 / a) : (-1 * a)));
				printf("%lf\n", b);
				return b;
				break;
			default:
				printf("Error 2:Invalid selector number.\n");
				goto re_sc1;
				break;
			}
	}
	else if (sele == 2)
	{
		printf("ax^2+bx+c=0.\t Now input the values of a,b,c:");
		scanf_s("%lf%lf%lf", &a, &b, &c);
		delta = b * b - 4 * a * c;
		if (delta > 0)
		{
			x = (-1 * b + sqrt(delta)) / (2 * a);
			y = (-1 * b - sqrt(delta)) / (2 * a);
			printf("The equation has two solutions:\t x1=%lf\tx2=%lf\n", x, y);
			return x, y;
		}
		else if (delta == 0)
		{
			x = (-1 * b) / (2 * a);
			printf("The equation has one solution:\tx1=%lf\n", x);
			return x;
		}
		else
		{
			printf("The equation has no solution\n");
			return 0;
		}
	}
	else
	{
		printf("Error 2:Invalid selector number.\n");
		goto re_sc;
	}


}