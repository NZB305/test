#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	printf("Happy New Year*2019*");
//	return 0;
//}//71

//int main()
//{
//	double hi = 0.0;
//	double sum = 0.0;
//	int i = 0;
//	for (i = 0; i<5; i++)
//	{
//		scanf("%lf", &hi);
//		sum += hi;
//	}
//	printf("%.2lf",sum/5);
//	return 0;
//}//72

//int main()
//{
//	int ret;
//	while (~scanf("%d", &ret))
//	{
//		switch (ret)
//		{
//		case 200:
//			printf("OK\n");
//			break;
//		case 202:
//			printf("Accepted\n");
//			break;
//		case 400:
//			printf("Bad Request\n");
//			break;
//		case 403:
//			printf("Forbidden\n");
//			break;
//		case 404:
//			printf("Not Found\n");
//			break;
//		case 500:
//			printf("Internal Server Error\n");
//			break;
//		case 502:
//			printf("Bad Gateway\n");
//			break;
//		}
//	}
//	return 0;
//}//74

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				printf("%d ", j+1);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}//75

//int main()
//{
//	int i = 0;
//	int s = 0;
//	int sum = 0;
//	int max = 0;
//	int min = 100;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &s);
//		sum += s;
//		if (s>max)
//			max = s;
//		if (s < min)
//			min = s;
//	}
//	printf("%.2f\n", (sum - max - min) / 5.0);
//	return 0;
//}//76

//int main()
//{
//	int arr[50] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int s = 0;
//	scanf("%d", &s);
//	for (i = n - 1; i>=0; i--)
//	{
//		if (s < arr[i])
//			arr[i + 1] = arr[i];
//		else
//		{
//			arr[i + 1] = s;
//			break;
//		}
//	}
//	if (i == -1)
//		arr[0] = s;
//	for (i = 0; i <= n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}//77

//int main()
//{
//	int arr[101] = { 0 };
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i <= n; i++)
//		{
//			arr[i] = i;
//		}
//		for (i = 2; i <= n; i++)
//		{
//			int j = 0;
//			for (j = i + 1; j <= n; j++)
//			{
//				if (arr[j] % i == 0)
//					arr[j] = 0;
//			}
//		}
//		int count = 0;
//		for (i = 2; i <= n; i++)
//		{
//			if (arr[i] != 0)
//				printf("%d ", arr[i]);
//			else
//				count++;
//		}
//		printf("\n%d", count);
//	}
//	return 0;
//}//78

int main()
{
	int m = 0;
	int n = 0;
	int arr1[4][4] = { 0 };
	int arr2[4][4] = { 0 };
	scanf("%d%d", &m, &n);
	int j = 0;
	int i = 0;
	int count = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr1[i][j] == arr2[i][j])
			{
				count++;
			}
		}
	}
	printf("%.2lf\n", count * 100.0 / (m*n));
	return 0;
}//79