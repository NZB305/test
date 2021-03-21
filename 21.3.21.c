#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	float n = 0.0;
//	scanf("%f", &n);
//	printf("%.2f0000", n);
//	return 0;
//}

//int main()
//{
//	char n= '0';
//	printf("输入大写字母：");
//	scanf("%c", &n);
//	char m = n + 32;
//	printf("%c", m);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = 0;
//	if (n < 0)
//	{
//		m = n*n + n + 6;
//	}
//	else if (n >= 0 && n < 10)
//	{
//		m = n*n - n * 5 + 6;
//	}
//	else
//	{
//		m = n*n - n - 1;
//	}
//	printf("%d", m);
//	return 0;
//}

//int main()
//{
//	float n,m,r = 0.0;
//	scanf("%f", &n);
//	int s = n / 500;
//	switch(s)
//	{
//		case 0:
//			m = n;
//			break;
//		case 1:
//			m = 500 + (n - 500)*0.95;
//			break;
//		case 2:
//		case 3:
//			m = 975 + (n - 1000)*0.92;
//			break;
//		case 4:
//		case 5:
//			m = 1895 + (n - 2000)*0.9;
//			break;
//		default:
//			m = 2795 + (n - 3000)*0.85;
//			break;
//	}
//	printf("%.2f", m);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i, sum = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	do
//	{
//		printf("输入一个大于1但不大于100的数:");
//		scanf("%d", &n);
//	} while (n <= 1 || n >= 100);
//	int i,m = 1;
//	float sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		m = m*i;
//		sum += 1.0 / m;
//	}
//	printf("%f", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i,j = 0;
//	int m = 1;
//	int arr[10] = { 0 };
//	while (n != 0)
//	{
//		i = n % 10;
//		n = n/100;
//		arr[j] = i;
//		j++;
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = n % 10;
//	int b = (n / 10) % 10;
//	int c = n / 100;
//	if (n == a*a*a + b*b*b + c*c*c)
//		printf("%d是水仙花数\n", n);
//	else
//		printf("%d不是水仙花数\n", n);
//	return 0;
//}

#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	double sum = 0.0;
//	for (i = 3; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			if (j >= i-1)
//			{
//				sum += sqrt(i);
//			}
//		}
//	}
//	printf("%lf", sum);
//	return 0;
//}

//int main()
//{
//	int s;
//	scanf("%d", &s);
//	int f0 = 0;
//	int f1 = 1;
//	int f2 = 1;
//	int i = 0;
//	for (i = 0;; i++)
//	{
//		f0 = f1;
//		f1 = f2;
//		f2 = f0 + f1;
//		if (f2 > s)
//			break;
//	}
//	printf("%d", f2);
//	return 0;
//}

int main()
{
	int n = 0;
	do
	{
		scanf("%d", &n);
	} while (n>100||n<0);
	if (n < 10)
	{
		if ((n*n) % 10 == n)
			printf("%d是同构数\n",n);
	}
	else if (n >= 10 && n < 99)
	{
		if ((n*n)%100==n)
			printf("%d是同构数\n",n);
	}
	else
	{
		printf("%d不是同构数\n", n);
	}
	return 0;
}