#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int score = 0;
//		scanf("%d", &score);
//		sum += score;
//	}
//	printf("%.1f\n", sum / 5.0);
//	return 0;
//}

//输入一个十六进制a和一个八进制数字b 输出a+b的十进制结果
//不管是十六进制、八进制、十进制都是数据的表达形式罢了，并不是数据的存储形式
int main()
{
	int a = 0;
	int b = 0;
	scanf("%x %o", &a, &b);
	printf("%d\n", a + b);
	return 0;
}