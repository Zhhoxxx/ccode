#define _CRT_SECURE_NO_WARNINGS 1
#define INT_PTR int*
#define GZ 30

#include <stdio.h>
#include <math.h>
//打印1/1-1/2+1/3……的结果
//int main()
//{
//	int i = 1;
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum = sum - 1.0 / i;
//		}
//		else
//		{
//			sum = sum + 1.0 / i;
//		}
//	}
//	printf("%f", sum);
//}
// 
//1-100里有多少个9
//int main()
//{
//	int i = 0;
//	int count = 1;
//	for (i = 10; i < 100; i++)
//	{
//		if (i / 10 == 9)
//			count++;
//		if (i % 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}

//最大公约数1
//int main()
//{
//	int a = 0, b = 0, i = 0;
//	scanf("%d %d", &a, &b);
//	
//	int min = (a < b ? a : b);
//
//	while (1)
//	{
//		if (a % min == 0 && b % min == 0)
//		{
//			printf("%d\n", min);
//			break;
//		}
//		min--;
//	}
//
//
//	return 0;
//}

//最大公约数之辗转相除
//int main()
//{
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//
//	printf("%d", b);
//
//	return 0;
//}

//输出乘法口诀
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//测试函数能否改变全局变量的值
//int a = 10;
//int Change(void)
//{
//	a++;
//}
//int main()
//{
//	Change();
//	printf("%d", a); // 输出11，说明可以改变全局变量的值
//
//	return 0;
//}

//输出自定义乘法口诀表
//void multiplication(int i)
//{
//	int x = 0, y = 0;
//	for (x = 1; x <= i; x++)
//	{
//		for (y = 1; y <= x; y++)
//		{
//			if (x < 10)
//				printf("%d*%d=%-6d", x, y, x * y);
//			else if (x >= 10 && y < 10)
//				printf("%d*%d=%-5d", x, y, x * y);
//			else if (x >= 10 && y >= 10)
//				printf("%d*%d=%-5d", x, y, x * y);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	printf("%请输入需要的行列数：\n");
//	scanf("%d", &i);
//	multiplication(i);
//
//	return 0;
//}

//函数实现交换值
//void Change(int* p, int* q)
//{
//	int tmp = *p;
//	*p = *q;
//	*q = tmp;
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	Change(&a, &b);
//	printf("%d %d", a, b);
//
//	return 0;
//}

//函数判断闰年
//int judge(int n)
//{
//	if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
//		printf("%d是闰年！", n);
//	else
//		printf("%d不是闰年！", n);
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入需要判断是否为闰年的数：\n");
//	scanf("%d", &n);
//
//	judge(n);
//
//	return 0;
//}

//利用函数输出100-200的素数
//void judgeprime(int n)
//{
//	int i = 0;
//	for (i = 3; i <= sqrt(n); i += 2)
//	{
//		if (n % i == 0)
//			flag = 1;
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入想要判断的数：\n");
//	scanf("%d", &n);
//	judgeprime(n);
//
//	return 0;
//}

//递归求n的阶乘

//int nnn(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return nnn(n - 1) * n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);2
//	printf("%d", nnn(n));
//
//	return 0;
//}

//非递归求n阶乘
//int main()
//{
//	int n = 0, i = 0,sum = 1;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//
//	printf("%d", sum);
//
//	return 0;
//}

//第n个斐波那契数列递归
//int Fib(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return Fib(n - 2) + Fib(n - 1);
//
//
//}
//
//int main()
//{
//	int ret = 0;
//	scanf("%d", &ret);
//
//	printf("%d", Fib(ret));
//
//	return 0;
//}

//第n个斐波那契简易版
//int Fib(int n)
//{
//	int x = 1, y = 1, z = 0;
//	while (n > 2)
//	{
//		z = x + y;
//		x = y;
//		y = z;
//		--n;
//	}
//	return y;
//
//}
//int main()
//{
//	int n = 0;
//
//	scanf("%d", &n);
//	
//	printf("%d", Fib(n));
//
//	return 0;
//}

//判断素数函数并打印100-200之间素数
//int judge(int n)
//{
//	int i = 0;
//	int flag = 1;
//	for (i = 3; i <= sqrt(n); i += 2)
//	{
//
//		if (n % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (judge(n) == 1)
//		printf("%d是素数\n", n);
//	else
//		printf("%d不是素数\n", n);
//
//	int i = 100;
//
//	for (i = 101; i <= 200; i += 2)
//	{
//		if(judge(i) == 1)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//递归实现打印整数每一位
//void print(int n)
//{
//	if (n / 10 != 0)
//		print(n / 10);
//	printf("%d ", n%10);
//}
//
//int main()
//{
	//int n = 0;
	//scanf("%d", &n);
//	print(n);
//	return 0;
//}

//递归实现n的k次方
//int nthpower(int n, int k)
//{
//	if (k == 1)
//		return n;
//	else
//		return nthpower(n, k - 1) * n;
//}
//
//int main()
//{
//	int n = 0, k = 0;
//	printf("请输入n的k次方：\n");
//	scanf("%d %d", &n, &k);
//	printf("%d", nthpower(n, k));
//
//	return 0;
//}

//递归实现一个数的每位之和
//int DigitSum(int n)
//{
//	if (n / 10 != 0)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//		return n % 10;
//	
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", DigitSum(n));
//
//	return 0;
//}

//递归实现字符串逆序
//#include<string.h>
//void reverse_string(char* string)
//{
//	int len = strlen(string);
//	int tmp = *string;
//	*string = *(string + len - 1);
//	*(string + len - 1) = '\0';
//	if (strlen(string + 1) >= 2)
//	{
//		reverse_string(string + 1);
//	}
//	*(string + len - 1) = tmp;
//}
//int main()
//{
//	char arr[100] = { '\0' };
//	scanf("%s", arr);
//	reverse_string(arr);
//	printf("%s", arr);
//
//	return 0;
//}

//非递归实现strlen
//int my_strlen(char* arr)
//{
//	int count = 0;
//	int i = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	char arr[30] = { '0' };
//	scanf("%s", arr);
//	printf("%d", my_strlen(arr));
//
//	return 0;
//}

//交换数组内容（数组一样大）
//void Exchange(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		printf("arr1[%d]=%d arr2[%d]=%d\n", i, arr1[i], i, arr2[i]);
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 4,5,6 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Exchange(arr1, arr2, sz);
//	int i = 0;
//
//	return 0;
//}

//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}

//不用临时变量交换两个数值
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//
//	return 0;
//}

//函数返回二进制中1的个数
//int NumberOf1(int n) {
//	// write code here
//	int count = 0;
//	int flag = 1;
//
//	while (flag != 0)
//	{
//		if ((n & flag) != 0)
//		{
//			count++;
//		}
//		flag = flag << 1;
//	}
//
//	return count;
//}
//int NumberOf1(int n)
//{
//	int count = 0;
//
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", NumberOf1(n));
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", NumberOf1(a));
//
//	return 0;
//}

//二进制位有多少个不同
//int main()
//{
//    int a = 0, b = 0, count = 0;
//    scanf("%d %d", &a, &b);
//    int flag = 1;
//    while (flag != 0)
//    {
//        if ((a & flag) != (b & flag))
//        {
//            count++;
//        }
//        flag = flag << 1;
//    }
//    printf("%d", count);
//
//    return 0;
//}

//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	int ret = m ^ n;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//
//	return count;
//}
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d %d", &m, &n);
//	printf("%d", count_diff_bit(m, n));
//
//	return 0;
//}


//走台阶斐波那契递归
//int Fib(int n) {
//    if (n > 2) {
//        return Fib(n - 1) + Fib(n - 2);
//    }
//    else if (n == 2) {
//        return Fib(n - 1) + 1;
//    }
//    else if (n == 1) {
//        return 1;
//    }
//    return 0;
//}
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", Fib(n));
//    return 0;
//}

//取出整数二进制奇偶位
//int main()
//{
//	int n = 0, i = 0;
//	scanf("%d", &n);
//
//	for (i = 31; i > 0; i -= 2)
//	{
//		printf("%d ", 1 & (n >> i));
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", 1 & (n >> i));
//	}
//	printf("\n");
//	return 0;
//}

//猴子吃桃
//int monkey(int days)
//{
//	int count = 1;
//	int i = 0;
//	for (i = 0; i < days - 1; i++)
//	{
//		count = (count + 1) * 2;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int n = 0, i = 0;
//	int days = 10;
//	printf("%d", monkey(days));
//
//	return 0;
//}

//数字和字符
//int main() {
//    int a = 0;
//    while ((a = getchar()) != EOF)
//    {
//        if (a > 'A' && a < 'Z')
//        {
//            printf("%c\n", a + 32);
//        }
//        else {
//            printf("%c\n", a - 32);
//        }
//        getchar();
//    }
//    return 0;
//}

//打印菱形
//int main()
//{
//	int len = 0;
//	scanf("%d", &len);
//	int i = 0, j = 0;
//	for (i = 1; i <= len; i++)
//	{
//		for (j = 0; j < len - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= len - 1; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * len - 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//打印水仙花数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int j = i;
//		n = 1;
//		while (j = j / 10)
//		{
//			n++;
//		}
//		
//		int sum = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//求出a+aa+aaa+aaaa+aaaaa
//int main()
//{
//	int a = 0, n = 0;
//	scanf("%d %d", &a , &n);
//
//	int sum = 0;
//	int k = 0;
//
//	while (n--)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//
//	printf("%d", sum);
//
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//
//	if (a > b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	int tmp = b;
//	while (b % a != 0)
//	{
//		b += tmp;
//	}
//
//	printf("%d", b);
//
//	return 0;
//}

//int main()
//{
//#include<stdio.h>
//
//    void reverse(char* arr, int sz)
//    {
//        int left = 0;
//        int right = sz - 1;
//        while (left < right)
//        {
//            char tmp = arr[left];
//            arr[left] = arr[right];
//            arr[right] = tmp;
//        }
//    }
//
//    int main()
//    {
//        char arr[100] = { 0 };
//        gets(arr);
//
//        char* p = arr;
//        int i = 0;
//
//        while (arr[i] != '\0')
//        {
//            int tmp = i;
//            while (arr[i] != ' ')
//            {
//                i++;
//            }
//            reverse(&arr[tmp], i - 1);
//            i++;
//        }
//
//        return 0;
//    }
//
//	return 0;
//}


//测试字符和整形存储区别
//int main()
//{
//	int a[] = { '1','2','3','4','5' };
//	int b[] = { 1,2,3,4,5 };
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d %d ", a[i], b[i]);
//	}
//
//	return 0;
//}

//测试宏定义的影响
//int main()
//{
//	INT_PTR a, b;
//	printf("%d %d ", sizeof(a), sizeof(b));
//
//	int* c, d;
//	printf("%d %d", sizeof(c), sizeof(d));
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char c;
//	int v0 = 0, v1 = 0, v2 = 0;
//		do
//		{
//			switch (c = getchar())
//			{
//			case'a':case'A':
//			case'e':case'E':
//			case'i':case'I':
//			case'o':case'O':
//			case'u':case'U':v1 += 1;
//			default:v0 += 1; v2 += 1;
//			}
//		} while (c != '\n');
//		printf("v0=%d,v1=%d,v2=%d\n", v0, v1, v2);
//		return 0;
//}0

//通过调试判断错误原因
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//实现奇数在前偶数在后数组
//void CP(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	while (left < right)
//	{
//		if (arr[left] % 2 == 0)
//		{
//			int tmp = arr[left];
//			for (i = 0; left + i < right; i++)
//			{
//				arr[left + i] = arr[left + i + 1];
//			}
//			arr[right] = tmp;
//			right--;
//		}
//		else
//		{
//			left++;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	CP(arr, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

int main()
{
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 }, * p, i;
	void move(int* pointer);
	p = &a[0][0];
	move(p);
	for (i = 0; i < 3; i++)
		printf("\n%5d%5d%5d", a[i][0], a[i][1], a[i][2]);
	return 0;
}
void move(int* pointer)
{
	int i, j, t;
	for(i=0;i<3;i++)
		for (j = i; j < 3; j++)
		{
			t = *(pointer + 3 * i + j);
			*(pointer + 3 * i + j) = *(pointer + 3 * j+i);
			*(pointer + 3 * j + i) = t;
		}
}