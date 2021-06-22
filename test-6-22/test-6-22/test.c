#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	float price = 0.0;
//	int month = 0;
//	int day = 0;
//	int flag = 0;
//	scanf("%f %d %d %d", &price, &month, &day, &flag);
//
//	if ((11 == month) && (11 == day))
//	{
//		price *= 0.7;
//		if (1 == flag)
//			price -= 50;
//	}
//	else if ((12 == month) && (12 == day))
//	{
//		price *= 0.8;
//		if (1 == flag)
//			price -= 50;
//	}
//
//	if (price <= 0.0)
//		price=0.00;
//	printf("%.2f", price);
//
//	return 0;
//}


//int main()
//{
//	float price = 0.0;
//	int month = 0;
//	int day = 0;
//	int flag = 0;
//	float cut = 1.0;
//	scanf("%f %d %d %d", &price, &month, &day, &flag);
//
//	if ((11 == month) && (11 == day))
//	{
//		cut = 0.7;
//	}
//	else if ((12 == month) && (12 == day))
//	{
//		cut = 0.8;
//	}
//
//	price = price * cut - flag * 50;
//
//	if (price <= 0.0)
//		price = 0.00;
//	printf("%.2f", price);
//
//	return 0;
//}

//输入描述：第一行输入一个整数n n(>=5)表示n个学生，第二行输入n个学生的成绩 n的范围
//是（0-100），用空格分隔
//输出描述：输出成绩最高的前五个，用空格隔开

int main()
{
	//输入
	int n = 0;
	scanf("%d", &n);
	int arr[40] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	//冒泡排序-降序
	//趟数
	for (i = 0; i < n - 1; i++)//n个数字只需排序n-1趟
	{
		//一趟排序
		int j = 0;
		for (j = 0; j <n-1-i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	//输出
	for (i = 0; i < n-1; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}


