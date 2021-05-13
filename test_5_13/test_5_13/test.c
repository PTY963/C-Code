#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//写一个函数，可以逆序一个字符串的内容
//void reverse(char* str,int len)
//{
//	int left = 0;
//	int right = len - 1;
//	char tmp = 0;
//
//	while (left<right)
//	{
//		tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}	
//}

//int main()
//{
//	char ch[] = "abcdef";//fedcba
//	int len = strlen(ch);
//	reverse(ch,len);
//
//	printf("%s\n", ch);
//
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
int main()
{
	int a = 0;
	scanf("%d", &a);
	int i = 0;
	int sum = a;
	for (i = 1; i < 3; i++)
	{
		sum += sum * 10 + 2;
	}
	
	printf("%d\n", sum);
	return 0;
}
