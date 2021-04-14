#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//在屏幕上打印1-100中3的倍数

//int main()
//{
//	int i = 0;
//
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//}

//给定两个整数，求这两个数的最大公约数

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//
//	int max = 0;
//	if (m > n)//保证max是m和n中小的那个值
//	{
//		max = n;
//	}
//	else
//	{
//		max = m;
//	}
//
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数是：%d\n",max);
//			break;//找出最大公约数，跳出循环
//		}
//
//		max--;//如果没能同时除尽的情况
//	}
//	return 0;
//}

//辗转相除法求最大公约数

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//
//	int t = 0;
//
//	while (t = m % n)//结果非0进入循环，结果为0，打印n
//	{
//		m = n;
//		n = t;
//	}
//	printf("最大公约数是：%d\n", n);
//
//	return 0;
//}
//不用比较m和n的大小，在求mod一次之后，m和n就会换位置

//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		for ( j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		//两种情况能来到这里，一是break（i被整除了，不是素数）
//		//二就是根本没来到if语句中（i不能被j整除，i是素数）
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	int i = 0;
//	int j = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		
//		int flag = 1;//假设i就是素数
//
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)//如果i能被j整除
//			{
//				flag = 0;//能被整除i就一定不是素数
//				break;
//			}
//		}
//		if (flag == 1)//i没进入if语句，没有被赋值
//		{
//			count++;
//			printf("%d ", i);
//			
//		}
//	}
//
//	printf("\ncount=%d\n", count);
//
//
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//假设i是素数
//
//		for (j = 2; j <= sqrt(i); j++)//2-sqrt(i)之间的数去试除
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//
//	for (i = 101; i <= 200; i += 2)//偶数不是素数，从源头上减少
//	{
//		int flag = 1;//假设i是素数
//
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
// 
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}

//关机程序
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	//关机
//	system("shutdown -s -t 60");
//again:
//	printf("您的电脑将在一分钟后关机，请输入：我是猪\n");
//
//	char input[20] = { 0 };
//	scanf("%s", input);
//
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//
//	return 0;
//}


//goto语句只能在一个函数范围内跳转，不能跨函数

//void test(void)
//{
//flag:
//	printf("hehe\n");
//}
//
//int main()
//{
//	goto flag;
//
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, 'x', 5);
//
//	printf("%s\n", arr);
//	return 0;
//}