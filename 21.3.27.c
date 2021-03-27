#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n >= 10)
//	{
//		printf("Danger++");
//	}
//	if (n <= 9 && n >= 4)
//		printf("Danger");
//	if (n >= 0 && n <= 3)
//		printf("Good");
//	return 0;
//}//73

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50] = { 0 };
	int i, j = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int b, c = 0;
	scanf("%d", &b);
	for (i = 0; i<n; i++)
	{
		if (b>arr[i])
		{
			c++;
		}
	}
	for (j = n; j>c; j--)
	{
		arr[j] = arr[j - 1];
	}
	arr[c] = b;
	for (i = 0; i<n + 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}//88