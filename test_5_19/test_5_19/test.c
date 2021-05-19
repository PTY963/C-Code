#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求两个数的最小公倍数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int min = a > b ? a : b;
//	while (1)
//	{
//		if ((min % a == 0) && (min % b == 0))
//		{
//			printf("%d\n", min);
//			break;
//		}
//		min++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (i)
//	{
//		if ((a * i) % b == 0)
//		{
//			printf("%d\n", a * i);
//			break;
//		}
//		i++;
//	}
//	
//	return 0;
//}

//int main()
//{
//	char arr[100] = { 0 };
//	scanf("%s", arr);//读取字符串的时候，遇见空格，读取结束
//	printf("%s\n", arr);
//
//	return 0;
//}

//输入 I Like BeiJing.
//输出 Beijing. Like I
//出自腾讯的一道笔试题
//#include<string.h>
//void ReverseString(char* left, char* right)
//{
//
//	while (left<right)//=的话，就不需要交换
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//	}
//
//}

//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);//输入什么字符串，就获取什么字符串
//	
//	int len = strlen(arr);
//	//三部翻转法
//	//1.逆序整个字符串
//	//.gniGieB ekiL I
//	ReverseString(arr, arr + len - 1);//字符串的第一位和最后一位
//	
//	//2.逆序每一个单词
//	//Beijing. Like I
//	char* start = arr;
//	while (*start)//等于0，就把整个数组遍历完了
//	{
//		char* end = start;//单词首地址
//		while ((*end != ' ') && (*end != '\0'))
//		{
//			end++;
//		}//循环结束，得到单词尾指针
//
//		ReverseString(start, end-1);//逆序单词
//		//逆序下一个
//		if (*end = ' ')
//		{
//			start=++end;
//		}
//		else
//		{
//			start = end;
//		}
//		       
//	}
//
//	printf("%s\n", arr);
//
//	return 0;
//}

void ReverseString(char* left, char* right)
{
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;

		left++;
		right--;
	}
}

#include<string.h>
int main()
{
	char arr[100] = { 0 };
	gets(arr);//接收字符串

	//1.首先将整个字符数逆序
	int len = strlen(arr);
	ReverseString(arr, arr + len - 1);
	
	//2.最后，逆序数组中的每个单词
	char* start = arr;//单词的首地址
	
	while (*start)
	{
		char* end = start;
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}//循环结束，得到单词的尾指针

		ReverseString(start, end- 1);

		if (*end == ' ')
		{
			start = ++end;
		}
		else
		{
			start = end;//此时 start存放的是0
		}
		
	}
	
	printf("%s\n", arr);

	return 0;
}
