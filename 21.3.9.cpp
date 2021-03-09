#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	char s[] = "AaEeIiOoUu";
//	//while ((ch = getchar()) != EOF)
//	//%c前的空格表示读取字符时忽略所有空白字符
//	while ((scanf(" %c",&ch)) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == s[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//		{
//			printf("Consonant\n");
//		}
//		//getchar();
//	}
//	return 0;
//}//46

//int main()
//{
//	char ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'A'&&ch <= 'Z') || (ch >= 'a'&&ch <= 'z'))
//		{
//			printf("%c is an alphabet.\n",ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n",ch);
//		}
//		getchar();
//	}
//	return 0;
//}//47

//int main()
//{
//	char ch = '0';
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (ch == '\n')
//			continue;
//		else if (('A' <= ch) && (ch <= 'Z'))
//			printf("%c\n", ch + 32);
//		else if (('a' <= ch) && (ch <= 'z'))
//			printf("%c\n", ch - 32);
//		else
//			printf("%c\n", ch);
//	}
//	return 0;
//}//48

int main()
{
	int a = 0;
	while (~scanf("%d", &a))
	{
		if (a > 0)
			printf("%d\n",1);
		else if (a == 0)
			printf("%.1f\n", 0.5);
		else
			printf("%d\n", 0);
	}
	return 0;
}//50

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (~scanf("%d %d %d", &a, &b, &c))
	{
		if ((a + b)>c && (a + c)>b && (b + c)>a)
		{
			if ((a == b) && (b == c))
			{
				printf("Equilateral triangle!\n");
			}
			else if (((a == b) && (a != c)) || ((a == c) && (c != b)) || ((b == c) && (c != a)))
			{
				printf("Isosceles triangle!\n");
			}
			else
			{
				printf("Ordinary triangle!\n");
			}
		}
		else
			printf("Not a triangle!\n");
	}
	return 0;
}//51