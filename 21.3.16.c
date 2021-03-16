#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int i = 0;
	int a = 0;
	for (i = 1; i <= n*m; i++)
	{
		scanf("%d", &a);
		printf("%d ", a);
		if (i%n == 0)
			printf("\n");
	}
	return 0;
}//103

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int i = 0;
	int h = 0;
	int a = 0;
	int max=0;
	int x = 0;
	int y = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= m; j++)
		{
			scanf("%d", &a);
			if (a > max)
			{
				max = a; 
				x = i;
				y = j;
			}
		}
	}
	printf("%d %d", x, y);
	return 0;
}//104

int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	int j = 0;
	int arr1[10][10] = { 0 };
	int arr2[10][10] = { 0 };
	scanf("%d %d", &m, &n);
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
			if (arr1[i][j] != arr2[i][j])
			{
				printf("No");
				return 0;
			}
		}
	}
	printf("Yes");
}//105

int main()
{
	int i = 0;
	int j = 0;
	int arr[10][10] = { 0 };
	int n = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i>j)
			{
				if (arr[i][j] != 0)
				{
					printf("NO");
					return 0;
				}
			}
		}
	}
	printf("YES");
}//106

int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (j = 0; j < m; j++)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}//107

int main()
{
	int n= 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int i = 0;
	int j = 0;
	int arr[10][10] = { 0 };
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	char k = 0;
	int a = 0;
	int b = 0;
	int d = 0;
	scanf("%d", &d);
	int f = 0;
	for (f = 0; f < d; f++)
	{
		scanf(" %c %d %d", &k, &a, &b);
		if (k == 'r')
		{
			for (i = 0; i < m; i++)
			{
				int tmp = arr[a - 1][i];
				arr[a - 1][i] = arr[b - 1][i];
				arr[b - 1][i] = tmp;
			}
		}
		if (k == 'c')
		{
			for (i = 0; i < n; i++)
			{
				int tmp = arr[i][a - 1];
				arr[i][a - 1] = arr[i][b - 1];
				arr[i][b - 1] = tmp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}//108