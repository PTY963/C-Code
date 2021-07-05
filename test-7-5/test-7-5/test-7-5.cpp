#define _CRT_SECURE_NO_WARNINGS 1
//ģ��ʵ��strstr ��str1���ҵ�str2��������str2��һ�γ��ֵ�λ�á�
//���û�ҵ�����NULL ���str2λ�� ����0
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);

	if (*str2 == '\0')
		return (char*)str1;//���������

	const char* s1 = NULL;//str1��ɨ��ָ��
	const char* s2 = NULL;//str2��ɨ��ָ��
	char* cp = (char*)str1;//str1�Ļ���ָ��

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


