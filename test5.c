#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int arr[3][4] = { 1, 2, 3, 4, 5 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j <4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, 4, 5 };
//	printf("%d", arr);
//
//	return 0;
//}

//斐波那契数列
//1 1 2 3 5 8 13 21 34 55......
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//int Fac1(int a)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= a; i++)
//	{
//		ret *= i;n
//	}
//	return ret;
//}
//int Fac2(int a)
//{
//	if (a <= 1)
//		return 1;
//	else
//		return a*Fac2(a - 1);
//}
//int main()
//{
//	int a=0;
//	int ret=0;
//	scanf("%d", &a);
//	ret = Fac2(a);
//	printf("%d\n", ret);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len=%d\n", len);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}