#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//* * * * *
//* * * *
//* * *
//* *
//*
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		//打印几行
//		for (i = 0; i < n; i++)
//		{
//			//每一行的打印
//			int j = 0;
//			for (j = 0; j < n-i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//        *
//      * *
//    * * *
//  * * * *
//* * * * *
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		//控制行数
//		for (i = 0; i < n; i++)
//		{
//			//打印每一行
//			//1.空格
//			int j = 0;
//			for (j = 0; j < n-1-i; j++)
//			    printf("  ");
//			
//			//2.*+空格
//			for (j = 0; j <= i; j++)
//				printf("* ");
//			
//			printf("\n");
//		}
//	}
//	return 0;
//}

int main()
{
	int n = 0;
	while (scanf("%d", &n)!=EOF)
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n; j++)
			{
				if (i + j < n - 1)
					printf("  ");
				else
					printf("* ");

			}
			printf("\n");
		}
	}
	return 0;
}
