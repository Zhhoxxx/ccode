#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Bubblesort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		int flag = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubblesort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}