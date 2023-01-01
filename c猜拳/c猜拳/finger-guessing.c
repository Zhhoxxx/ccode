#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu() //菜单
{
	printf("***********************************\n");
	printf("************  1.play  *************\n");
	printf("************  0.exit  *************\n");
	printf("***********************************\n");
}

void display(int input, int ret) //展示手势
{
	switch (input)
	{
	case(0):
		printf("玩家出的是：剪刀\n");
		break;
	case(1):
		printf("玩家出的是：石头\n");
		break;
	case(2):
		printf("玩家出的是：布\n");
		break;
	}
	switch (ret)
	{
	case(0):
		printf("电脑出的是：剪刀\n");
		break;
	case(1):
		printf("电脑出的是：石头\n");
		break;
	case(2):
		printf("电脑出的是：布\n");
		break;
	}
}

void game() //游戏执行
{
	int ret = rand() % 3;
	int input = 0;
	printf("请输入0(剪刀),1(石头),2(布)！\n");
again:
	scanf("%d", &input);
	if (input < 0 || input > 2)
	{
		printf("输入错误，请重试！\n");
		goto again;
	}
	int x = (input - ret + 3) % 3;
	display(input, ret);
	x != 0 ? (x == 1 ? printf("你赢了！\n"):printf("你输了！\n")) : printf("平局！\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case(1):
		{
			game();
		}
		case(0):
		{
			break;
		}
		default:
			printf("输入错误，请重试！\n");
		}
	} while (input);

	return 0;
}