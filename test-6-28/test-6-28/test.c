#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�������룬һ��������1-100������ʾ�߶γ��ȼ�'*'������
//���ÿ�����룬���ռһ�У���'*'��ɵĶ�Ӧ���ȵ��߶�
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

//��ӡֱ��������
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
			//��ӡÿһ��
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
