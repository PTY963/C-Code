#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//多组输入，一个整数（1-100），表示线段长度即'*'的数量
//针对每行输入，输出占一行，用'*'组成的对应长度的线段
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//打印直角三角形
//*
//* *
//* * *
//* * * *
int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			//打印每一行
			int j = 0;
			for (j = 0; j <= i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}
