#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char name[20] = { 0 };
//	char password[20] = { 0 };
//	while (~scanf("%s %s", name, password))
//	{
//		if ((strcmp(name, "admin") == 0) && (strcmp(password, "admin") == 0))
//		{
//			printf("Login Success!\n");
//		}
//		else
//		{
//			printf("Login Fail!\n");
//		}
//	}
//	return 0;
//}//80

//int main()
//{
//	int i = 0;
//	int count=0;
//	for (i = 1; i <= 2019; i++)
//	{
//		int n = i;
//		while (n)
//		{
//			if (n % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			n = n / 10;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}//85

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int odd = 0;
//	int even = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 == 1)
//			odd++;
//		else
//			even++;
//	}
//	printf("%d %d\n", odd, even);
//	return 0;
//}//86

//int main()
//{
//	int i = 0;
//	double max = 0.0;
//	double min = 100.0;
//	double sum = 0.0;
//	int n = 0;
//	double score = 0.0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lf", &score);
//		sum += score;
//		if (score>max)
//			max = score;
//		if (score<min)
//		{
//			min = score;
//		}
//	}
//	printf("%.2lf %.2lf %.2lf\n", max, min, sum/n);
//	return 0;
//}//87

//int main()
//{
//	char s1[100] = { 0 };
//	char s2[100] = { 0 };
//	scanf("%s %s", &s1, &s2);
//	if (strcmp(s1, s2) == 0)
//		printf("same");
//	else
//		printf("different"); 
//	return 0;
//}//89

//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &m, &n);
//	int sum = 0;
//	int num = 0;
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &num);
//			if (num>0)
//			{
//				sum += num;
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}//90

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 9; i>=0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}//92

//int main()
//{
//	int i = 0;
//	int negative = 0;
//	int positive = 0;
//	int n = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &n);
//		if (n >= 0)
//			positive++;
//		else
//			negative++;
//	}
//	printf("positive:%d\nnegative:%d", positive,negative);
//	return 0;
//}//93

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int s = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &s);
//		sum += s;
//	}
//	printf("%d", sum);
//	return 0;
//}//94

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int s = 0;
//	int max = 0;
//	int min = 10000;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &n);
//		if (n>max)
//			max = n;
//		if (n < min)
//			min = n;
//	}
//	printf("%d", max - min);
//	return 0;
//}//95

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[50] = { 0 };
//	int flag1 = 0;
//	int flag2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n-1; i++)
//	{
//		if (arr[i] >= arr[i + 1])
//			flag1 = 1;
//		else if (arr[i] < arr[i+1])
//			flag2 = 1;
//	}
//	if (flag1 + flag2 == 1)
//		printf("sorted\n");
//	else
//		printf("unsorted\n");
//	return 0;
//}//96

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int arr[50] = { 0 };
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int del = 0;
	scanf("%d", &del);
	int j = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] != del)
			arr[j++] = arr[i];
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}//98