#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void fun(int a[], int n)
//{
//	int i = 0;
//	int b = 4;
//	int c = 0;
//	for (i = 0; i < 2; i++)
//	{
//		c = a[i];
//		a[i] = a[b];
//		a[b] = c;
//		b -= 1;
//	}
//}
//int main()
//{
//	int n = 5;
//	int a[] = { 18, 2, 50, 43, 69 };
//	fun(a, n);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//#define N 3
//void fun(int a[][N], int n)
//{
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			if (i >= j)
//			{
//				a[i][j] *= n;
//			}
//		}
//	}
//}
//int main()
//{
//	int x,i,j,a[N][N];
//	scanf("%d", &x);
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			printf("%4d", a[i][j] = rand() % 100 + 1);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	fun(a, x);
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			printf("%4d", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

void fun(int array[3][3])
{
	int i, j, tmp;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i>j)
			{
				tmp = array[i][j];
				array[i][j] = array[j][i];
				array[j][i] = tmp;
			}
		}
	}
}
int main()
{
	int i, j, array[3][3];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	fun(array);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}