#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	double a = 5 % 2;
//	printf("a=%lf\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	//>>--���Ʋ�����
//	//�ƶ����Ƕ�����λ
//	//00000000000000000000000000010000
//	//�ұ߶�������߲�����λ
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//
//	//�����Ķ����Ʊ�ʾ��:Դ�룬���룬����
//	//���浽�ڴ���ǲ���
//	//10000000000000000000000000000001 - Դ��
//	//11111111111111111111111111111110 - ����
//	//11111111111111111111111111111111 - ����
//	int b = a >> 2;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	//00000000000000000000000000000101
//	//��߶������ұ߲�0��
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
	//& - ��2����λ��
	//int a = 3;
	//int b = 5;
	//int c = a&b;
	//011
	//101
	//001
	//printf("%d\n", c);

	//| - ��2����λ��
	/*int a = 3;
	int b = 5;
	int c = a | b;*/
	//printf("%d\n", c);
	//011
	//101
	//111
	//return 0;

	//��2����λ���
	//��ͬΪ0������Ϊ1
	/*int a = 3;
	int b = 5;
	int c = a ^ b;*/
	//011
	//101
	//110
	//printf("%d\n", c);
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int tmp = 0;
//	printf("a=%d,b=%d\n", a, b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	
//	//���İ취
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d,b=%d\n", a, b);
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//
//	//ͳ��num�Ĳ������м���1
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}*/
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof ������Ǳ�����ռ�ڴ�ռ�Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof (a));//4
//	printf("%d\n", sizeof (int));//4
//	printf("%d\n", sizeof (c));//1
//	printf("%d\n", sizeof (char));//1
//	printf("%d\n", sizeof (p));//4
//	printf("%d\n", sizeof (char*));//4
//	printf("%d\n", sizeof (arr));//40
//	printf("%d\n", sizeof (int [10]));//40
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//}

//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a&(~(1 << 2));
//	printf("%d\n", a);
//	//00000000000000000000000000000000
//	//int a = 0;
//	//~���������ƣ�λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 - ����
//	//11111111111111111111111111111110 - ����  ����λ���䣬����λ��λȡ��
//	//10000000000000000000000000000001 - Դ��
//	//-1
//	//printf("%d\n", ~a);
//	//return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++&&++b&&d++;//1,2,3,4
//	i = a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}

//����һ���ṹ������-struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//ʹ��stuct Stu������ʹ�����һ��ѧ������s1,����ʼ��
//	struct Stu s1 = { "����", 20, "2019010305" };
//	struct Stu* ps = &s1;
//
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//�ṹ��->��Ա��
//
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//�ṹ���������Ա��
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000011 - a
//	char b = 127;
//	//01111111 - b
//
//	//a��b���
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//
//	char c = a + b;
//	//10000010 - c
//	//11111111111111111111111110000010 - ����
//	//11111111111111111111111110000001 - ����
//	//10000000000000000000000001111110 - Դ��
//	printf("%d\n", c);//-126
//	return 0;
//}

