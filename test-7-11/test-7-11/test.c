#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// x=5 > 1 + 2 && 2 || 2 * 4 < 4 - !0

//#pragma pack(4)
struct tagTest1
{ 
	short a;//2/4   2  0-1
	char d;//1/4    1  2
	long b;//4/4    4  4-7
	long c;//4/4    4  8-11
};
struct tagTest2
{
	long b;//4   0-3
	short c;//2  4-5
	char d;//1   6
	long a;//4   8-11
};
struct tagTest3
{ 
	short c;//2   0-1
	long b;//4    4-7
	char d;//1    8
	long a;//4    12-15
};
//pragma pack()

//дһ���������� unsigned int �ͱ��� x ���ڴ��ж����� 1 �ĸ���
int quantityOfOne(unsigned int x)
{
	int count = 0;
	while (x)
	{
		count++;
		x = x & (x - 1);//�������ҵ�˳�򣬽�������λ�е�1�滻��0
	}
	return count;

}
int main()
{
	unsigned int x = 0;
	scanf("%u", &x);

	int ret = quantityOfOne(x);
	printf("%d\n", ret);
	return 0;
}

//15 0000 1111