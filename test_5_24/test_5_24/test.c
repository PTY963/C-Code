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
//	printf("n的值为：%d\n", n);//9
//	printf("pFloat的值为：%f\n", *pFloat);//0.000000
//	//00000000 00000000 00000000 00001001 以浮点型的视角看待
//	//0 00000000 00000000000000000001001
//	//s E        M
//	//0.00000000000000000001001*2^(1-127) 非常小的数字，接近0
//	//float数字打印时只显示小数点之后的六个有效位
//	//所以，最终的结果是0.000000
//
//	*pFloat = 9.0;
//	//1001.0
//	//1.0010*2^3
//	//s=0,M=1.0010,E=3
//	//s=0,E=3+127, M=0010
//	//0 10000010 00100000000000000000000
//	printf("n的值为：%d\n", n);//1091567616
//	printf("pFloat的值为：%f\n", *pFloat);//9.000000
//
//	return 0;
//}



//int main()
//{
//	char* p = "hello world";//本质上是把"hello world"字符串的首地址存储在p中
//	printf("%c\n", *p);//h
//	return 0;
//}

//来自《剑指offer》
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char* str3 = "hello bit.";
//	char* str4 = "hello bit.";
//
//	if (str1 == str2)//str1和str2是数组名表示首元素地址，表示不同的空间
//	{
//		printf("str1 and str2 are same\n");
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");
//	}
//
//	if (str3 == str4)//"hello bit."是常量字符串，不可以改变，所以在内存中只存储一个
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
//	int* arr[3] = { a,b,c };//数组名表示首元素地址
//
//	int i = 0;
//	for (i = 0; i < 3; i++)//拿到了数组中的每一行的首地址
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
//	int(*parr)[10]=&arr;//取的是整个数组的地址
//	//parr是一个数组指针-存放的是数组的地址  int(*)[10]就是数组指针parr的类型
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

//数组指针的使用
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
//			//parr 是arr[0]的地址
//			//parr+i 拿到的是每一行的地址
//		}
//		printf("\n");
//	}
//		
//}

//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);//arr是数组名，表示首元素的地址
//	print2(arr, 3, 5);//arr表示首元素地址。二维数组首元素地址，就是第一行！
//	return 0;
//}