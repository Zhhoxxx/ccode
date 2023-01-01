#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char a = 0;
	scanf("%c", &a);
	if (a >= 65 && a <= 90)
	{
		a += 32;
	}
	else if (a >= 97 && a <= 122)
	{
		a -= 32;
	}
	printf("%c", a);
	
	return 0;
}