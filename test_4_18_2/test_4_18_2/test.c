#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//void print(unsigned int num)
//{
//	if (num > 9)//˵����һλ���ϵ�����,�ݹ�����������
//	{
//		print(num /10);//������С�ݹ鷶Χ������
//	}
//	printf("%u ", num % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//�ݹ�-�����Լ������Լ�
//	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ
//	return 0;
//}



//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}

//ģ��ʵ��strlen����
//int my_strlen(char* pa)
//{
//	int count = 0;
//	while (*pa != '\0')
//	{
//		count++;
//		pa++;
//	}
//	return count;
//}

//int my_strlen(char* pa)
//{
//	if (*pa != '\0')
//		return 1 + my_strlen(pa + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello";
//	printf("%d\n", my_strlen(arr));//��������ʾ��Ԫ�ص�ַ
//	return 0;
//}
//дһ�������ж�year�Ƿ�������
//�����귵��1
//�������귵��0
//int is_leap_year(int y)
//{
//	return ((0 == y % 4) && (0 != y % 100) || (0 == y % 400));
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}

//ʵ��һ��������������������������
//void Swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d,b=%d\n", a, b);
//
//	Swap(&a, &b);//�������ã���ַ���ã�Ҫ�ı�a��b��ֵ��
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//}
//void Mul_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	
//
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//
//	Mul_table(m);
//
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)//����������˵��n�϶���һλ���ϵ�����
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	print(num);//�����Ĺ����ǰ��������ÿһλ������ӡ����
//
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
//int my_strlen(char* str)
//{
//	if(*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "zhang";
//	printf("%d\n",my_strlen(arr));//�������ã���ַ���ã���������ʾ��Ԫ�ص�ַ
//	return 0;
//}
