#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0;
	char password1[] = "ghwcnmlgb1";
	char password2[20] = {0};

	for (i = 0; i < 3; i++)
	{
		scanf("%s", password2);
		if (strcmp(password1, password2) == 0)
		{
			printf("������ȷ��\n");
			break;
		}

		else
		{
			printf("�������\n");
			continue;
		}
	}
	if (i == 3)
		printf("�������������࣬�����������Ժ�����");

	return 0;
}