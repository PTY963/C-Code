#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void Swap1(int x, int y)//�β�x,y��ʵ��a,b��һ����ʱ�������ı�x,y����ı�a,b
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰ��a=%d,b=%d ", a, b);

	Swap1(a, b);//��ֵ����
	printf("������a=%d,b=%d ", a, b);//a��b��û�н�������
	return 0;
}
void Swap2(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰ��a=%d b=%d\n", a, b);

	Swap2(&a, &b);//��ַ����
	printf("������a=%d��b=%d\n", a, b);//a��b�����ɹ�

	return 0;
}