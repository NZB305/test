#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>//ststem
#include<string.h>//strcmp

int main()
{
	char input[20] = { 0 };//��������
	//�ػ�
	//system() - ר������ִ��ϵͳ�����
	system("shutdown -s -t 60");//�ػ�

again:
	printf("������");
	scanf("%s", input);//%s - �ַ���
	if (strcmp(input, "������") == 0)//�ж�input�зŵ��ǲ��ǡ�������
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
//	printf("����:%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 4, 5, 1, 2, 3 };
//	//�ҳ�����
//	//�������
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		//ͳ��arr[i}��arr�����г��ּ���
//		int count = 0;//������
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
//			printf("����:%d\n", arr[i]);
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