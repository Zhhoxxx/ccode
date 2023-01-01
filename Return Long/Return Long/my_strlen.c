#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int my_strlen(char* arr)
{

	if (*arr == '\0')
		return 0;
	else
	{
		return my_strlen(arr+1) + 1;
	}

}

int main()
{
	char arr[30] = { 0 };
	scanf("%s", arr);

	printf("%d", my_strlen(arr));

	return 0;
}