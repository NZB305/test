#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>//����sqrt
#include<time.h>//����time

void menu()
{
	printf("********************************\n");
	printf("****   1.play      0.exit   ****\n");
	printf("********************************\n");
}
void game()
{
	int ret=0;
	int guess = 0;//���ܲµ�����
	ret=rand()%100+1;
	while (1)
	{
		printf("�������:");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}//������

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d ", i, j, i*j);
//		printf("\n");
//	}
//	return 0;
//}//�˷��ھ���


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i <=sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}//ʮ�����������ֵ

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i < 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}//��1/1-1/2+1/3...-1/100��ֵ

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 1;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j >sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}//��100��200�������

//int main()
//{
//	int i = 1000;
//	int count = 0;
//	for (i=1000 ; i <= 2000; i++)
//	{
//		//if (i % 4 == 0&&i%100!=0)
//		//{
//		//	printf("%d ", i);
//		//	count++;
//		//}
//		//else if (i % 400 == 0)
//		//{
//		//	count++;
//		//	printf("%d ", i);
//		//}
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}//1000��2000������

//int main()
//{
//	int m;
//	int n;
//	int r=0;
//	scanf("%d%d", &m, &n);
//	while (m%n)
//	{
//		r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}//�����Լ��

//int main()
//{
//	int i = 1;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = a;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}