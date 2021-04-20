#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)//迭代
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}
//int Fun(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fun(n - 1);
//}
//int main()
//{
//	int n = 0;
//	sacnf("%d", &n);
//
//	int ret=Fun(n);//循环
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//有一些功能可以用迭代的方式实现，也可以用循环的方式实现


//求第n个斐波那契数
//int count = 0;
//int Fib(int n)
//{
//	//计算第3个斐波那契数计算机的计算几次
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);//效率太低，重复大量的计算
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
// 
// 
// 
// 
//int Fib(int n)
//{
//	int c = 1;
//	int a = 1;
//	int b = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//编写一个程序计算1-100中，出现数字9的个数
// 9 19 29 39 49 59 69 79 89 99
//90 91 92 93 94 95 96 97 98 99

//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

//计算1-1/2+1/3-1/4.....+1/100的结果

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}

//求10个整数中的最大值

//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int i = 0;
//	int max = arr[0];//这一步比较重要
//
//	for (i = 1; i < 10; i++)
//	{
//		if (max > arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)//共9行
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)//打印每一行
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//-是左对齐的意思
//		}
//		printf("\n");//打印完一行后换行
//	}
//	return 0;
//}


//void Fun()
//{
//	{
//		int a = 10;
//	}//复合语句
//	printf("%d\n", a);//打印不了
//}


//递归和非递归分别实现求n的阶乘(不考虑溢出的问题)
//n!=1!+2!+3!+...+n!
//3!=1*2*3

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 1;
//
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}
//int Factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n* Factorial(n - 1);//3！=2！*3 2！=1*2
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret=Factorial(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}



//递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//     
//	return 0;
//}
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret=Fib(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//编写一个函数 reverse_string(char* string)(递归实现)
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//例如：abcdef fedcba
//void reverse_string(char* string)
//{
//	
//
//
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//
//	reverse_string(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}

//递归实现汉诺塔问题
void Move(int n, char A, char B, char C)//B是辅助塔
{
	if (n == 1)
		printf("%c-->%c\n", A, C);
	else
	{
		Move(n - 1, A, C, B);//C是辅助塔
		printf("%c-->%c\n", A, C);
		Move(n - 1, B, A, C);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);//盘子数

	Move(n, 'A', 'B', 'C');//把A柱子上的盘子移动到C柱子上

	return 0;
}