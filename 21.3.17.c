#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	int arr[30][30] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <=i; j++)
		{
			if (j == 0)
				arr[i][j] = 1;
			if (i == j)
				arr[i][j] = 1;
			if (i>1&&j>0)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < n ; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}//109

int main()
{
	int i = 0;
	int j = 0;
	char ch = '0';
	int arr[3][3] = { 0 };
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%c ", &arr[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
		{
			ch = arr[i][1];
			break;
		}
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
		{
			ch = arr[1][i];
			break;
		}
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
	{
		ch = arr[1][1];
	}
	if (arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2])
	{
		ch = arr[1][1];
	}
	if (ch == 'K')
		printf("KiKi wins!");
	else if (ch == 'B')
		printf("BoBo wins!");
	else
		printf("No winner!");
	return 0;
}//110

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50] = { 0 };
	int i = 0;
	while (n)
	{
		arr[i] = n % 6;
		n /= 6;
		i++;
	}
	for (i--; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
	return 0;
}//111

int main()
{
	long long n = 0;
	scanf("%lld", &n);
	printf("%lld", n*(n + 1) / 2);
	return 0;
}//112

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", n / 12 * 4 + 2);
	return 0;
}//114

int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int k = 0;
	int a = n;
	int b = m;
	while (k = a%b)
	{
		a = b;
		b = k;
	}
	printf("%d", b + n*m / b);
	return 0;
}//115

#include<math.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int m = 0;
	int sum = 0;
	int i = 0;
	while (n)
	{
		int w = n % 10;
		if (w % 2 == 0)
			m = 0;
		else
			m = 1;
		sum += m*pow(10, i);
		n /= 10;
		i++;
	}
	printf("%d", sum);
	return 0;
}//116