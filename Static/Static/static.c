#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

extern int b;
static int a;
//extern int c;

int main()
{
	printf("%d %d", a, b); //printf("%d", c);
	// static����ȫ�ֱ���ʱֻ���������ⲿ����
	return 0;
}