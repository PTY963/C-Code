#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//默认对齐数是8
//修改默认对齐数为2
//#pragma pack(2)
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//修改回来
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//8
//	return 0;
//}

#include<stddef.h>
struct S2
{
	char c1;
	int i;
	char c2;
};
//int main()
//{
//	printf("%d\n", offsetof(struct S2, c1));//0
//	printf("%d\n", offsetof(struct S2, i));//4
//	printf("%d\n", offsetof(struct S2, c2));//8
//	return 0;
//}

//位段
struct S3
{
	int a : 2;//a成员占2个bit位
	int b : 5;//b成员占5个bit位
	int c : 10;//c成员占10个bit位
	int d : 30;//d成员占30个bit位
};
//int main()
//{
//	printf("%d\n", sizeof(struct S3));//8
//	return 0;
//}


struct S6
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}


struct S
{
	int a : 2;//成员a占2个bit位
	int b : 4;//成员b占4个bit位
	int c : 10;//成员c占10个bit位
	int d : 30;//成员d占30个bit位
};
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}


struct S2
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
int main()
{
	struct S2 s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
	return 0;
}


//struct S
//{
//	int a : 2;
//	int b : 4;
//	int c : 10;
//	int d : 30;
//};
