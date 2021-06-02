#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	short s = 5;
//	int a = 3;
//	printf("%d\n", sizeof(s = a + 6));//2
//	printf("%d\n", s);//5 sizeof内部的表达式是不计算的
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&arr + 1);
//	printf("%d %d\n", *(arr + 1), *(ptr - 1));
//	return 0;
//}

//告知结构体的大小是20个字节
//struct Test
//{
//	int num;
//	char* pcname;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
//假设p的值为0x100000 如下表达式的值分别为多少？

//int main()
//{
//	printf("%p\n", p + 0x1);//0x1是16进制的1，所以p+0x1等价与p+1 p是结构体类型的指针变量，+1
//	//跳过一个结构体类型的大小20字节 0x100000+20=0x100014
//	printf("%p\n",(unsigned long) p + 0x1);//0x100001 p被强制类型转换成unsigned long 
//	//此时p是一个整型 整型变量+1 就是+1 0x100000+0x1==0x100001
//	printf("%p\n",(unsigned int*) p + 0x1);
//	//p被强制类型转换成unsigned int* ，一个整型指针+1，跳过一个整型的大小4个字节0x100000+4=0x100004
//	return 0;
//}


//int main()
//{
//	int arr[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&arr + 1);
//	int* ptr2 = (int)((int)arr + 1);
//
//	printf("%#x %#x\n", ptr1[-1], *ptr2);//0x00000004 0x00000002
//	//#会打印出0x
//	return 0;
//}

// 小端字节序存储(低位存储在低地址处，高位存储在高地址处)
//低地址   -------------------------  高地址
//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//(&arr+1)取的是04 00 00 00 后面的地址 ptr[-1]==arr[3] 以16进制形式打印出来就是0x00000004

//int main()
//{
//	int arr[5][5];
//	int(*p)[4];
//	p = arr[0];
//	printf("%p  &d\n", &p[4][2] - &arr[4][2], &p[4][2] - &arr[4][2]);//指针-指针=元素个数
//	return 0;
//}

//阿里笔试题
int main()
{
	char* a[] = { "work","at","alibaba" };
	char** pa = a;
	pa++;
	printf("%s\n", *pa);//at
	return 0;
}

