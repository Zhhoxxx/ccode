#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Compare(int x, int y)
{
	if (x > y)
		return x;
	if (x < y)
		return y;
}

int main()
{
	int x = 0, y = 0, z = 0;
	printf("Please input two number you want to compare:\n");
	scanf("%d %d", &x, &y);

	z = Compare(x, y);
	printf("%d", z);

	return 0;
}