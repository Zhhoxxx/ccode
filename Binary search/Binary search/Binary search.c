#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//�������鳤��
	int left = 0;
	int right = sz - 1;

	int n = 0;
	scanf("%d", &n);//�������ҵ���ֵ

	while (left <= right)
	{
		//int mid = (left + right) / 2; ����ֵ�ϴ�ʱ��left+right����Խ��
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
			printf("�ҵ����±�Ϊ��%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("û���ҵ�\n");
	}

	return 0;
}