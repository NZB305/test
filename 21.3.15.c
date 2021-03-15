#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j < n; j++)
//		{
//			if (arr[i] == arr[j])
//				arr[j] = 0;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != 0)
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}//99

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int j = 0;
//	int arr1[5000];
//	int arr2[5000];
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (j = 0; j < n; j++)
//	{
//		scanf("%d", &arr2[j]);
//	}
//	i = 0;
//	j = 0;
//	while (i < m&&j < n)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//		else
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//	if (i == m)
//	{
//		for (; j < n; j++)
//		{
//			printf("%d ", arr2[j]);
//		}
//	}
//	else
//	{
//		for (; i < m; i++)
//		{
//			printf("%d ", arr1[i]);
//		}
//	}
//	return 0;
//}//100

//int main()
//{
//	int i = 0;
//	double score = 0.0;
//	for (i = 0; i < 5; i++)
//	{
//		double sum = 0.0;
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%lf", &score);
//			printf("%.1lf ", score);
//			sum += score;
//		}
//		printf("%.1lf ", sum);
//	}
//	return 0;
//}//101

int main()
{
	int n = 0;
	int m = 0;
	int arr[10][10] = { 0 };
	scanf("%d %d", &n, &m);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	printf("%d\n", arr[a - 1][b - 1]);
	return 0;
}//102