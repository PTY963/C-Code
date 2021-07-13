#define _CRT_SECURE_NO_WARNINGS 1
//0000 0000
//1110 0000
//1001 1111
//1011 1110
#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
//int main()
//{
//	//如果打开失败的话，会返回一个NULL指针
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));//返回错误码errno所对应的错误信息
//		perror("text.txt");//打印错误信息
//		return 1;
//	}
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//strerror 把错误码转换成错误信息
//perror 1.把错误码转换成错误信息 2.打印错误信息（包含了自定义信息）

//字符分类函数
//int main()
//{
//	char ch = '2';
//	//不是数字字符返回0， 是数字字符返回一个非0的数
//	int ret = isdigit(ch);
//	printf("%d\n", ret);
//	return 0;
//}

//字符转换函数
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (islower(arr[i]))
//		{
//			arr[i] = toupper(arr[i]);
//		}
//		printf("%c", arr[i]);
//
//		i++;
//	}
//	return 0;
//}

//内存操作函数
//1.memcpy - 内存拷贝
//memcpy函数， 应该拷贝内存不重叠的情况
void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;

	}
	return ret;
}
//++的优先级要高于强制类型转换 dest转换成char*类型之后 再++ 此时（char*）的
//效果已经没有了
//单目运算符的结合性是右向左
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//
//	my_memcpy(arr2, arr1, 20);
//	
//	return 0;
//}

//2. memmove可以拷贝内存重叠的情况
void* my_mommove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	if (src < dest)//数组的地址随下标增大而增大
	{
		//从前往后拷贝
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//从后往前拷贝
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr + 2, arr, 20);
//	return 0;
//}
//C标准规定 memcpy拷贝不重叠内存的情况就可以了

//3. memcmp 
//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0 };
//	float arr2[] = { 1.0,3.0 };
//	int ret = memcmp(arr1, arr2, 8);
//	//memcmp的返回值和strcmp的返回值是一样的
//	printf("%d\n", ret);
//	return 0;
//}

//4.menset - 内存设置
//void* memset(void* ptr, int value, size_t num)
//把ptr指向的前num个字节的内存空间设置成value
int main()
{
	int arr[10] = { 0 };//20byte 1
	memset(arr, 1, 20);//以字节为单位
	//00 00 00 00
	//01 01 01 01
	return 0;
}