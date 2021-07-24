#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//源文件的文件名包括路径
//	printf("%s\n", __FILE__);//C:\Users\86199\source\repos\test-7-24\test-7-24\test.c
//	printf("%d\n", __LINE__);//当前所在行号 7
//	printf("%s\n", __DATE__);//当前日期 Jul 24 2021
//	printf("%s\n", __TIME__);//当前时间 10:08 : 17
//	printf("%s\n", __FUNCTION__);//当前所在函数的函数名 ,main
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("log.txt", "a+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "%s %d %s %s\n", __FILE__, __LINE__, __DATE__, __TIME__);
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#define 定义标识符
//#define M 1000;
//
//int main()
//{
//	int a = 10;
//	int b = 0;
//	if (a > 10)
//		a = M;//a = 1000;
//	          //;
//	else
//		a = b;
//	return 0;
//}


//#define定义宏
//括号很重要

//#define SQUARE(X) X*X
//#define SQUARE(X) ((X)*(X))
//int main()
//{
//	//printf("%d\n", SQUARE(3));//printf("%s\n", 3*3);
//	printf("%d\n", SQUARE(3 + 1));//16
//	return 0;
//}

//#的作用 把宏的参数插入到字符串中
//void print(int x)//函数无法帮我们完成
//{
//	printf("the value of a is %d\n", x);
//}

//#define PRINT(X, FORMAT) printf("the value of "#X" is "FORMAT"\n", X);
////#define PRINT(X) printf("the value of ""X"" is %d\n", X);
//int main()
//{
//	int a = 10;
//	PRINT(a,  "%d");
//	//printf("the value of" "X" "is %d\n", X);	
//	//the value of a is 10
//	int b = 20;
//	PRINT(b, "%d");
//	//the value of b is 20
//	int c = 30;
//	PRINT(c, "%d");
//	//the value of c is 30
//	float f = 5.5f;
//	PRINT(f, "%f");
//	//printf("the value of "f" is ""%f""\n", X);
//	
//	return 0;
//}

//## 把两个符号合成一个符号
//#define CAT(X, Y, I) X##Y##I
//int main()
//{
//	int class101102 = 100;
//	printf("%d\n", CAT(class, 101, 102));//100
//	return 0;
//}

//带有副作用的宏的参数
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 5;
//	int b = 8;
//	int m = MAX(a++, b++);
//	//((a++)>(b++)?(a++):(b++))
//	//((5)>(8)?(5):(8))
//	printf("m = %d\n", m);//9 会影响到宏的体内
//	return 0;
//}

//宏和函数的比较
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int m = MAX(a, b);
//
//	m = max(a, b);
//	return 0;
//}

//宏的参数可以是类型
//#define MALLOC(num, type) malloc(num*sizeof(type))
//int main()
//{
//	malloc(10 * sizeof(int));
//	//malloc(10, int);
//	MALLOC(10, int);
//	malloc(10 * sizeof(int));
//
//	return 0;
//}

//内联函数 inline 结合了宏和函数的优点 
//命名约定 宏的名字全部大写 函数的名字不要全部大写


//#undef
//#define MAX 100
//int main()
//{
//	int a = MAX;
//#undef MAX
//	//printf("%d\n", a);
//	printf("%d\n", MAX);
//	return 0;
//}

//条件编译
//#define PRINT
//int main()
//{
//#ifdef PRINT
//	printf("hehe\n");
//#endif
//	printf("haha\n");
//	return 0;
//}

//#if 常量表达式
//#endif
//int main()
//{
//#if 0
//	printf("hehe\n");
//#endif
//	return 0;
//}

//#if #endif 是预处理指令 在预编译的时候就会删除
#if 0
#define PRINT 1
int main()
{

#if PRINT
	printf("zhangsijia\n");
#endif
	return 0;
}
#endif

//int main()
//{
//	printf("hello world\n");
//	return 0;
//}

//如果第一个条件为真，就算第二个条件也为真，也只会输出第一个
//int main()
//{
//#if 1==2
//	printf("hehe\n");
//#elif 1==3
//	printf("haha\n");
//#else
//	printf("heihei\n");
//#endif
//	return 0;
//}

//判断是否定义
//#define TEST 1
//int main()
//{
//	//如果定义了TEST ，下面的代码编译
//#ifdef TEST
//	printf("hello world\n");
//#endif 
//
//	//如果没有定义HEHE，下面的代码编译
//#ifndef HEHE
//	printf("hehe\n");
//#endif 
//
//	return 0;
//}

//<> 和 ""包含头文件的本质区别是：查找策略的不同
//"" 1.在自己代码所在的目录下查找 2.如果第1步查找失败，则在库函数的头文件目录下查找
//<> 直接去库函数目录下查找
//所以直接写 #include "stdio.h" 也没关系，总会找到的
//VS2019 - C:\Program Files (x86)\Windows Kits\10\Include\10.0.19041.0\ucrt

//防止头文件被多次包含
//1.#pragma once 
//
// 2.#ifndef __TEST_H_
//   #define __TEST_H_
//   //头文件的内容
//   #endif 


