#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d ", a, b, c);
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 4,12,35,3,6,7,11,8,-1,23 };
//	int i = 0;
//	int max = arr[0];
//
//	for (i = 1; i < 9; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)//��
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)//��
//		{
//			printf("%d*%d=%d ",j,i,i*j);
//		}
//		printf("\n");
//
//	}
//	return 0;
//}

//дһ���������ж�i�Ƿ�Ϊ���� i�ķ�Χ��100-200
int Prime(int x)
{
	int flag = 1;//����x������
	int j = 0;

	for (j = 2; j < sqrt(x); j++)
	{
		if (x% j == 0)
		{
			flag = 0;
			break;
		}
	}
	if (1 == flag)
	{
		return x;
	}
}

void MorePrime(void)
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		printf("%d ",Prime(i));
	}
}
int main()
{
	MorePrime();
	return 0;
}
//�����ϵ�ֵҲ�����ˣ����������� ����������