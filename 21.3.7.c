#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int sec = 0;
//	scanf("%d", &sec);
//	int h = sec / 60 / 60;
//	int m = sec / 60 % 60;
//	int s = sec % 60;
//	printf("%d %d %d", h, m, s);
//	return 0;
//}//23

//int main()
//{
//	float a = 0.0;
//	float b = 0.0;
//	float c = 0.0;
//	scanf("%f %f %f", &a, &b, &c);
//	float sum = a + b + c;
//	float f = sum / 3.0;
//	printf("%.2f %.2f", sum, f);
//	return 0;
//}//24

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int h = 0;
//	while (scanf("%d %d %d", &n, &h, &m) != EOF)
//	{
//		if (m%h)
//			printf("%d", n - m / h - 1);
//		else
//			printf("%d", n - m / h);
//	}
//	return 0;
//}//30

//int main()
//{
//	printf("I lost my cellphone!");
//	return 0;
//}//31

//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man");
//	return 0;
//}//32

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int score=0;
//		scanf("%d", &score);
//		sum += score;
//	}
//	printf("%.1f", sum / 5.0);
//	return 0;
//}//33
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int score[5] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		sum += score[i];
//	}
//	printf("%.1f", sum / 5.0);
//	return 0;
//}//33

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%x %o", &a, &b);
//	int sum = a + b;
//	printf("%d", sum);
//	return 0;
//}//34

//int main()
//{
//	float price = 0.0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	scanf("%f %d %d %d", &price, &m, &d, &flag);
//	if ((m == 11) && (d == 11))
//	{
//		price *= 0.7;
//		price -= 50 * flag;
//	}
//	if ((m == 12) && (d == 12))
//	{
//		price *= 0.8;
//		price -= 50 * flag;
//	}
//	if (price<0)
//		price = 0;
//	printf("%.2f", price);
//	return 0;
//}//37

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[40] = { 0 };
	int i = 0;
	for (i = 0; i < 40; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n-1; i++)
	{
		int j = 0;
		int tmp = 0;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	return 0;
}//39

//int main()
//{
//	int w = 0;
//	int h = 0;
//	scanf("%d %d", &w, &h);
//	float BMI = 0.0;
//	BMI = w / ((h / 100.0)*(h / 100.0));
//	printf("%.2f", BMI);
//	return 0;
//}//25

int main()
{
	char n = 0;
	while (scanf("%c", &n) != EOF)
	{
		printf("%c\n", n + 32);
		getchar();
	}
	return 0;
}//28