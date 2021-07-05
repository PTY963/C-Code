#define _CRT_SECURE_NO_WARNINGS 1
//模拟实现strstr 在str1中找到str2，并返回str2第一次出现的位置。
//如果没找到返回NULL 如果str2位空 返回0
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);

	if (*str2 == '\0')
		return (char*)str1;//库里的做法

	const char* s1 = NULL;//str1的扫描指针
	const char* s2 = NULL;//str2的扫描指针
	char* cp = (char*)str1;//str1的回退指针

	while (*cp)
	{
		s1 = cp;
		s2 = str2;

		while (s1 && s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}

		if (*s2 == '\0')
			return cp;

		cp++;
	}

	return NULL;
}

int main()
{
	char str1[] = "abbbcdef";
	char str2[] = "bbc";
	char* ret = my_strstr(str1, str2);
	if (ret == NULL)
		printf("fail to find\n");
	else
		printf("%s\n", ret);
	return 0;
}


