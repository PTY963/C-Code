#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//模拟实现strcpy函数
//把src指向的内容拷贝到dest指向的内容
//从本质上，是希望dest指向的内容被改变,src指向的内容不应该改变
//void  my_strcpy(char* dest,const char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//#include<assert.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(src != NULL);//断言，是一个宏
//	assert(dest != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//return dest;//??? 不可以，因为dest在++的过程中已经被改变
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//
//	strcpy(arr1, arr2);//1.目标空间起始地址 2.源空间起始地址
//	//printf("%s\n", arr1);//不打印后面的x是因为字符串的结束标志是'\0'
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
//
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	//num = 20;//error
//	/*int* p = &num;
//	*p = 20;*///num的值被改变
//	const int* p = &num;//const放在*的左边，表示指针p指向的内容不能被改变
//	//*p = 20;//error
//
//	return 0;
//}

//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	//int const * p = &num1;//*p不可以改变，但是p可以改变
//	//*p = 20;//err
//	//p = &num2;
//	int* const p = &num1;//不可以改变，但是*p可以改变
//	*p = 100;
//	//p = &num2;//err
//
//	return 0;
//}
//#include<assert.h>
//本质上希望返回字符串的长度，是长度就不可能是负数
//健壮性
//鲁棒性
size_t my_strlen(const char* arr)//本质上不希望arr指向的内容被改变
{
	//assert(arr != NULL);
	assert(arr);//NULL就是0，如果是空，为假
	size_t count = 0;
	while (*arr++ != '\0')
	{
		count++;
		
	}
	return count;
}
int main()
{
	char arr[] = "hello";
	my_strlen(arr);
	printf("%d\n", my_strlen(arr));

	return 0;
}