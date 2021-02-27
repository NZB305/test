#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int sz = 0;
	printf("%d\n", sizeof(arr));
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	/*int a = 10;
	printf("%d", sizeof(a));*/
	return 0;
}
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a^b;
//	printf("%d\n", c);
//	return 0;
//	/*int a = 3;
//	int b = 5;
//	int c = a|b;
//	printf("%d\n", c);
//	return 0;*/
//	/*int a = 3;
//	int b = 5;
//	int c = a&b;
//	printf("%d\n", c);
//	return 0;*/
//}
//int main()
//{
//	int a = 1;
//	int b = a << 3;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 5 % 2;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);
//	sum = Add(a, b);
//	sum = Add(2, 3);
//	printf("sum =%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 10000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if (line>=10000)
//		printf("好offer\n");
//	return 0;
//}
/*int main()
{
	printf("%c\n", '\x61');
	return 0;
}
*/
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗?(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}