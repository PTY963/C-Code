#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//只适用于正数 1.
//int NumberOf1(int n)//可以把参数改为unsigned int 
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//2.
//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//3.
//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//去掉1
//		count++;//动作执行几次就去掉几个1
//	}
//	return count;
//}

//int main()
//{
//	int n = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	int ret=NumberOf1(n);
//
//	printf("%d\n", ret);//0
//
//	return 0;
//}

//判断一个数是不是2^n
//一个数字如果是2^n,那么它的二进制中，只有一个1
//k&(k-1)==0,就说明是

//求两个数的二进制不同位的个数
//22 33 
//5

//int main()
//{
//	int n = 22;
//	int m = 33;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int NumberOf1(int ret)
//{
//	int count = 0;
//	while (ret)
//	{
//		ret = ret & (ret - 1);//动作执行一次，去掉一个1
//		count++;
//	}
//	return count;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//
//	int ret = m ^ n;//异或，相同为0，相异为1
//	//计算1的个数
//	NumberOf1(ret);
//	printf("%d\n", NumberOf1(ret));
//	return 0;
//}

//分别打印一个二进制序列的奇数位和偶数位

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	//分别获取n的二进制序列的奇数位和偶数位并打印
//	//000000000000000000000000000001010 - 10
//	int i = 0;
//	//打印偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//打印奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}

//不创建临时变量，交换两个整形变量的值
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;//a^b^b
//	a = a^ b;//a^a^b
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);//0 0 3 4 5
//	}
//	return 0;
//}

// 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00（小端模式）
//arr被强制转换成short类型的指针，所以p解引用一次能访问两个字节

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	//获取n的二进制的奇数位和偶数位
//	//00000000 00000000 00000000 00001010
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)//打印偶数位
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//
//	printf("\n");
//
//	for (i = 30; i >= 0; i -= 2)//打印奇数位
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}

//写一个函数返回参数二进制中 1 的个数
//int NumberOf1(int a)
//{
//	int count = 0;
//
//	while (a)
//	{
//		a = a & (a - 1);//去掉1 动作执行几次，去掉几个1
//		count++;
//	}
//
//	return count;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//10
//
//	NumberOf1(a);
//
//	printf("%d\n", NumberOf1(a));//链式访问
//	return 0;
//}

//模拟实现库函数strlen
//#include<assert.h>
//size_t my_strlen(const char* arr)
//{
//	assert(arr != NULL);
//	size_t count = 0;
//
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//
//	return count;
//}

//int main()
//{
//	char arr[] = "hello";
//
//	my_strlen(arr);
//
//	printf("%u\n", my_strlen(arr));//链式访问
//	return 0;
//}

//模拟实现库函数strcpy
//char* my_strcpy(char* dest, const char* src)//本质上不希望src的内容被改变
//{
//	char* ret = dest;
//	while (*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//	return ret;
//}

#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);

	char* ret = dest;//方便链式访问
	while (*dest++ = *src++)//\0被赋值给dest之后，表达式为假，循环结束
	{
		;
	}

	return ret;
}

int main()
{
	char arr1[] = "xxxxxxxxxx";
	char arr2[] = "hello";

	my_strcpy(arr1, arr2);

	printf("%s\n", arr1);//'\0'是字符串结束标志，所以剩下的4个x不打印

	return 0;
}