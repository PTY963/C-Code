#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	float a = 5.5f;
//	//101.1
//	//1.011*2^2
//	//s=0,M=1.011,E=2
//	//0 10000001 01100000000000000000000
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//40 b0 00 00
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	//00000000 00000000 00000000 00001001
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);//9
//	printf("pFloat��ֵΪ��%f\n", *pFloat);//0.000000
//	//00000000 00000000 00000000 00001001 �Ը����͵��ӽǿ���
//	//0 00000000 00000000000000000001001
//	//s E        M
//	//0.00000000000000000001001*2^(1-127) �ǳ�С�����֣��ӽ�0
//	//float���ִ�ӡʱֻ��ʾС����֮���������Чλ
//	//���ԣ����յĽ����0.000000
//
//	*pFloat = 9.0;
//	//1001.0
//	//1.0010*2^3
//	//s=0,M=1.0010,E=3
//	//s=0,E=3+127, M=0010
//	//0 10000010 00100000000000000000000
//	printf("n��ֵΪ��%d\n", n);//1091567616
//	printf("pFloat��ֵΪ��%f\n", *pFloat);//9.000000
//
//	return 0;
//}



//int main()
//{
//	char* p = "hello world";//�������ǰ�"hello world"�ַ������׵�ַ�洢��p��
//	printf("%c\n", *p);//h
//	return 0;
//}

//���ԡ���ָoffer��
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char* str3 = "hello bit.";
//	char* str4 = "hello bit.";
//
//	if (str1 == str2)//str1��str2����������ʾ��Ԫ�ص�ַ����ʾ��ͬ�Ŀռ�
//	{
//		printf("str1 and str2 are same\n");
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");
//	}
//
//	if (str3 == str4)//"hello bit."�ǳ����ַ����������Ըı䣬�������ڴ���ֻ�洢һ��
//	{
//		printf("str3 and str4 are same\n");
//	}
//	else
//	{
//		printf("str3 and str4 are not same\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//	int* arr[3] = { a,b,c };//��������ʾ��Ԫ�ص�ַ
//
//	int i = 0;
//	for (i = 0; i < 3; i++)//�õ��������е�ÿһ�е��׵�ַ
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*parr)[10]=&arr;//ȡ������������ĵ�ַ
//	//parr��һ������ָ��-��ŵ�������ĵ�ַ  int(*)[10]��������ָ��parr������
//
//	double* d[5];
//	double* (*pd)[5]=&d;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*parr)[10]=&arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*parr) + i));
//	}
//	return 0;
//}

//����ָ���ʹ��
//void print1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//void print2(int(*parr)[5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(parr + i) + j));
//			//parr ��arr[0]�ĵ�ַ
//			//parr+i �õ�����ÿһ�еĵ�ַ
//		}
//		printf("\n");
//	}
//		
//}

//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);//arr������������ʾ��Ԫ�صĵ�ַ
//	print2(arr, 3, 5);//arr��ʾ��Ԫ�ص�ַ����ά������Ԫ�ص�ַ�����ǵ�һ�У�
//	return 0;
//}