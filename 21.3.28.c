#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}91

//int main()
//{
//	int h, m1, m2 = 0;
//	scanf("%d:%d %d", &h, &m1, &m2);
//	int h2 = (m2 % 60 + m1) / 60;
//	printf("%02d:%02d", ((m2 / 60 + h) % 24 + h2), (m2 % 60 + m1) % 60);
//	return 0;
//}//113

//int main()
//{
//	double a, b, c;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	printf("%.2lf %.2lf", a + b + c, (a + b + c) / 3);
//	return 0;
//}//122

//int main()
//{
//	int i = 0;
//	int arr[4] = { 0 };
//	for (i = 0; i<4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = 0;
//	for (i = 0; i<4; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}//123

//int main()
//{
//	int i = 0;
//	int a, b, c;
//	while (~scanf("%d %d %d", &a, &b, &c))
//	{
//		float d = (a + b + c) / 3.0;
//		if (d >= 60)
//		{
//			printf("NO");
//		}
//		else
//		{
//			printf("YES");
//		}
//	}
//	return 0;
//}//124

//int main()
//{
//	int i, n, a, b, c;
//	scanf("%d", &n);
//	int count = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d %d %d", &a, &b, &c);
//		if ((a + b + c)<180)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}//126

//int main()
//{
//	int n, i;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	int max = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}//127
//int main()
//{
//	int n, i, score;
//	scanf("%d", &n);
//	int max = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &score);
//		if (score>max)
//			max = score;
//	}
//	printf("%d", max);
//	return 0;
//}//127

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i, j;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		int x = 1;
		for (j = 1; j <= i; j++)
		{
			x *= j;
		}
		sum += x;
	}
	printf("%d", sum);
	return 0;
}//128

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[100] = { 0 };
	int i;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int tmp = 0;
	int x;
	scanf("%d", &x);
	for (i = 0; i<n; i++)
	{
		if (x == arr[i])
			tmp++;
	}
	printf("%d", tmp);
	return 0;
}//130