#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}//117

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100001] = { 0 };
//	int i = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &k);
//		arr[k] = k;
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != 0)
//			printf("%d", arr[i]);
//	}
//	return 0;
//}//118

//int main()
//{
//	char arr[8000] = { 0 };
//	scanf("%s", arr);
//	long long c = 0;
//	long long ch = 0;
//	long long chn = 0;
//	char *p = arr;
//	while (*p)
//	{
//		if (*p == 'C')
//			c++;
//		else if (*p == 'H')
//			ch += c;
//		else if (*p == 'N')
//			chn += ch;
//		*p++;
//	}
//	printf("%d", chn);
//	return 0;
//}//119

//int main()
//{
//	int score = 0;
//	scanf("%d", &score);
//	if (score >= 90 && score <= 100)
//		printf("A");
//	else if(score >= 80 && score <= 89)
//		printf("B");
//	else if (score >= 70 && score <= 79)
//		printf("C");
//	else if (score >= 60 && score <= 69)
//		printf("D");
//	else if (score >= 0 && score <= 59)
//		printf("E");
//	else
//		printf("F");
//	return 0;
//}//125

//int max3(int x, int y, int z)
//{
//	int max = x > y ? x : y;
//	return (max > z ? max : z);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	float m = 0.0;
//	printf("%.2f", ((float)max3(a + b, b, c)) / (max3(a, b + c, c) + max3(a, b, b + c)));
//	return 0;
//}//129

//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\" << endl;");
//	return 0;
//}//131

#include<math.h>
int is_prime(int a)
{
	int j = 0;
	for (j = 2; j <= sqrt(a); j++)
	{
		if (a%j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 999; i++)
	{
		if (is_prime(i))
		{
			count++;
		}
	}
	printf("%d", count);
}//135