#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define M 3
#define N 3
void fun(int tt[M][N], int pp[N])
{
	int i, j = 0;
	for (i = 0; i < N; i++)
	{
		int min = 100;
		for (j = 0; j < M; j++)
		{
			if (tt[j][i] < min)
			{
				min = tt[j][i];
			}
		}
		pp[i] = min;
	}
}
int main()
{
	int tt[M][N] = { 0 };
	int pp[N] = { 0 };
	int i, j = 0;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			tt[i][j] = rand() % 100 + 1;
		}
	}
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%4d",tt[i][j]);
		}
		printf("\n");
	}
	fun(tt, pp);
	for (i = 0; i < N; i++)
	{
		printf("pp[%d]=%4d\n", i,pp[i]);
	}
	return 0;
}
