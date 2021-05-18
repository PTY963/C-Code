#define _CRT_SECURE_NO_WARNINGS 1

//求两个数的最小公倍数
//a b 最小公倍数一定不会小于a b中的最大值
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int min = a > b ? a : b;//min中存储的是 a b 中较大的那个

	while (1)
	{
		if ((min % a) == 0 && (min % b) == 0)
		{
			printf("%d\n", min);
			break;
		}
		min++;
	}
	return 0;
}

