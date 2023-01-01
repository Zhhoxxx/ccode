#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 21;
	int player = 0;
	int computer = 0;

	while (1)
	{
		printf("请输入想去除的火柴数(1-4):\n");
		scanf("%d", &player);
		n = n - player;
		printf("现在有%d根火柴！\n", n);
		if (n < 1)
		{
			printf("电脑赢了！你输了！\n");
			break;
		}

		if (n >= 2 && n <= 5)
		{
			computer = n - 1;
		}
		else
		{
			computer = 1;
			while ((n - computer - 1) % 5 != 0)
			{
				computer++;
			}
		}

		printf("电脑取出%d根火柴！\n", computer);
		n = n - computer;
		printf("现在有%d根火柴！\n", n);
		if (n < 1)
		{
			printf("你赢了！电脑输了！\n");
			break;
		}
	}

	return 0;
}