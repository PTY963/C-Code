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
//		//��ӡ����
//		for (i = 0; i < n; i++)
//		{
//			//ÿһ�еĴ�ӡ
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
//		//��������
//		for (i = 0; i < n; i++)
//		{
//			//��ӡÿһ��
//			//1.�ո�
//			int j = 0;
//			for (j = 0; j < n-1-i; j++)
//			    printf("  ");
//			
//			//2.*+�ո�
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
