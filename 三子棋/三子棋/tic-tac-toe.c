#include"game.h"

void game()
{
	char board[sidelength][sidelength] = { 0 };
	Initboard(board);
	printboard(board);
	while (is_full(board) == 0)
	{
		player(board);
		if (is_win(board) == 1)
		{
			printboard(board);
			printf("你赢了！\n");
			break;
		};
		computer(board);
		if (is_win(board) == 1)
		{
			printboard(board);
			printf("电脑赢了！\n");
			break;
		};
		printboard(board);
	}
	if (is_full(board) == 1)
	{
		printf("平局！\n");
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;

	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case(1):
			game();
			break;
		case(0):
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重试！\n");
			break;
		}
	} while (input);

	return 0;
}