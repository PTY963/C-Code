#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//Ĭ�϶�������8
//�޸�Ĭ�϶�����Ϊ2
//#pragma pack(2)
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//�޸Ļ���
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

//λ��
struct S3
{
	int a : 2;//a��Առ2��bitλ
	int b : 5;//b��Առ5��bitλ
	int c : 10;//c��Առ10��bitλ
	int d : 30;//d��Առ30��bitλ
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
	int a : 2;//��Աaռ2��bitλ
	int b : 4;//��Աbռ4��bitλ
	int c : 10;//��Աcռ10��bitλ
	int d : 30;//��Աdռ30��bitλ
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
