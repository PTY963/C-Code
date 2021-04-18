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
//	if (num > 9)//说明是一位以上的数字,递归跳出的条件
//	{
//		print(num /10);//不断缩小递归范围的条件
//	}
//	printf("%u ", num % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//递归-函数自己调用自己
//	print(num);//print函数可以打印参数部分数字的每一位
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

//模拟实现strlen函数
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
//	printf("%d\n", my_strlen(arr));//数组名表示首元素地址
//	return 0;
//}
//写一个函数判断year是否是闰年
//是闰年返回1
//不是闰年返回0
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

//实现一个函数来交换两个整数的内容
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
//	printf("交换前：a=%d,b=%d\n", a, b);
//
//	Swap(&a, &b);//函数调用，传址调用（要改变a和b的值）
//	printf("交换后：a=%d,b=%d\n", a, b);
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
//	if (n > 9)//限制条件，说明n肯定是一位以上的数字
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
//	print(num);//函数的功能是剥离参数的每一位，并打印出来
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
//	printf("%d\n",my_strlen(arr));//函数调用，传址调用，数组名表示首元素地址
//	return 0;
//}
