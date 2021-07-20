#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//模拟实现strncat 字符串追加
char* my_strncat(char* dest, const char* src, size_t num)
{
	assert(dest && src);

	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}

	while (num--)//5 4 3 2 1 0
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return ret;

}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world#######";
//	my_strncat(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//模拟实现strncpy
char* my_strncpy(char* dest, const char* src, size_t num)
{
	assert(dest && src);
	char* ret = dest;

	while (num--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return ret;
}
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "hello";
//	my_strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}







