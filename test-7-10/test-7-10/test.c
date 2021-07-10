#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	int x, z;
//	x = z = 2;
//	//printf("%d\n", sizeof(double));//8
//	return 0;
//}



//int main()
//{
//	char arr[] = "hello\0world";
//	char dest[15] = { 0 };
//	strcpy(dest, arr);
//	printf("%s\n", dest);//hello
//	return 0;
//}

//int main()
//{
//	char str[] = "hello\0world";
//	printf("%d\n", sizeof(str));//12
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char str1[] = "hello world";
//	char str2[20] = "**************";
//	char* ret =my_strcpy(str2, str1);
//	
//	return 0;
//}

//编写函数，求第n个斐波那契数列的值(非递归)
// 1 1 2 3 5 8
// a + b = c;
// a = b;
// b = c;
int Fibonacci(int n)//4 -  1 1 2 3
{
	int a = 1;
	int b = 1;
	int c = a;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}

	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);

	int ret = Fibonacci(n);
	printf("%d\n", ret);
	return 0;
}