#include<stdio.h>

void printarr(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", *(arr + i));
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };

	int sz = sizeof(arr) / sizeof(arr[0]);
	printarr(arr, sz);

	return 0;
}