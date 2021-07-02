#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false
//回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
//例如，121 是回文，而 123 不是。
#include<limits.h>
int  isPalindrome(int x)
{
	int dight = 0;
	int start = x;

	while (x>0)
	{
		if (dight < INT_MIN / 10 || dight>INT_MAX / 10)//防止溢出
		{
			return 0;
		}
	
		dight = dight * 10 + x % 10;
		x = x / 10;
	}

	if (start == dight)
		return 1;
	else
		return 0;
	

}
int main()
{
	int num = 0;
	scanf("%d", &num);

	int ret = isPalindrome(num);
	if (1 == ret)
		printf("Ture\n");
	else
		printf("False\n");

	
	return 0;
}