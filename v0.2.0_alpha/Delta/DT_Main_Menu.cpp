extern "C"
{
#define PI 3.1415926536
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "DT_Basiccal.h"
#include "DT_Scientificcal.h"
#include "DT_Unitchange.h"
#include "DT_Geometrycal.h"
#include "DT_games.h"
}


void Main_menu()
{
		printf("---------------------------------------------------------------------------------------------------------------------\n");
		printf("---------------------------------------------------------------------------------------------------------------------\n");
		printf("=======\\           ||======          ||                =========             //=====\\                    \n");
		printf("  ||    \\          ||                ||                   ||                //       \\               \n");
		printf("  ||     \\         ||======          ||                   ||               //=========\\                                             \n");
		printf("  ||     //        ||                ||                   ||               ||        ||                          \n");
		printf("======= //         ||======          ||======             ||               ||        ||           \n");
		printf("---------------------------------------------------------------------------------------------------------------------\n");
		printf("---------------------------------------------------------------------------------------------------------------------\n");
		printf("Delta.-Version:v0.2.0_alpha.\n");
		printf("Present by ClanceyPRMS.All rights reserved.\n");
		while (1) {
		printf("-----------------------------------------------------\n");
		printf("|Select a program:                                  |\n");
		printf("|----------------------------------------------------\n");
		printf("|1.Basic calculator    |   2.Scientific calculator  |\n");
		printf("|3.Unit exchange       |   4.Geometry calculator    |\n");
		printf("|5.Games	       |   6.Exit                   |\n");
		printf("-----------------------------------------------------\n");
		int main_sele;
		scanf_s("%d", &main_sele);
		switch (main_sele)
		{
		case 1:
			basiccalculator();
			break;

		case 2:
			scientificcalculator();
			break;

		case 3:
			unitchange();
			break;

		case 4:
			geometrycalculator();
			break;

		case 5:
			games();
			break;
			                                                       
		case 6:
			return;
		default:
			printf("Error 1:Invalid selector\n");
			break;
		}
	}
}                /*creeper? 口凸口*/

int main()
{
	Main_menu();
	system("pause");
	return 0;
}