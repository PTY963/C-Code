#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//特殊声明
//匿名结构体类型
//struct
//{
//	int i;
//	char c;
//	double d;
//}s;
//
//struct
//{
//	int i;
//	char c;
//	double d;
//}* ps;

//int main()
//{
//	ps = &s;//站在编译器的角度是不行的，编译器会认为它们是不同类型的结构体
//	        //但实际上不会出现太大的问题，因为它们的成员变量是一样的
//	return 0;
//}

//结构体的自引用 - 包含同类型的结构体指针而不是变量
//链表
//struct Node
//{
//	int a;
//	struct Node* next;
//};
//. 针对结构体变量
//-> 针对结构体指针

struct S1
{
	int i;//4 0-3
	char c;//1 4
	double d;//8 8-15   0-15
};//16byte

struct S2
{
	char c;//1 0
	struct S1 s;//8 8-23
	int i;//4 24-27   0-27
};

int main()
{
	struct S2 s = { 0 };
	printf("%d\n", sizeof(s));//32
	return 0;
}
