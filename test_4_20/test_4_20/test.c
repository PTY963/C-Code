#define _CRT_SECURE_NO_WARNINGS 1
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i;
//		flag = -flag;
//	}
//
//	printf("%lf\n", sum);
//
//	return 0;
//}


//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//char* reverse_string(char* str)
//{
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//
//	reverse_string(arr);//�������ã���ַ���ã���������ʾ��Ԫ�ص�ַ
//
//	printf("%s\n", arr);
//
//	return 0;
//}


//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//double my_pow(double n, double k)
//{
//	if (k == 0)
//		return 1;
//	else
//		return n * my_pow(n,k-1);
//}
//int main()
//{
//	double n = 0;
//	double k = 0;
//	scanf("%lf%lf", &n, &k);
//
//	double ret=my_pow(n, k);//�������ã���ֵ����
//
//	printf("%lf\n", ret);
//
//	return 0;
//}


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
//int DigitSum(int n)
//{
//	if (n <= 9)
//		return n;
//	else
//		return n % 10 + DigitSum(n / 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret=DigitSum(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//void Move(int n, char A, char B, char C)
//{
//	if (n == 1)
//		printf("%c-->%c\n", A, C);
//	else
//	{
//		Move(n - 1, A, C, B);
//		printf("%c-->%c\n", A, C);
//		Move(n - 1, B, A, C);
//
//	}
//	 
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	Move(n, 'A', 'B', 'C');
//
//	return 0;
//}