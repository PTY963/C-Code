#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<assert.h>
//ʵ��һ�����������������ַ����е�k���ַ�
void left_reverse_string(char* ps, int k)
{
	assert(ps);
	int i = 0;
	int len = strlen(ps);
	for (i = 0; i < k; i++)//���򼸸��ַ�
	{
		//����һ���ַ�
		char tmp = *ps;
		int j = 0;
		for (j = 0; j < len-1; j++)
		{
			ps[j] = ps[j + 1];
		}
		ps[len - 1] = tmp;
	}
}
int main()
{
	char str[] = "abcdef";
	int k = 0;
	scanf("%d", &k);

	left_reverse_string(str, k);

	printf("%s\n", str);
	return 0;
}
