#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//float fun(int n)
//{
//	float f1 = 1.0;
//	float f2 = 2.0;
//	float f3 = 3.0;
//	float sum=0.0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += f2 / f1;
//		f3 = f1 + f2;
//		f1 = f2;
//		f2 = f3;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	float ret =fun(n);
//	printf("%f", ret);
//	return 0;
//}

//int fun(int n)
//{
//	int i = n;
//	for (i = n+1;; i++)
//	{
//		if (i == 2)
//		{
//			return i;
//			break;
//		}
//		int j = 2;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			return i;
//		}
//	}
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int ret = fun(x);
//	printf("%d\n", ret);
//	return 0;
//}

//void fun(int x, int a[])
//{
//	int b[4] = { 0 };
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		b[i] = a[i];
//		printf("a[%d]=%d\n", i, b[i]);
//	}
//}
//int main()
//{
//	int n,i = 0;
//	int a[4] = { 0 };
//	scanf("%d", &n);
//	int k = 0;
//	for (i = 0; i < 4; i++)
//	{
//		k = n % 10;
//		a[i] = k;
//		n=n / 10;
//	}
//	fun(4, a);
//	return 0;
//}

