#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����һ����������Ҫ��õ��ø������ĸ�λ��
//int main()
//{
//	/*
//	float n = 0.0;
//	scanf("%f", &n);
//
//	printf("%d\n", ((int)n) % 10);*///%10�õ���λ��
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d\n", n % 10);
//
//	return 0;
//}

//һ��Լ��1.356*10^7�룬Ҫ�������������䣬��ʾ������϶�����
int main()
{
	int age = 0;
	scanf("%d", &age);

	long long second = age * (1.356e7);//��ѧ������
	printf("%lld\n", second);
	return 0;
}

//int main()
//{
//	printf("%d\n", sizeof(long int));//4���ֽ�
//	return 0;
//}
