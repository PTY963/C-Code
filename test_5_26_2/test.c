#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ӡ�������
//1       
//1 1     
//1 2 1    
//1 3 3 1    
//1 4 6 4 1   
//1 5 10 10 5 1 
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;//��
//	int j = 0;//��
//
//	for (i = 0; i < 10; i++)
//	{
//		//������һ��
//		for (j = 0; j <= i; j++)//j=iʱ�����ǶԽ���
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//
//			if (i >= 2 && j >= i)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//
//	//��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j<=i; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// A˵��������
// B˵����C
// C˵����D
// D˵��C�ں�˵
//�ĸ����У�3����˵���滰��1����˵�˼ٻ�

//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer = 'C') + (killer = 'D') + (killer != 'D') == 3)
//		{
//			printf("killer is %c\n", killer);
//		}
//	}
//	return 0;
//}

int main()
{
	char killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			printf("killer is %c\n", killer);
		}
	}
	return 0;
}

