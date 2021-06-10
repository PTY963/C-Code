#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//打开文件失败的时候会返回NULL
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");//fopen: No such file or directory
//		return 1;
//	}
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include<ctype.h>
//int main()
//{
//	char ch = '2';
//	int ret = isdigit(ch);
//	//不是数字字符就返回0 是数字字符就返回非0的值
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	gets(arr);
//
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c", arr[i]);
//
//		i++;
//	}
//	return 0;
//}

//内存操作函数
//1.memcpy 内存拷贝
//void* memcpy(char* dest,const void* src,size_t num)
//最后一个参数以字节为单位
//#include<string.h>
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	strcpy strncpy 拷贝的是字符
//	01 00 00 00 strncpy遇到0就结束
//	memcpy(arr2, arr1, 20);
//	return 0;
//}

//模拟实现memcpy
//#include<assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//
//	void* start = dest;
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return start;
//}


//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	
//	my_memcpy(arr2, arr1, 20);
//	return 0;
//}


//模拟实现memmove
#include<assert.h>
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//
//	if (dest < src)//从前往后拷贝
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else//从后往前拷贝
//	{
//		while (num--)//20
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//		
//	}
//
//	return ret;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//1 2 3 4 5 拷贝到 3 4 5 6 7 对应的内存中
//	//my_memcpy(arr1+2, arr1, 20);//1 2 1 2 3 4 5 8 9 10
//	//memcpy(arr1 + 2, arr1, 20);
//	my_memmove(arr1 + 2, arr1, 20);
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	memcpy(arr1 + 3, arr1, 20);//1 2 3 1 2 3 4 5 9 10
//	
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0 };
//	float arr2[] = { 1.0,2.0 };
//
//	int ret = memcmp(arr1, arr2, 8);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 20);//以字节为单位设置内存，把每一个字节都设置成了1，而不是
//	                   //arr[0]-arr[9]都设置成了1
//	return 0;
//}

//结构是用来定义一个复杂对象的
struct Book
{
	char name[20];
	char id[20];
	int price;
}b4,b5,b6;//全局变量
//int main()
//{
//	struct Book b1;//局部
//	struct Book b2;
//	struct Book b3;
//	return 0;
//}

//特殊的声明 匿名结构体声明
struct
{
	char c;
	int a;
	double d;
}s;
struct
{
	char c;
	int a;
	double d;
}*ps;

int main()
{
	ps = &s;//警告 编译器会把上面两个声明当成两个完全不同的类型。所以是非法的
	return 0;
}