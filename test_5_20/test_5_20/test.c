#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��������������С������
//����������С����������СҲ�������������нϴ���Ǹ�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int min = a > b ? a : b;//��a b�нϴ��ֵ����min ��
//	while (1)
//	{
//		if ((min % a) == 0 && (min % b) == 0)
//		{
//			printf("%d\n", min);
//			break;
//		}
//
//		min++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int i = 1;
//	while (1)
//	{
//		if ((a * i) % b == 0)//Ч�ʸ�һЩ
//		{
//			printf("%d\n", a * i);
//			break;
//		}
//
//		i++;
//	}
//
//	return 0;
//}
void ReverseString(char* left, char* right)
{
	while (left<right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;

		left++;
		right--;
	}
}
#include<string.h>
int main()
{
	char arr[100] = { 0 };
	gets(arr);

	//1.������������
	int len = strlen(arr);
	ReverseString(arr,arr+len-1);
	//2.����ÿ������
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}

		ReverseString(start, end - 1);

		if (*end == ' ')
		{
			start = ++end;
		}
		else
		{
			start = end;
		}
	}

	printf("%s\n", arr);
	return 0;
}