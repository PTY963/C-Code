#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//for (i = 0; i <= 12; i++)
//	//{
//	//	arr[i] = 0;
//	//	printf("hehe\n");//Debug版本会死循环打印hehe
//	//}
//	printf("%p\n", &i);//00F3FE5C
//	printf("%p\n", &arr[9]);//00F3FE50
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//for (i = 0; i <= 12; i++)
//	//{
//	//	arr[i] = 0;
//	//	printf("hehe\n");//Release版本会打印13个hehe
//	//}
//	printf("%p\n", &i);//00B5FD3C
//	printf("%p\n", &arr[9]);//00B5FD64
//	return 0;
//}

//百度2015年系统工程师笔试题
//写一个程序判断当前编译器采用的是大端模式还是小端模式
//int main()
//{
//	int a = 1;//00 00 00 01
//	char* p = (char*)&a;//int*
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//int main()
//{
//	
//	int ret=check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	//10000000 00000000 00000000 10000000
//	//11111111 11111111 11111111 01111111
//	//11111111 11111111 11111111 10000000
//	//10000000
//	printf("%u\n", a);//4294967168
//	//整形提升：11111111 11111111 11111111 10000000
//	
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	int a = -20;
//	//100000000 00000000 00000000 0001 0100
//	//111111111 11111111 11111111 1110 1011
//	//111111111 11111111 11111111 1110 1100
//	unsigned int j = 10;
//	//00000000 00000000 00000000 00001010
//	printf("%d\n", a + j);//4294967286
//	//11111111 11111111 11111111 11101100 寻常算术转化 unsigned int
//	//00000000 00000000 00000000 00001010
//	//11111111 11111111 11111111 11110110  补码，打印出来的是原码
//	//11111111 11111111 11111111 11110101 
//	//10000000 00000000 00000000 00001010 (%d 表示有符号的整形)
//
//	
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)//i是无符号数，永远都大于0
//	{
//		printf("%u\n", i);//死循环
//	}
//	return 0;
//}



//#include<string.h>
//int main()
//{
//	char arr[1000];
//	int i;
//	for (i = 0; i < 1000; i++)//循环1000次
//	{
//		arr[i] = -1 - i;
//		//-1 -2 -3 ... -128 127 126 ... 3 2 1 0
//		//128+127=255 strlen遇到0停下
//	}
//	printf("%d", strlen(arr));
//	return 0;
//}

//unsigned char i = 0;//无符号char的范围是0-255
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");//死循环打印hello world
//	}
//
//	return 0;
//}

//#include<limits.h>
//int main()
//{
//	INT_MAX;
//	return 0;
//}
