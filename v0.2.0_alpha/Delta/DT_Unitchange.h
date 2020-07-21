#pragma once
double unitchange()
{
	int un_exch;
	double c, f;
re_uc:
	printf("----------------------------------\n");
	printf("|Unit Change                     |\n");
	printf("----------------------------------\n");
	printf("|1.Degree Celsius <=> Fahrenhait |\n");
	printf("|2.ASCII Exchange                |\n");
	printf("----------------------------------\n");
	scanf_s("%d", &un_exch);
	switch (un_exch)
	{
	case 1:
		int f2c_c2f;
		printf("Please select: 1. C=>F | 2. F=>C\n");
		scanf_s("%d", &f2c_c2f);
		if (f2c_c2f == 1)  /*F<=>C Selector executes the sentences below*/
		{
			printf("Input degree Celsius(C):");
			scanf_s("%lf", &c);
			f = 1.8 * c + 32;
			printf("The corresponding degree Fahrenhait of the degree Celsius %lf is %lf\n", c, f);
			return c, f;
		}
		else if (f2c_c2f == 2)
		{
			printf("Input degree Fahrenhait(F):");
			scanf_s("%lf", &f);
			c = (f - 32) / 1.8;
			printf("The corresponding degree Celsius of the degree Fahrenhait %lf is %lf\n", f, c);
			return f, c;
		}
		else
		{
			printf("Error 2:Invaild Selector Number\n");
			goto re_uc;
		}
		/*Ends f<=>c exchange program*/
		break;  /*Ends case 1.*/
	case 2:
		int ascii_char;
		printf("Please select: 1.ASCII=>Char  2.Char=>ASCII\n");
		scanf_s("%d", &ascii_char);
		if (ascii_char == 1)
		{
			int ascii_01;
			printf("Now input ASCII value,need an decimal int number:");
			scanf_s("%d", &ascii_01);
			printf("ASCII %d refers to %c\n", ascii_01, ascii_01);
			return ascii_01,ascii_01;
		}
		else if (ascii_char == 2)
		{
			char char_01;
			getchar();
			printf("Now input a character:");
			scanf_s("%c", &char_01, sizeof(char_01));
			printf("%d\n", char_01);
			return char_01,char_01;
		}
		else
		{
			printf("Error 2:Invalid Selector Number\n");
			goto re_uc;
		}
		break;
	default:
		printf("Error 2:Invaild Selector Number\n");
		goto re_uc;
		break;
	}
}