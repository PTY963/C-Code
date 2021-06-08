#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//模拟实现strlen
//1.计数器版本
int my_strlen(const char* str)
{
	assert(str);

	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//2.递归版本
int my_strlen(const char* str)
{
	assert(str);

	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}

//3.指针-指针 （指针-指针=两指针之间的元素个数）
int my_strlen(const char* str)
{
	assert(str);

	char* start = str;
	while (*str != '\0')
	{
		str++;
	}//跳出while循环，str就找到了'\0'

	return str - start;
}

//int main()
//{
//	char* p = "abcdef";
//	int ret = my_strlen(p);
//	printf("%d\n", ret);
//
//	return 0;
//}

//模拟实现strcpy
char* my_strcpy(char* dest, const char* src)
{
	assert(dest && src);

	char* start = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return start;
}

//int main()
//{
//	char str1[] = "###############";
//	char* str2 = "hello world";
//
//	my_strcpy(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}

//模拟实现strcmp
int my_strcmp(const char* str1, const char* str2)
{
	
	assert(str1 && str2);

	while (*str1 == *str2)//字符串等于的情况
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}

	//大于 小于的情况
	return *str1 - *str2;
}
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "abq";
//
//	int ret = my_strcmp(str1, str2);
//	if (ret > 0)
//	{
//		printf("str1>str2\n");
//	}
//	else if (ret < 0)
//	{
//		printf("str1<str2\n");
//	}
//	else
//	{
//		printf("str1=str2\n");
//	}
//
//	return 0;
//}


//模拟实现strcat 字符串追加
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);

	char* start = dest;
	while (*dest != '\0')//1.找到'\0'
	{
		dest++;
	}
	//2.追加
	while (*dest++ = *src++)
	{
		;
	}

	return start;
}
//int main()
//{
//	char str1[20] = "hello ";
//	char* str2 = "world";
//
//	my_strcat(str1, str2);
//
//	printf("%s\n", str1);
//	return 0;
//}

//模拟实现strstr 在str1中找str2
// b b b c d e f
// b b c
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	if (*str2 == '\0')//特殊情况处理
//	{
//		return (char*)str1;
//	}
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;//回退指针
//
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while ((*s1 && *s2) && *s1 == *s2)//(*s1 && *s2)判断主串提前结束的特殊情况
//		{
//			str1++;
//			str2++;
//		}
//
//		if (*s2 == '\0')//判断找到的情况
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//
//	return NULL;
//}
//int main()
//{
//	char str1[] = "abbbcdef";
//	char* str2 = "bbc";
//
//	char* ret = my_strstr(str1, str2);
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了：%s\n", ret);
//	}
//	return 0;
//}
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);

	if (*str2 == '\0')
	{
		return(char*) str1;
	}
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cp = str1;

	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while ((*s1 && *s2) && (*s1 == *s2))
		{
			s1++;
			s2++;
		}

		if (*s2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}
	return NULL;
}
int main()
{
	char* str1 = "abbbcdef";
	char* str2 = "bbc";

	char* ret = my_strstr(str1, str2);
	if (ret == NULL)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了：%s\n", ret);
	}
	return 0;
}
