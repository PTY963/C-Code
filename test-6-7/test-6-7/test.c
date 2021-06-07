#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
//模拟实现strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;//回退指针
//
//	if (*str2 == '\0')//特殊情况处理
//	{
//		return (char*)str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//
//		while ( *s1 && *s2 && (*s1 == *s2))//*s1是判断主字符串是否提前停止
//		{
//			s1++;
//			s2++;
//		}
//
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//
//	char* ret=my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了：%s\n", ret);
//	}
//	
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char* pa = "@.";
//	char tmp[20] = { 0 };
//	strcpy(tmp, arr);
//
//	char* ret = NULL;
//	for (ret = strtok(tmp, pa); ret != NULL; ret = strtok(NULL, pa))
//	{
//		printf("%s\n", ret);
//	}
//	/*ret=strtok(tmp, pa);
//	printf("%s\n", ret);
//
//	ret=strtok(NULL, pa);
//	printf("%s\n", ret);
//
//	ret=strtok(NULL, pa);
//	printf("%s\n", ret);
//	return 0;*/
//}


//int main()
//{
//	char str[30] = "zpw@bitedu.tech";
//	char* p = "@.";
//	char tmp[30] = { 0 };
//	strcpy(tmp, str);
//
//	char* ret = NULL;
//	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//在使用库函数的时候
//调用库函数失败的时候，都会设置一个错误码
//int errno 存放在errno中
//errno是C语言中一个全局的错误码

//int main()
//{
//	printf("%s\n", strerror(0));//返回错误码所对应错误信息的地址
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(5));
//	return 0;
//}

#include<errno.h>
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//...
	fclose(pf);
	pf = NULL;

	return 0;
}