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
	//���������
	int ret = rand()%100+1;
	int guess = 0;

	while (1)
	{
		printf("��������µ�����:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´��ˣ�\n");
		}
		else if (guess < ret)
		{
			printf("��С�ˣ�\n");
		}
		else
		{
			printf("�¶��ˣ�\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL)); // ������������������
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case(1):
			game();
			printf("������Ϸ\n");
			break;
		case(0):
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("������������ԣ�\n");
			break;
		}
	} while (input);

	return 0;
}