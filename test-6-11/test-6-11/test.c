#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//结构体内存对齐
struct S3
{
	char c1;
	char c2;
	int i;
};

struct S4
{
	double d;
	char c;
	int i;
};
struct S5
{
	char c1;
	struct S4 s4;
	double d;
};
int main()
{
	//struct S3 s = { 0 };//把c1初始化为0 其他默认为0
	//struct S4 s1 = { 0 };
	struct S5 s2 = { 0 };
	//printf("%d\n", sizeof(s));//8
	//printf("%d\n", sizeof(s1));//16
	printf("%d\n", sizeof(s2));//32
	return 0;
}