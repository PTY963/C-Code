#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����������ʱ������������������������
//int main() 
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	//����a��b������
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	//����a��b������
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//дһ���������ز����������� 1 �ĸ�����
//int main()
//{
//	int a = 10;
//	int i = 0;
//	int count = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//
//	printf("%d\n", count);
//
//	return 0;
//}

//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
int main()
{
	int m = 22;
	int n = 33;
	int count = 0;
	int a = m ^ n;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) == 1)
		{
			count++;
		}
	}
	printf("%d\n", count);

	return 0;
}