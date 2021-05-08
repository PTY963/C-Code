#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//不允许创建临时变量，交换两个整数的内容
//int main() 
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	//交换a和b的内容
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	//交换a和b的内容
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//写一个函数返回参数二进制中 1 的个数。
//int main()
//{
//	int a = 10;
//	int i = 0;
//	int count = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//
//	printf("%d\n", count);
//
//	return 0;
//}

//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
int main()
{
	int m = 22;
	int n = 33;
	int count = 0;
	int a = m ^ n;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) == 1)
		{
			count++;
		}
	}
	printf("%d\n", count);

	return 0;
}