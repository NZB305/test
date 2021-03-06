#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("a=%d,b=%d", &a, &b);
//	int c = 0;
//	c = b;
//	b = a;
//	a = c;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}//15

//int main()
//{
//	char ch = 0;
//	scanf("%ch", &ch);
//	printf("%d", ch);
//	return 0;
//}//16

//int main()
//{
//	int a = 40;
//	int c = 212;
//	int ret = (-8 + 22)*a - 10 + c / 2;
//	printf("%d", ret);
//	return 0;
//}//17

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", a / b, a%b);
//	return 0;
//}//18

//int main()
//{
//	int w = 0;
//	double h = 0; 
//	scanf("%d %lf", &w, &h);
//	double tmp = w / (h *h );
//	if (tmp >= 18.5&&tmp <= 23.9)
//		printf("Normal");
//	else
//		printf("Abnormal");
//	return 0;
//}//36

//#include<math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	double circumference = a + b + c;
//	double p = (a + b + c) / 2.0;
//	double area = sqrt(p*(p - a)*(p - b)*(p - c));
//	printf("circumference=%.2lf area=%.2lf", circumference, area);
//	return 0;
//}//26

////#include<stdio.h>
//int main()
//{
//	double r = 0;
//	scanf("%lf", &r);
//	double pi = 3.1415926;
//	double v = 4 / 3.0*pi*r*r*r;
//	printf("%.3lf", v);
//	return 0;
//}//25

//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 10; j <= 10000; j *=10)
//		{
//			sum += (i / j)*(i%j);
//		}
//		if (sum==i)
//			printf("%d ", i);
//	}
//	return 0;
//}//38

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", (a+b) % 100);
//	return 0;
//}//20

//int main()
//{
//	float a = 0.0;
//	scanf("%f", &a);
//	printf("%d", (int)a%10);
//	return 0;
//}//21

int main()
{
	int age = 0;
	scanf("%d",&age);
	long long s = age * 3.156e7;
	printf("%lld", s);
	return 0;
}//22

