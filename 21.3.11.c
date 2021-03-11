#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (~scanf("%d", &a))
//	{
//		int i = 0;
//		for (i = 0; i<a; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}//56

//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i<a; i++)
//		{
//			int j = 0;
//			for (j = 0; j<a; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}//57

//int main()
//{
//	int a = 0;
//	while (~scanf("%d", &a))
//	{
//		int i = 0;
//		for (i = 0; i<a; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}//58

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}//59

int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		int i = 0;
		for (i = 0; i<n; i++)
		{
			int j = 0;
			for (j = 0; j < n; j++)
			{
				if (i + j < n - 1)
					printf("  ");
				else
					printf("* ");
			}
			//for (j = 0; j<n - 1 - i; j++)
			//{
			//	printf("  ");
			//}
			//for (j = 0; j<i + 1; j++)
			//{
			//	printf("* ");
			//}
			printf("\n");
		}
	}
	return 0;
}//60