#define _CRT_SECURE_NO_WARNINGS 1

//������������С������
//a b ��С������һ������С��a b�е����ֵ
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int min = a > b ? a : b;//min�д洢���� a b �нϴ���Ǹ�

	while (1)
	{
		if ((min % a) == 0 && (min % b) == 0)
		{
			printf("%d\n", min);
			break;
		}
		min++;
	}
	return 0;
}

