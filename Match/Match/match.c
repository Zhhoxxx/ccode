#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 21;
	int player = 0;
	int computer = 0;

	while (1)
	{
		printf("��������ȥ���Ļ����(1-4):\n");
		scanf("%d", &player);
		n = n - player;
		printf("������%d�����\n", n);
		if (n < 1)
		{
			printf("����Ӯ�ˣ������ˣ�\n");
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

		printf("����ȡ��%d�����\n", computer);
		n = n - computer;
		printf("������%d�����\n", n);
		if (n < 1)
		{
			printf("��Ӯ�ˣ��������ˣ�\n");
			break;
		}
	}

	return 0;
}