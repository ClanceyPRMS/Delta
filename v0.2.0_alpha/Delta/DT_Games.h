#pragma once

void js(int);
int money = 1000;
int x = 0;
int games()
{
	int emer;
	int z;
	printf("Now you are a boss in Minecraft Mine Factory,you now own 1000 emeralds,\nand your final goal is to make your money to 30000 emeralds.\n");
	while (money > 0)
	{
		printf("Input 1 to craft mine and 0 to stop crafting mine:");
		scanf_s("%d", &z);
		while (z != 1)
		{
			if (z == 0)
			{
				printf("The emeralds you now own:%d\n",money);
				printf("%d\n", money);
				printf("Game over!\n");
				return 0;
			}
			else if (z != 0)
			{
				printf("Choose if you want to craft:\n");
				printf("Input 1 to craft mine and 0 to stop crafting mine:");
				scanf_s("%d", &z);
			}
		}
		printf("The emeralds you now own:%d\n", money);
		printf("Input how much emeralds you want to spend in crafting:");
		scanf_s("%d", &emer);
		while (emer <= 0)
		{
			printf("Input VALID amount of emeralds");
			scanf_s("%d", &emer);
		}
		while (emer > money)
		{
			printf("Input VALID amount of emeralds");
			scanf_s("%d", &emer);
		}
		js(emer);
		if (x % 2 == 1)
		{
			if (x <= 5) 
			printf(" Coal Iron Redstone \n");
			else 
			printf("Gold Diamond Emerald\n");
			printf("Crafting success!\n");
			money += emer;
		}
		else
		{
			if (x == 0) 
				printf("cobblestone sand dirt\n");
			else 
				printf(" Your minecart is grieved by creepers! 口凸口 \n");
				printf("You failed crafting :(\n");
				money -= emer;
		}
		printf("Your emerald remain：%d\n",money);
		if (money > 30000)
		{
			puts("Congratulations!You win!");
			break;
		}
		if (money <= 0)
		{
			puts("You lose!");
			break;
		}
	}
	return 0;
}
void js(int a)
{
	while (a <= money)
	{
		if (money == a)
		{
			x += 2;
			break;
		}
		else
		{
			if (money / a % 2 == 1)
				x++;
			else
			{
				x = 0;
				break;
			}
			a += 5;
		}
	}
	return;
}