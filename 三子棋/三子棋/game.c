#include"game.h"
int x = 0; //当前位置坐标
int y = 0; //当前位置坐标

void menu()
{
	printf("*************************************\n");
	printf("************   1.play   *************\n");
	printf("************   0.exit   *************\n");
	printf("*************************************\n");
}

void Initboard(char board[sidelength][sidelength])
{
	int i = 0;
	for (i = 0; i < sidelength; i++)
	{
		int j = 0;
		for (j = 0; j < sidelength; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void printboard(char board[sidelength][sidelength])
{
	int i = 0;
	for (i = 0; i < sidelength; i++)
	{
		int j = 0;
		for (j = 0; j < sidelength; j++)
		{
			if (j < sidelength - 1)
			{
				printf(" %c |", board[i][j]);
			}
			else
			{
				printf(" %c ", board[i][j]);
			}
		}
		printf("\n");
		for (j = 0; j < sidelength; j++)
		{
			if (j < sidelength - 1)
			{
				printf("---|");
			}
			else
			{
				printf("---");
			}
		}
		printf("\n");
	}
}

void player(char board[sidelength][sidelength])
{
	int row = 0, col = 0; //存储玩家下棋的坐标
	printf("请输入坐标 >");
	while (1)
	{
		scanf("%d %d", &row, &col);
		if (row >= 1 && row <= sidelength && col >= 1 && col <= sidelength && board[row - 1][col - 1] == ' ')
		{
			x = row - 1;
			y = col - 1;
			board[row - 1][col - 1] = '#';
			break;
		}
		else
		{
			printf("输入非法，请重试！\n");
		}
	}
}

void computer(char board[sidelength][sidelength])
{
	while (1)
	{
		x = rand() % sidelength;
		y = rand() % sidelength;
		if (board[x][y] == ' ')
		{
			board[x][y] = '*';
			break;
		}
	}
}

int is_full(char board[sidelength][sidelength])
{
	int i = 0;
	for (i = 0; i < sidelength; i++)
	{
		int j = 0;
		for (j = 0; j < sidelength; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

int piece_left_r(char board[sidelength][sidelength]) //判断左右棋子
{
	int i = 0, count = 1;;
	for (i = x - 1; i >= 0; i--)
	{
		if (board[i][y] == board[x][y])
		{
			count++;
		}
		else
			break;
	}
	if (count >= 5)
	{
		return count;
	}
	for (i = x + 1; i < sidelength; i++)
	{
		if (board[i][y] == board[x][y])
		{
			count++;
		}
		else
			break;
	}
	return count;
}

int piece_up_d(char board[sidelength][sidelength]) //判断上下棋子
{
	int j = 0, count = 1;;
	for (j = y - 1; j >= 0; j--)
	{
		if (board[x][j] == board[x][y])
		{
			count++;
		}
		else
			break;
	}
	if (count >= 5)
	{
		return count;
	}
	for (j = y + 1; j < sidelength; j++)
	{
		if (board[x][j] == board[x][y])
		{
			count++;
		}
		else
			break;
	}
	return count;
}

int Leftup_rdOblique(char board[sidelength][sidelength]) //判断左上右下
{
	int i = 0, j = 0, count = 1;
	for (i = x - 1, j = y - 1; x >= 0, j >= 0; i--, j--)
	{
		if (board[i][j] == board[x][y])
		{
			count++;
		}
		else
			break;
	}
	if (count >= 5)
	{
		return count;
	}
	for (i = x + 1, j = y + 1; x < sidelength, j < sidelength; i++, j++)
	{
		if (board[i][j] == board[x][y])
		{
			count++;
		}
		else
			break;
	}
	return count;
}

int Rightp_ldOblique(char board[sidelength][sidelength]) //判断右上左下
{
	int i = 0, j = 0, count = 1;
	for (i = x + 1, j = y - 1; x < sidelength, j >= 0; i++, j--)
	{
		if (board[i][j] == board[x][y])
		{
			count++;
		}
		else
			break;
	}
	if (count >= 5)
	{
		return count;
	}
	for (i = x - 1, j = y + 1; x >= 0, j < sidelength; i--, j++)
	{
		if (board[i][j] == board[x][y])
		{
			count++;
		}
		else
			break;
	}
	return count;
}

int is_win(char board[sidelength][sidelength])
{
	if (piece_left_r(board) >= piece || piece_up_d(board) >= piece || Leftup_rdOblique(board) >= piece || Rightp_ldOblique(board) >= piece)
		return 1;
	else
		return 0;
}


