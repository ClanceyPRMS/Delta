#pragma once
double geometrycalculator()
{
	int geo_sele, geo_sele1;
	double a, b, c, d, l, n, R, s;
	re_gc:
	printf("---------------------------\n");
	printf("|Geometry Calculator      |\n");
	printf("---------------------------\n");
	printf("|1.Triangle Judging       |\n");
	printf("|2.Circle calculating     |\n");
	printf("---------------------------\n");
	scanf_s("%d",&geo_sele);
	switch (geo_sele)
	{
	case 1:
		printf("Input the three lengths from the shortest to the longest:");
		scanf_s("%lf%lf%lf", &a, &b, &c);
		if (a + b > c)
		{
			if (a == b && b == c && a == c)
			{
				printf("This is an equilateral traingle :-)\n");
				return 0;
			}
			else if (a == b || b == c || a == c)
			{
				printf("This is an isosceles traingle :-)\n");
				return 0;
			}
			else
			{
				printf("This is a normal traingle :-)\n");
				return 0;
			}
		}
		else
		{
			
			printf("They cannot build a traingle :(\n");
			return 0;
		}
		break;
	case 2:
		re_gc1:
		printf("----------------------------------------------------------------\n");
		printf("|Circle Calculator                                             |\n");
		printf("----------------------------------------------------------------\n");
		printf("|1.circumference            |2.Circle area                     |\n");
		printf("|3.Diameter(Requires area)  |4.Diameter(Requires circumference)|\n");
		printf("|5.Sector arc length        |6.Sector area                     |\n");
		printf("----------------------------------------------------------------\n");
		scanf_s("%d", &geo_sele1);
		if (geo_sele1 == 1)
		{
			printf("Input diameter:");
			scanf_s("%lf", &d);
			c = d * PI;
			printf("The circumference is %lf\n", c);
			return c;
		}
		else if (geo_sele1 == 2)
		{
			printf("Input diameter:");
			scanf_s("%lf", &d);
			s = (d / 2) * (d / 2) * PI;
			printf("The area is %lf\n", s);
			return s;
		}
		else if (geo_sele1 == 3)
		{
			printf("Input area:");
			scanf_s("%lf", &s);
			d = sqrt(s / PI) * 2;
			printf("The diameter is %lf\n", d);
			return d;
		}
		else if (geo_sele1 == 4)
		{
			printf("Input circumference:");
			scanf_s("%lf", &c);
			d = c / PI;
			printf("The diameter is %lf\n", d);
			return d;
		}
		else if (geo_sele1 == 5)
		{
			printf("Input the radius angle degree and the sector radius:");
			scanf_s("%lf%lf", &n, &R);
			l = (n * PI * R) / 180;
			printf("The arc length is %lf", l);
			return l;
		}
		else if (geo_sele1 == 6)
		{
			printf("Input the radius angle degree and the sector radius:");
			scanf_s("%lf%lf", &n, &R);
			s = (n * PI * R * R) / 360;
			printf("The sector area is %lf", s);
			return s;
		}
		else
		{
			printf("Error 1:Invalid Selector\n");
			goto re_gc1;
		}
		break;
	default:
		printf("Error 1:Invalid Selector\n");
		goto re_gc;
		break;
	}
		
	
}
