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
//	int a = 10;//4���ֽ�
//	int*p = &a;//ȡ��ַ
//	printf("%p\n",&a);
//	printf("%p\n", p);
//	*p = 20;//* - �����ò�����
//	printf("a=%d\n", a);
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//	return 0;
//}
//������ʵ��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//��Ķ���
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//��ķ�ʽ
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
//	extern int g_val;//extern �����ⲿ���ŵ�
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
//	//int b = a++;//����++����ʹ�ã���++
//	//int b = ++a;//ǰ��++����++����ʹ��
//	//int b = a--;//����--����ʹ�ã���--
//	int b = --a;//ǰ��--����--����ʹ��
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