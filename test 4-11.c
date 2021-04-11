#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();//从流中获取或者从stdin中获取，一个字符
//	//putchar(ch);//打印的是字符
//	printf("%d\n", ch);//打印的是ASCII码值
//	
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	
//	for (year = 1000; year<= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)))
//		{
//			printf("%d ", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	
//	return 0;
//}
//能被4整除但不能被100整除的是闰年，能被400整除的是闰年

//打印100到200之间的素数

//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)//如果等于0，说明除了1和本身有其他因子
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//给定两个数求最大公约数 20 40

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	if (a < b)//保证a是大的，b是小的
//	{
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//
//	while ((a != 0) && (b != 0))
//	{
//		
//	}
//	
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar) != EOF)
//	{
//		if ((ch < '0') || (ch > 9))
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)//打印1-4 ，break在for循环中是终止整个循环的
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//在for循环里省略带来的锅

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)//j在第一次打印完3个呵呵之后，j的值就是3了，进不去循环
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//一道笔试题：循环进入了几次
//int main()
//{
//	int i = 0;
//	int k = 0;
//
//	for (i = 0, k = 0; k = 0; i++, k++)//循环一次都没进，判断部分为假
//	{
//		k++;
//	}
//	return 0;
//}

//计算n的阶乘

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//计算1!+2!+3!+...+10!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 10; n++)
//	{
//		 ret = 1;
//		 for (i = 1; i < n; i++)
//	       {   
//			   //计算阶乘
//		       ret *= i;
//	       }
//		 sum += ret;
//	}
//	printf("%d\n", sum);
//	
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;//ret存放的是阶乘
//		sum = sum + ret;
//	}
//	return 0;
//}

//在一组有序数组中查找某一个数字（折半查找）
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//mid是要变化的，需要放在循环里
//		if (arr[mid] > k)//值和值比较  错误：下标和值比较
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("查找成功,下标为：%d\n", mid);
//			break;//查找成功，跳出循环
//		}
//		
//	
//
//	}
//	if (left > right)
//	{
//		printf("查找失败\n");
//	}
//	return 0;
//	
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)//1!+2!+31
//	{
//		ret = ret * n;//阶乘
//		sum = sum + ret;//相加
//	}
//
//	return 0;
//}

//演示多个字符从两端移动，向中间汇聚
//"welcome to bit!!!!!"
//"###################"

//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);//单位是毫秒，睡眠
//		system("cls");//清空屏幕
//
//		left++;
//		right--;
//
//	}
//
//	printf("%s\n", arr2);
//
//	return 0;
//}