#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	int count_a = 0;
//	int count_b = 0;
//	//一个字符一个字符读取
//	while (((ch = getchar()) != '0') && (ch != EOF))
//	{
//		if (ch == 'A')
//		{
//			count_a++;
//		}
//		if (ch == 'B')
//		{
//			count_b++; 
//		}
//	}
//	if (count_a == count_b)
//	{
//		printf("%c\n", 'E');
//	}
//	else if (count_a > count_b)
//		printf("%c\n", 'A');
//	else
//		printf("%c\n", 'B');
//	return 0;
//
//}//40

//int main()
//{
//	char str[100] = { 0 };
//	gets(str);
//	int i = 0;
//	int count = 0;
//	while (str[i] != '0')
//	{
//		if (str[i] == 'A')
//			count++;
//		if (str[i] == 'B')
//			count--;
//		
//		i++;
//	}
//	if (count > 0)
//		printf("A\n");
//	else if (count == 0)
//		printf("E\n");
//	else
//		printf("B\n");
//	return 0;
//}//40

//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a >= 140)
//			printf("Genius");
//	}
//	return 0;
//}//41

//int main()
//{
//	int score = 0;
//	while (~scanf("%d", &score))
//	{
//		if (score >= 90 && score <= 100)
//			printf("Perfect");
//	}
//	return 0;
//}//42

//int main()
//{
//	int score = 0;
//	while (~scanf("%d", &score))
//	{
//		if (score <= 100 && score >= 60)
//			printf("Pass");
//		if (score >= 0 && score < 60)
//			printf("Fail");
//		printf("\n");
//	}
//	return 0;
//}//43

//int main()
//{
//	int a = 0;
//	while (~scanf("%d", &a))
//	{
//		if (a % 2 == 0)
//			printf("Even");
//		if (a % 2 == 1)
//			printf("Odd");
//		printf("\n");
//	}
//	return 0;
//}//44

//int main()
//{
//	int s1 = 0;
//	int s2 = 0;
//	int s3 = 0;
//	while (~scanf("%d %d %d", &s1, &s2, &s3))
//	{
//		int Max = 0;
//		if (s1 > Max)
//			Max = s1;
//		if (s2 > Max)
//			Max = s2;
//		if (s3 > Max)
//			Max = s3;
//		printf("%d\n", Max);
//	}
//	return 0;
//}//45

int main()
{
	int arr[2] = { 0 };
	while (scanf("%d %d %d", &arr[0], &arr[1], &arr[2]))
	{
		int i = 0;
		int max = 0;
		for (i = 0; i < 3; i++)
		{
			if (arr[i]>max)
				max = arr[i];
		}
		printf("%d\n", max);
	}
	return 0;
}