#pragma once
double basiccalculator()
{
	int sele;
	double a, x, y;
re_bc:
	printf("---------------------------\n");
	printf("|Basic Calculator         |\n");
	printf("---------------------------\n");
	printf("|1. x+y  |2. x-y  |3. x*y |\n");
	printf("---------------------------\n");
	printf("|4. x/y  |5. x^y  |6. √x  |\n");
	printf("---------------------------\n");
	scanf_s("%d", &sele);
	switch (sele)    /*Execute the basic calculator program*/
	{
	case 1:
		printf("a=x+y.Now input the values of x and y:");
		scanf_s("%lf%lf", &x, &y);
		a = x + y;
		printf("%lf+%lf=%lf\n", x, y, a);
		return x, y, a;
		break;
	case 2:
		printf("a=x-y.Now input the values of x and y:");
		scanf_s("%lf%lf", &x, &y);
		a = x - y;
		printf("%lf-%lf=%lf\n", x, y, a);
		return x, y, a;
		break;
	case 3:
		printf("a=x*y.Now input the values of x and y:");
		scanf_s("%lf%lf", &x, &y);
		a = x * y;
		printf("%lf*%lf=%lf\n", x, y, a);
		return x, y, a;
		break;
	case 4:
		printf("a=x/y.Now input the values of x and y:");
		scanf_s("%lf%lf", &x, &y);
		a = x / y;
		printf("%lf/%lf=%lf\n", x, y, a);
		return x, y, a;
		break;
	case 5:
		printf("a=x^y.Now input the values of x and y:");
		scanf_s("%lf%lf", &x, &y);
		a = pow(x, y);
		printf("%lf^%lf=%lf\n", x, y, a);
		return x, y, a;
		break;
	case 6:
		printf("a=√x.Now input the value of x:");
		scanf_s("%lf", &x);
		a = sqrt(x);
		printf("√%lf=%lf\n", x, a);
		return x ,a;
		break;
	default:
		printf("Error 2:Invalid selector number.\n");
		goto re_bc;
		break;
	}     /*Ends basic calculator program*/
}
