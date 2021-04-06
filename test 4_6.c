#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//void Func(char arr[100])
//{
//	printf("%d\n", sizeof(arr));//数组作为函数的参数传参时，自动退化为同类型的指针
//}
//int main()
//{
//	char arr[100] = { 0 };
//	Func(arr);
//	return 0;
//}
//“指向指针的指针”
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(sizeof(char) * num);
//
//}
//int main()
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf("%s\n", str);
//	free(str);
//	str = NULL;
//	return 0;
//}

//函数返回值来传递动态内存
char* GetMemory(int num)
{
	char* p = (char*)malloc(sizeof(char) * num);
	return p;
}
int main()
{
	char* str = NULL;
	str = GetMemory(100);
	strcpy(str, "hello");
	printf("%s\n", str);
	free(str);
	str = NULL;
	return 0;
}
