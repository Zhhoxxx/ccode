#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu() //�˵�
{
	printf("***********************************\n");
	printf("************  1.play  *************\n");
	printf("************  0.exit  *************\n");
	printf("***********************************\n");
}

void display(int input, int ret) //չʾ����
{
	switch (input)
	{
	case(0):
		printf("��ҳ����ǣ�����\n");
		break;
	case(1):
		printf("��ҳ����ǣ�ʯͷ\n");
		break;
	case(2):
		printf("��ҳ����ǣ���\n");
		break;
	}
	switch (ret)
	{
	case(0):
		printf("���Գ����ǣ�����\n");
		break;
	case(1):
		printf("���Գ����ǣ�ʯͷ\n");
		break;
	case(2):
		printf("���Գ����ǣ���\n");
		break;
	}
}

void game() //��Ϸִ��
{
	int ret = rand() % 3;
	int input = 0;
	printf("������0(����),1(ʯͷ),2(��)��\n");
again:
	scanf("%d", &input);
	if (input < 0 || input > 2)
	{
		printf("������������ԣ�\n");
		goto again;
	}
	int x = (input - ret + 3) % 3;
	display(input, ret);
	x != 0 ? (x == 1 ? printf("��Ӯ�ˣ�\n"):printf("�����ˣ�\n")) : printf("ƽ�֣�\n");
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
			printf("������������ԣ�\n");
		}
	} while (input);

	return 0;
}