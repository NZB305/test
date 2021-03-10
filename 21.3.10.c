#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int w = 0;
//	int h = 0;
//	while (~scanf("%f %f", &w, &h) != EOF)
//	{
//		float BMI = 0.0;
//		BMI = w / ((h / 100.0)*(h / 100.0));
//		if (BMI<18.5)
//			printf("Underweight\n");
//		else if (BMI >= 18.5&&BMI <= 23.9)
//			printf("Normal\n");
//		else if (BMI>23.9&&BMI <= 27.9)
//			printf("Overweight\n");
//		else 
//			printf("Obese");
//	}
//	return 0;
//}//52

//#include<math.h>
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	while (~scanf("%lf %lf %lf", &a, &b, &c))
//	{
//		if (a != 0.0)
//		{
//			double dise = b*b - 4 * a*c;
//			if (dise>0)
//				printf("x1=%.2lf;x2=%.2lf\n", (-b - sqrt(dise)) / (2 * a), (-b + sqrt(dise)) / (2 * a));
//			else if (dise<0)
//				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n",
//				-b / (2 * a),
//				sqrt(-dise) / (2 * a),
//				-b / (2 * a),
//				sqrt(-dise) / (2 * a)
//				);
//			else
//				printf("x1=x2=%.2lf\n", -b / (2 * a));
//		}
//		else
//			printf("Not quadratic equation");
//	}
//	return 0;
//}//53

//int main()
//{
//	int y = 0;
//	int m = 0;
//	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	while (~scanf("%d %d", &y, &m))
//	{
//		int day = days[m - 1];
//		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		{
//			if (m == 2)
//				day++;
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}//54

//int main()
//{
//	double a = 0;
//	double b = 0;
//	char c = 0;
//	while (~scanf("%lf%c%lf", &a, &c, &b))
//	{
//		switch (c)
//		{
//		case '+':
//			printf("%.4lf+%.4lf=%.4lf\n", a, b, a + b);
//			break;
//		case '-':
//			printf("%.4lf-%.4lf=%.4lf\n", a, b, a - b);
//			break;
//		case '*':
//			printf("%.4lf*%.4lf=%.4lf\n", a, b, a * b);
//			break;
//		case '/':
//			if (b == 0.0)
//			{
//				printf("Wrong!Division by zero!\n");
//			}
//			else
//			{
//				printf("%.4lf/%.4lf=%.4lf\n", a, b, a / b);
//			}
//			break;
//		default:
//			printf("Invalid operation!\n");
//			break;
//		}
//	}
//	return 0;
//}//55

