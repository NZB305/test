#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//main()
//{
//	float a;
//	scanf("%f", &a);
//	printf("%.2f0000\n", a);
//}

//main()
//{
//	char    n;
//	printf("Input a 大写字母\n");
//	scanf("%c", &n);
//	n = n + 32;
//	printf("%c\n", n);
//}

//main()
//{
//	int x, y;
//	printf("Please Input an X\n");
//	scanf("%d", &x);
//	if (x<0)
//		y = x*x + x + 6;
//	if (x >= 0 && x<10)
//		y = x*x - 5 * x + 6;
//	else
//		y = x*x - x - 1;
//	printf("%d\n", y);
//}

//main()
//{
//	float s, r, w;
//	int m;
//	printf("请输入应发工资:\n");
//	scanf("%f", &s);
//	m = s / 500;
//	switch (m)
//	{
//	case 0:
//		r = 0.0;
//		break;
//	case 1:
//		r = 0.05;
//		break;
//	case 2:
//	case 3:
//		r = 0.08;
//		break;
//	case 4:
//	case 5:
//		r = 0.10;
//		break;
//	default:
//		r = 0.15;
//		break;
//	}
//	w = s*(1 - r);
//	printf("实发工资:%.2f", w);
//}

main()
{
	int n, i, s;
	s = 0;
	printf("请输入正整数n:\n");
	scanf("%d", &n);
	for (i = 2; i<n; i++)
	{
		if (n%i == 0)
		{
			s = s + i;
		}

	}
	printf("输出：%d", s);
}