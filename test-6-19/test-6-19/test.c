#define _CRT_SECURE_NO_WARNINGS 1
//根据给出的三角形的3条边 a b c (0<a b c<10000),计算三角形的周长和面积
//输入：3  3  3
//输出: circumference=9.00 area=3.90
#include<stdio.h>
#include<math.h>
//double sqrt (double x);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//
//	double circumference = a + b + c;
//	double p = (a + b + c) / 2.0;
//	double area = sqrt(p * (p - a) * (p - b) * (p - c));//sqrt库函数-开平方
//
//	printf("circumference=%.2lf area=%.2lf", circumference, area);
//
//	return 0;
//}

//给定一个球体的半径，计算其体积。其中球体体积公式为：4/3*πr3,其中π=3.1415926

//int main()
//{
//	double r = 0.0;
//	scanf("%lf", &r);
//
//	double pai = 3.1415926;
//	double V = (4.0 / 3) * pai * r * r * r;
//
//	printf("%.3lf\n", V);
//
//	return 0;
//}

//变种水仙花数-Lily Number:把任意的数字，从中间拆分成两个数字，比如：1461可以拆分成
//（1和461）（14和61）（146和1），如果所有拆分后的乘积之和等于自身，则是一个Lily Number
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		//判断是否为Lily Number
//		int j = 0;
//		int sum = 0;
//		for (j = 10; j <= 10000; j *= 10)
//		{
//			sum += ((i / j) * (i % j));
//		}
//
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	//int ret = ((a % 100) + (b % 100)) % 100;
	int ret = (a + b) % 100;//保留低两位数字
	printf("%d\n", ret);
	return 0;
}