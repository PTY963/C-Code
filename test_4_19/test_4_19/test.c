#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)//����
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}
//int Fun(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fun(n - 1);
//}
//int main()
//{
//	int n = 0;
//	sacnf("%d", &n);
//
//	int ret=Fun(n);//ѭ��
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//��һЩ���ܿ����õ����ķ�ʽʵ�֣�Ҳ������ѭ���ķ�ʽʵ��


//���n��쳲�������
//int count = 0;
//int Fib(int n)
//{
//	//�����3��쳲�������������ļ��㼸��
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);//Ч��̫�ͣ��ظ������ļ���
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
// 
// 
// 
// 
//int Fib(int n)
//{
//	int c = 1;
//	int a = 1;
//	int b = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//��дһ���������1-100�У���������9�ĸ���
// 9 19 29 39 49 59 69 79 89 99
//90 91 92 93 94 95 96 97 98 99

//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

//����1-1/2+1/3-1/4.....+1/100�Ľ��

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}

//��10�������е����ֵ

//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int i = 0;
//	int max = arr[0];//��һ���Ƚ���Ҫ
//
//	for (i = 1; i < 10; i++)
//	{
//		if (max > arr[i])
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
//	for (i = 1; i <= 9; i++)//��9��
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)//��ӡÿһ��
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//-����������˼
//		}
//		printf("\n");//��ӡ��һ�к���
//	}
//	return 0;
//}


//void Fun()
//{
//	{
//		int a = 10;
//	}//�������
//	printf("%d\n", a);//��ӡ����
//}


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�(���������������)
//n!=1!+2!+3!+...+n!
//3!=1*2*3

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 1;
//
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}
//int Factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n* Factorial(n - 1);//3��=2��*3 2��=1*2
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret=Factorial(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}



//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//     
//	return 0;
//}
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret=Fib(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//��дһ������ reverse_string(char* string)(�ݹ�ʵ��)
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���磺abcdef fedcba
//void reverse_string(char* string)
//{
//	
//
//
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//
//	reverse_string(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}

//�ݹ�ʵ�ֺ�ŵ������
void Move(int n, char A, char B, char C)//B�Ǹ�����
{
	if (n == 1)
		printf("%c-->%c\n", A, C);
	else
	{
		Move(n - 1, A, C, B);//C�Ǹ�����
		printf("%c-->%c\n", A, C);
		Move(n - 1, B, A, C);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);//������

	Move(n, 'A', 'B', 'C');//��A�����ϵ������ƶ���C������

	return 0;
}