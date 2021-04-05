//作业：写一个函数求两个整数的较大值
//输入 10 20 输出 20

#include<stdio.h>
int MaxValue(int x, int y)
{
	int max= 0;
	if (x > y)
	{
		max = x;
	}
	else
	{
		max = y;
	}
	return max;
	
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = MaxValue(a, b);
	printf("%d\n", ret);
	return 0;
}
