#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//给定秒数second(0<second<100000000),把秒数转化成小时，分钟，秒数
//int main()
//{
//	int second = 0;
//	scanf("%d", &second);
//
//	int hour = second / 60 / 60;
//	int minute = second / 60 % 60;
//	second = second % 60;
//
//	printf("%d %d %d\n", hour, minute, second);
//	return 0;
//}

//int main()
//{
//	float sroce1 = 0;
//	float sroce2 = 0;
//	float sroce3 = 0;
//	scanf("%f %f %f", &sroce1, &sroce2, &sroce3);
//
//	float sum = sroce1 + sroce2 + sroce3;
//	float avg = sum / 3;
//
//	printf("%.2f %.2f\n", sum, avg);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	float sum = 0;
//	for (i = 0; i < 3; i++)
//	{
//		float s = 0;
//		scanf("%f", &s);
//		sum += s;
//	}
//	printf("%.2f %.2f\n", sum, sum / 3);
//
//	return 0;
//}

int main()
{
	int h = 0;
	int n = 0;
	int m = 0;
	while (scanf("%d %d %d", &n, &h, &m) != EOF)//EOF - end of file
	{
		if (m / h)
		{
			printf("%d\n", n - m / h - 1);
		}
		else
		{
			printf("%d\n", m / h);
		}
	}
	return 0;
}