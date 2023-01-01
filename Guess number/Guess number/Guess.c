#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void menu()
{
	printf("************************************\n");
	printf("**********    1.play    ************\n");
	printf("**********    0.exit    ************\n");
	printf("************************************\n");
}
void game()
{
	//生成随机数
	int ret = rand()%100+1;
	int guess = 0;

	while (1)
	{
		printf("请输入想猜的数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了！\n");
		}
		else if (guess < ret)
		{
			printf("猜小了！\n");
		}
		else
		{
			printf("猜对了！\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL)); // 设置随机数起点生成器
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case(1):
			game();
			printf("猜字游戏\n");
			break;
		case(0):
			printf("退出游戏!\n");
			break;
		default:
			printf("输入错误，请重试！\n");
			break;
		}
	} while (input);

	return 0;
}