#define _CRT_SECURE_NO_WARNINGS 1
//��̬�ڴ濪�� ��������
//malloc free
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 0;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//calloc
//int main()
//{
//	//int* p =(int*) malloc(10 * sizeof(int));
//	int* p = calloc(10, sizeof(int));//��ʼ��Ϊ0
//	return 0;
//}

//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//
//	int* ptr = realloc(p, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = realloc(NULL, 10 * sizeof(int));//����realloc�Ĺ�������malloc
//	return 0;
//}

int main()
{
	int* p = malloc(0);//����һ��ָ�룬 ���ǿ��ٵĿռ䲻��ʹ��
	return 0;
}