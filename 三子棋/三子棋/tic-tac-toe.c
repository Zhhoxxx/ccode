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
			printf("��Ӯ�ˣ�\n");
			break;
		};
		computer(board);
		if (is_win(board) == 1)
		{
			printboard(board);
			printf("����Ӯ�ˣ�\n");
			break;
		};
		printboard(board);
	}
	if (is_full(board) == 1)
	{
		printf("ƽ�֣�\n");
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
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("������������ԣ�\n");
			break;
		}
	} while (input);

	return 0;
}