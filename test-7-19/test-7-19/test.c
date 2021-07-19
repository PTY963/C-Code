#define _CRT_SECURE_NO_WARNINGS 1
//动态内存开辟 堆区开辟
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
//	int* p = calloc(10, sizeof(int));//初始化为0
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
//	int* p = realloc(NULL, 10 * sizeof(int));//这是realloc的功能类似malloc
//	return 0;
//}

int main()
{
	int* p = malloc(0);//返回一个指针， 但是开辟的空间不可使用
	return 0;
}