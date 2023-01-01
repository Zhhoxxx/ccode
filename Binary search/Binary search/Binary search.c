#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组长度
	int left = 0;
	int right = sz - 1;

	int n = 0;
	scanf("%d", &n);//输入想找的数值

	while (left <= right)
	{
		//int mid = (left + right) / 2; 当数值较大时，left+right容易越界
		int mid = left + (right - left) / 2;
		if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了下标为：%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("没有找到\n");
	}

	return 0;
}