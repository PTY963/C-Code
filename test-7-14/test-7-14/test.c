#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��������
//�����ṹ������
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
//	ps = &s;//վ�ڱ������ĽǶ��ǲ��еģ�����������Ϊ�����ǲ�ͬ���͵Ľṹ��
//	        //��ʵ���ϲ������̫������⣬��Ϊ���ǵĳ�Ա������һ����
//	return 0;
//}

//�ṹ��������� - ����ͬ���͵Ľṹ��ָ������Ǳ���
//����
//struct Node
//{
//	int a;
//	struct Node* next;
//};
//. ��Խṹ�����
//-> ��Խṹ��ָ��

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
