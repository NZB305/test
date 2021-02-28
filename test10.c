#include<stdio.h>

int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));
	return 0;
}
//int main()
//{
//	int a = 10;//4个字节
//	int*p = &a;//取地址
//	printf("%p\n",&a);
//	printf("%p\n", p);
//	*p = 20;//* - 解引用操作符
//	printf("a=%d\n", a);
//	//有一种变量是用来存放地址的-指针变量
//	return 0;
//}
//函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//宏的定义
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add( a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	extern int g_val;//extern 声明外部符号的
//	printf("g_val=%d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a: b);
//	printf("%d", max);
//	return 0;
//}
//int main()
//{
//	int a=0;
//	int b=3;
//	//int c = a&&b;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a =(int) 3.14;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//前置++，先++，再使用
//	//int b = a--;//后置--，先使用，再--
//	int b = --a;//前置--，先--，再使用
//	printf("a = %d\nb = %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("Max=%d\n", max);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (a > b)
//		printf("%d\n", a);
//	else
//		printf("%d\n", b);
//	return 0;
//}