#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//float fun()
//{
//	double x1, x0;
//	x1 = 0.0;
//	x0 = x1;
//	x1 = cos(x0);
//	while (fabs(x0 - x1) > 0.000001)
//	{
//		x0 = x1;
//		x1 = cos(x0);
//	}
//		return ((float)x0);
//}
//main()
//{
//	fun();
//	printf("%f\n", fun());
//	return 0;
//}

//float fun(float array[], int n)
//{
//	float max = 0;
//	int i,count = 0;
//	float sum=0;
//	for (i = 0; i < n; i++)
//	{
//		if (max < array[i])
//			max = array[i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		sum += array[i];
//		if (array[i] == max)
//			count++;
//	}
//	printf("最高分为%.0f\n得最高分的人数为%d\n", max, count);
//	return sum / n;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	float array[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		scanf("%f", &array[i]);
//	}
//	float average = fun(array, x);
//	printf("平均成绩%.1f\n", average);
//	return 0;
//}

//#define MAX 1000
//int fun(int lim, int aa[MAX])
//{
//	int i,j = 0;
//	int count=1;
//	if (lim == 2)
//		return 1;
//	for (i = 3; i < lim; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (i == j)
//		{
//			aa[i] = i;
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int aa[MAX] = { 0 };
//	int n=fun(a, aa);
//	printf("%d\n", n);
//	return 0;
//}

#define M 5
int fun(int a[M][M])
{
	int i, j = 0;
	int sum = 0;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
		{
			if (i == j || (i + j == 4))
			{
				sum += a[i][j];
			}
		}
	}
	return sum;
}
int main()
{
	int a[M][M] = { 0 };
	int i, j = 0;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
		{
			a[i][j] = rand() % 100 + 1;
		}
	}
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	int b=fun(a);
	printf("%d\n", b);
	return 0;
}