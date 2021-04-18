#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int ls_prime(int n)//函数定义
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;//说明n不是素数，返回0
//		}
//	}
//	return 1;//是素数，返回1
//}
//
//int main()
//{
//	//100-200之间的素数
//	int i = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		if (ls_prime(i) == 1)//函数调用
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}

//写一个函数判断year是否是闰年
//是闰年返回1
//不是闰年返回0
//int is_leap_year(int y)//函数定义
//{
//	if ((0 == y % 4) && (y % 100 != 0) || (0 == y % 40))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//	
//}
//int is_leap_year(int y)
//{
//	return ((0 == y % 4 && y % 100 != 0) || (0 == y % 400));//&& ||都是逻辑操作符
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1==is_leap_year(year) )//函数调用，传值调用
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}
//binary_search 在一个有序数组中查找一个元素key
//查找成功，返回下标
//查找失败，返回-1

//int binary_search(int* parr,int key,int sz)
//int binary_search(int arr[], int key, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;//找到了
//		}
//	}
//	return -1;//没找到
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int ret=binary_search(arr, key, sz);
//
//	if (ret != -1)
//	{
//		printf("找到了，下标为：%d\n", ret);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//
//	return 0;
//}
//int arr[]其实是挂羊头卖狗肉
//int binary_search(int* parr,int key);
//int binary_search(int arr[], int key)
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//arr是指针，所以是4或8个字节
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;//找到了
//		}
//	}
//	return -1;//没找到
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	
//
//	int ret = binary_search(arr, key);//数组arr传参，实际上传的是首元素的地址
//
//	if (ret != -1)
//	{
//		printf("找到了，下标为：%d\n", ret);
//	}
//	else
//	{
//		printf("没找到\n");//输出的是没找到
//	}
//
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	//printf("%d\n", strlen("abc"));//链式访问
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "abc";
//
//	//printf("%s\n", strcpy(arr1, arr2));//链式访问
//
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数声明一下-告知
//	int ADD(int, int);//警告消除
//	int sum = ADD(a, b);//函数调用，调用在定义之前，编译器走的过去，但会报警告
//
//	printf("%d\n", sum);
//	return 0;
//
//}
//
//int ADD(int x, int y)//函数定义
//{
//	return x + y;
//}
//#include"Add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int sum = Add(a, b);//用了别人的函数，就要引头文件（头文件中有函数的声明）
//
//	printf("%d\n", sum);
//
//	return 0;
//}
#include"Add.h"
//导入静态库
#pragma comment(lib,"Add.lib")
int main()
{
	int a = 10;
	int b = 20;

	int sum = Add(a, b);

	printf("%d\n", sum);
	
	return 0;
}