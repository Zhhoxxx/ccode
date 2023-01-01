#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

extern int b;
static int a;
//extern int c;

int main()
{
	printf("%d %d", a, b); //printf("%d", c);
	// static修饰全局变量时只能作用于外部链接
	return 0;
}