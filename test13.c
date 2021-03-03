#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}

//求两个数二进制位相同单的个数
//int get_diff_bit(int x, int y)
//{
//	int count = 0;
//	int z = x^y;
//	while (z)
//	{
//		z = z&(z - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count=get_diff_bit(m, n);
//	printf("count=%d\n", count);
//	return 0;
//}

//求一个数的二进制的奇数位和偶数位
//void print(int m)
//{
//	int i = 0;
//	printf("偶数位:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("奇数位:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//int print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//#include<string.h>
//void reverse_string(char arr[])
//{
//	//int left=0;
//	//int right = strlen(arr)-1;
//	//while (left < right)
//	//{
//	//	int tmp = arr[left];
//	//	arr[left] = arr[right];
//	//	arr[right] = tmp;
//	//	left++;
//	//	right--;
//	//}
//	char  tmp = arr[0];
//	int len = strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//打印一个数各个位之和
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//		return DigitSum(num / 10) + num % 10;
//	else
//		return num;
//}
//int main()
//{
//	unsigned int num = 9;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}

double Pow(int n, int k)
{
	if (k < 0)
		return (1.0 / Pow(n, -k));
	else if (k == 0)
		return 1;
	else
		return n*Pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf", ret);
	return 0;
}