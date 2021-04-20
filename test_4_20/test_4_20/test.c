#define _CRT_SECURE_NO_WARNINGS 1
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i;
//		flag = -flag;
//	}
//
//	printf("%lf\n", sum);
//
//	return 0;
//}


//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//char* reverse_string(char* str)
//{
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//
//	reverse_string(arr);//函数调用，传址调用，数组名表示首元素地址
//
//	printf("%s\n", arr);
//
//	return 0;
//}


//编写一个函数实现n的k次方，使用递归实现。
//double my_pow(double n, double k)
//{
//	if (k == 0)
//		return 1;
//	else
//		return n * my_pow(n,k-1);
//}
//int main()
//{
//	double n = 0;
//	double k = 0;
//	scanf("%lf%lf", &n, &k);
//
//	double ret=my_pow(n, k);//函数调用，传值调用
//
//	printf("%lf\n", ret);
//
//	return 0;
//}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//int DigitSum(int n)
//{
//	if (n <= 9)
//		return n;
//	else
//		return n % 10 + DigitSum(n / 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret=DigitSum(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//void Move(int n, char A, char B, char C)
//{
//	if (n == 1)
//		printf("%c-->%c\n", A, C);
//	else
//	{
//		Move(n - 1, A, C, B);
//		printf("%c-->%c\n", A, C);
//		Move(n - 1, B, A, C);
//
//	}
//	 
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	Move(n, 'A', 'B', 'C');
//
//	return 0;
//}