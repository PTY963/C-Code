#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);

// 1 2 3
// 4 5 6
// 7 8 9

//int find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//
//	while (x < r && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;//找到了
//		}
//
//	}
//
//	return 0;//没找到
//
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//
//	int ret=find_num(arr, 3, 3, k);
//	if (1 == ret)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}


//返回下标版
//int find_num(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;//找到了
//		}
//
//	}
//
//	return 0;//没找到
//
//}

//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//
//	int x = 3;//行
//	int y = 3;//列
//	//&x,&y
//	//1.传入参数
//	//2.带回值
//	int ret = find_num(arr, &x, &y, k);
//	if (1 == ret)
//	{
//		printf("找到了\n");
//		printf("下标是：%d %d", x, y);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}

//int find_num(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;//找到了
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//
//	int x = 3;//行
//	int y = 3;//列
//
//	int ret=find_num(arr, &x, &y, k);
//	if (1 == ret)
//	{
//		printf("找到了\n");
//		printf("下标为: %d %d\n",x,y);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//
//	return 0;
//}


//三部翻转法
//实现一个函数，可以左旋字符串中的k个字符
//#include<string.h>
//#include<stdio.h>
////a b c d e f    
////b a c d e f 1.左边逆序
////b a f e d c 2.右边逆序
////c d e f b a 3.整体逆序
//#include<assert.h>
//void reverse(char* start, char* end)
//{
//	assert(start);
//	assert(end);
//	while (start < end)
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = tmp;
//		start++;
//		end--;
//	}
//}

//void string_left_rotate(char* pa, int k)
//{
//	assert(pa);
//	int len = strlen(pa);
//	reverse(pa, pa + k - 1);//1.左边逆序
//	reverse(pa + k, pa + len - 1);//2.右边逆序
//	reverse(pa, pa + len - 1);//3.整体逆序
//}

//int main()
//{
//	char arr[] = "abcdef";
//	int k = 2;
//
//	string_left_rotate(arr, k);
//
//	printf("%s\n", arr);
//	return 0;
//}

//暴力穷举法
//左旋一次，就判断是否相等
#include<string.h>
//int is_string_rotate(char* str1, char* str2)
//{
//	int len = strlen(str1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = *str1;//1.
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			str1[j] = str1[j + 1];//2.
//		}
//		str1[len - 1] = tmp;//3.
//
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}


int is_string_rotate(char* str1, char* str2)
{
	//判断两个字符串长度是否相等
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	//1.给str1追加一个str1
	int len = strlen(str1);
	strncat(str1, str1, len);
	//2.判断str2是否为str1的子串
	char* ret=strstr(str1, str2);//strstr的返回值是指针

	return ret != NULL;//(逻辑判断的值只1（当前编译器）和0)
}
int main()
{
	char arr1[20] = "ABCDEF";
	char arr2[] = "CDEFAB";

	int ret = is_string_rotate(arr1,arr2);

	if (1 == ret)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}

	return 0;
}

//int main()
//{
//	char arr[20] = "hello ";
//	//strcat(arr, "bit");//但是不可以，自己追加自己
//	strncat(arr, arr, 5);
//	printf("%s\n", arr);
//	return 0;
//}

