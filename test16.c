#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int ret = printf("ab");
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		//判断字母
//		//if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A') && (ch <= 'Z'))
//		if (isalpha(ch))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();
//	}
//	return 0;
//}//35

//int main()
//{
//	//输入
//	char n;
//	scanf("%c", &n);
//	//输出
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		//输出一行
//		int j = 0;
//		for (j = 0; j < 4 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", n);
//		}
//		printf("\n");
//	}
//	return 0;
//}//12

//int main()
//{
//	char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	int sz  = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}//13

//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	scanf("%4d%2d%2d", &y, &m, &d);
//	printf("year=%d\n", y);
//	printf("month=%02d\n", m);
//	printf("date=%02d\n", d);
//	return 0;
//}//14

#include<stdio.h>
int main()
{
	int n = 0;
	while ((scanf("%d", &n) != EOF))
	{
		printf("%d\n", 2 << n-1);
		//printf("%d\n", pow(2, n));
	}
	return 0;
}//29