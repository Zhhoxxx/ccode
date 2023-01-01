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
			printf("密码正确！\n");
			break;
		}

		else
		{
			printf("密码错误！\n");
			continue;
		}
	}
	if (i == 3)
		printf("输入错误次数过多，已锁定！请稍后再试");

	return 0;
}