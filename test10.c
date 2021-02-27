#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>//ststem
#include<string.h>//strcmp

int main()
{
	char input[20] = { 0 };//储存数据
	//关机
	//system() - 专门用来执行系统命令的
	system("shutdown -s -t 60");//关机

again:
	printf("我是猪：");
	scanf("%s", input);//%s - 字符串
	if (strcmp(input, "我是猪") == 0)//判断input中放的是不是“我是猪”
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("单身狗:%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 4, 5, 1, 2, 3 };
//	//找出单身狗
//	//暴力求解
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	for (i = 0; i < sz; i++)
//	{
//		//统计arr[i}在arr数组中出现几次
//		int count = 0;//计数器
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//
//		if (count == 1)
//		{
//			printf("单身狗:%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	printf("a=%d b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}