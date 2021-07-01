#define _CRT_SECURE_NO_WARNINGS 1
//123
//321
#include<limits.h>
#include<stdio.h>
//¨C2147483647¨C1 INT_MIN
//2147483647    INT_MAX
int reverse(int x)
{
	int ret = 0;
	while (x)
	{
		if (ret < INT_MIN / 10 || ret > INT_MAX / 10)
		{
			return 0;
		}
		int dight =x % 10;
		ret = ret * 10 + dight;
		x = x / 10;
	}
	
	return ret;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret=reverse(n);
	printf("%d\n",ret );
	return 0;
}
