#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//给定一个浮点数，要求得到该浮点数的个位数
//int main()
//{
//	/*
//	float n = 0.0;
//	scanf("%f", &n);
//
//	printf("%d\n", ((int)n) % 10);*///%10得到个位数
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d\n", n % 10);
//
//	return 0;
//}

//一年约有1.356*10^7秒，要求输入您的年龄，显示该年龄合多少秒
int main()
{
	int age = 0;
	scanf("%d", &age);

	long long second = age * (1.356e7);//科学计数法
	printf("%lld\n", second);
	return 0;
}

//int main()
//{
//	printf("%d\n", sizeof(long int));//4个字节
//	return 0;
//}
