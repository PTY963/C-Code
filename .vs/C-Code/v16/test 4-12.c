#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20);
//		{
//			break;
//		}
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid - 1;
//		}
//		else
//		{
//			printf("查找成功，下标为：%d\n", mid);
//			break;//找到了，跳出循环
//		}
//	}
//
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码： ");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;//登录成功，跳出循环
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//			
//	}
//	if (i == 3)
//	{
//		printf("三次登录均错误，退出程序\n");
//	}
//	return 0;
//}
//#include<stdlib.h>
//
//void meun(void)
//{
//	printf("***********************\n");
//	printf("****** 1. PIAY   ******\n");
//	printf("****** 0. EXIT   ******\n");
//	printf("***********************\n");
//}

//void game()
//{
//	//猜数字游戏的实现
//	//1.生成随机数
//	//rand返回一个0-32767之间的数字，但不够随机
//	
//	int ret=rand()%100+1;//%100的余数是0-99
//	printf("%d\n", ret);
//	//2.猜数字
//	int guess = 0;

//	while (1)
//	{
//
//		printf("请猜数字: \n");
//		scanf("%d", &guess);
//
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;//猜对了，跳出猜数字while循环
//		}
//	}
//}

//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//起点生成一次就够了，不然不够随机
//
//	do
//	{
//		meun();
//		printf("请输入选项： \n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新输入： \n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//暴力移位法
//#include<string.h>
//void LeftShiftOne(char* ch, int len)//左旋一位字符
//{
//	int tmp = ch[0];//保存第一个字符
//	int i = 0;
//	
//	for (i = 1; i < len; i++)
//	{
//		ch[i - 1] = ch[i];
//	}
//
//	ch[len - 1] = tmp;
//
//}

//void leftshiftmore(char* ch, int len, int m)//左旋多位字符
//{
//	while (m--)
//	{
//		LeftShiftOne(ch, len);
//	}
//}


//int main()
//{
//	char ch[] = "abcdef";
//	int len = strlen(ch);
//
//	leftshiftmore(ch, len,2);
//	printf("%s\n", ch);
//	return 0;
//}

