#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
//模拟实现strlen
//1.计数器版本
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf(">\n");//> strlen的返回值是size_t类型
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}


//模拟实现strcat（字符串追加）
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.找到dest空间的'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.把src的字符串追加到dest中，包含src的'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret;//返回dest的地址
//}
//int main()
//{
//	char arr[20] = "hello \0#########";////hello world\0###
//	my_strcat(arr, "world");
//	//printf("%s\n", arr);//hello world
//	printf("%s\n", my_strcat(arr, "world"));//链式访问
//	return 0;
//}

int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);

	while (*s1 == *s2)
	{
		if ('\0'==s1)
		{
			return 0;
		}
		s1++;
		s2++;
	}

	return *s1 - *s2;
	/*if (*s1 > *s2)
	{
		return 1;
	}
	else
	{
		return -1;
	}*/

}

int main()
{
	char* p = "abc";
	char* q = "abqqq";

	int ret = my_strcmp(p, q);
	if (ret > 0)
	{
		printf("p>q\n");
	}
	else if (ret < 0)
	{
		printf("p<q\n");
	}
	else
	{
		printf("p==q\n");
	}

	return 0;
}