#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//void Func(char arr[100])
//{
//	printf("%d\n", sizeof(arr));//������Ϊ�����Ĳ�������ʱ���Զ��˻�Ϊͬ���͵�ָ��
//}
//int main()
//{
//	char arr[100] = { 0 };
//	Func(arr);
//	return 0;
//}
//��ָ��ָ���ָ�롱
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(sizeof(char) * num);
//
//}
//int main()
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf("%s\n", str);
//	free(str);
//	str = NULL;
//	return 0;
//}

//��������ֵ�����ݶ�̬�ڴ�
char* GetMemory(int num)
{
	char* p = (char*)malloc(sizeof(char) * num);
	return p;
}
int main()
{
	char* str = NULL;
	str = GetMemory(100);
	strcpy(str, "hello");
	printf("%s\n", str);
	free(str);
	str = NULL;
	return 0;
}
