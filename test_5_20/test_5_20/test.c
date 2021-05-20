#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求两个整数的最小公倍数
//两个数的最小公倍数，最小也是两个整数的中较大的那个
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int min = a > b ? a : b;//把a b中较大的值放入min 中
//	while (1)
//	{
//		if ((min % a) == 0 && (min % b) == 0)
//		{
//			printf("%d\n", min);
//			break;
//		}
//
//		min++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int i = 1;
//	while (1)
//	{
//		if ((a * i) % b == 0)//效率高一些
//		{
//			printf("%d\n", a * i);
//			break;
//		}
//
//		i++;
//	}
//
//	return 0;
//}
void ReverseString(char* left, char* right)
{
	while (left<right)
	{
		char tmp = 0;
		tmp = *left;
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
	gets(arr);

	//1.逆序整个数组
	int len = strlen(arr);
	ReverseString(arr,arr+len-1);
	//2.逆序每个单词
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}

		ReverseString(start, end - 1);

		if (*end == ' ')
		{
			start = ++end;
		}
		else
		{
			start = end;
		}
	}

	printf("%s\n", arr);
	return 0;
}