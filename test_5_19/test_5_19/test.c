#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//������������С������

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int min = a > b ? a : b;
//	while (1)
//	{
//		if ((min % a == 0) && (min % b == 0))
//		{
//			printf("%d\n", min);
//			break;
//		}
//		min++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (i)
//	{
//		if ((a * i) % b == 0)
//		{
//			printf("%d\n", a * i);
//			break;
//		}
//		i++;
//	}
//	
//	return 0;
//}

//int main()
//{
//	char arr[100] = { 0 };
//	scanf("%s", arr);//��ȡ�ַ�����ʱ�������ո񣬶�ȡ����
//	printf("%s\n", arr);
//
//	return 0;
//}

//���� I Like BeiJing.
//��� Beijing. Like I
//������Ѷ��һ��������
//#include<string.h>
//void ReverseString(char* left, char* right)
//{
//
//	while (left<right)//=�Ļ����Ͳ���Ҫ����
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//	}
//
//}

//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);//����ʲô�ַ������ͻ�ȡʲô�ַ���
//	
//	int len = strlen(arr);
//	//������ת��
//	//1.���������ַ���
//	//.gniGieB ekiL I
//	ReverseString(arr, arr + len - 1);//�ַ����ĵ�һλ�����һλ
//	
//	//2.����ÿһ������
//	//Beijing. Like I
//	char* start = arr;
//	while (*start)//����0���Ͱ����������������
//	{
//		char* end = start;//�����׵�ַ
//		while ((*end != ' ') && (*end != '\0'))
//		{
//			end++;
//		}//ѭ���������õ�����βָ��
//
//		ReverseString(start, end-1);//���򵥴�
//		//������һ��
//		if (*end = ' ')
//		{
//			start=++end;
//		}
//		else
//		{
//			start = end;
//		}
//		       
//	}
//
//	printf("%s\n", arr);
//
//	return 0;
//}

void ReverseString(char* left, char* right)
{
	while (left<right)
	{
		char tmp = *left;
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
	gets(arr);//�����ַ���

	//1.���Ƚ������ַ�������
	int len = strlen(arr);
	ReverseString(arr, arr + len - 1);
	
	//2.������������е�ÿ������
	char* start = arr;//���ʵ��׵�ַ
	
	while (*start)
	{
		char* end = start;
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}//ѭ���������õ����ʵ�βָ��

		ReverseString(start, end- 1);

		if (*end == ' ')
		{
			start = ++end;
		}
		else
		{
			start = end;//��ʱ start��ŵ���0
		}
		
	}
	
	printf("%s\n", arr);

	return 0;
}
