#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//Դ�ļ����ļ�������·��
//	printf("%s\n", __FILE__);//C:\Users\86199\source\repos\test-7-24\test-7-24\test.c
//	printf("%d\n", __LINE__);//��ǰ�����к� 7
//	printf("%s\n", __DATE__);//��ǰ���� Jul 24 2021
//	printf("%s\n", __TIME__);//��ǰʱ�� 10:08 : 17
//	printf("%s\n", __FUNCTION__);//��ǰ���ں����ĺ����� ,main
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("log.txt", "a+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "%s %d %s %s\n", __FILE__, __LINE__, __DATE__, __TIME__);
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#define �����ʶ��
//#define M 1000;
//
//int main()
//{
//	int a = 10;
//	int b = 0;
//	if (a > 10)
//		a = M;//a = 1000;
//	          //;
//	else
//		a = b;
//	return 0;
//}


//#define�����
//���ź���Ҫ

//#define SQUARE(X) X*X
//#define SQUARE(X) ((X)*(X))
//int main()
//{
//	//printf("%d\n", SQUARE(3));//printf("%s\n", 3*3);
//	printf("%d\n", SQUARE(3 + 1));//16
//	return 0;
//}

//#������ �Ѻ�Ĳ������뵽�ַ�����
//void print(int x)//�����޷����������
//{
//	printf("the value of a is %d\n", x);
//}

//#define PRINT(X, FORMAT) printf("the value of "#X" is "FORMAT"\n", X);
////#define PRINT(X) printf("the value of ""X"" is %d\n", X);
//int main()
//{
//	int a = 10;
//	PRINT(a,  "%d");
//	//printf("the value of" "X" "is %d\n", X);	
//	//the value of a is 10
//	int b = 20;
//	PRINT(b, "%d");
//	//the value of b is 20
//	int c = 30;
//	PRINT(c, "%d");
//	//the value of c is 30
//	float f = 5.5f;
//	PRINT(f, "%f");
//	//printf("the value of "f" is ""%f""\n", X);
//	
//	return 0;
//}

//## ���������źϳ�һ������
//#define CAT(X, Y, I) X##Y##I
//int main()
//{
//	int class101102 = 100;
//	printf("%d\n", CAT(class, 101, 102));//100
//	return 0;
//}

//���и����õĺ�Ĳ���
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 5;
//	int b = 8;
//	int m = MAX(a++, b++);
//	//((a++)>(b++)?(a++):(b++))
//	//((5)>(8)?(5):(8))
//	printf("m = %d\n", m);//9 ��Ӱ�쵽�������
//	return 0;
//}

//��ͺ����ıȽ�
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int m = MAX(a, b);
//
//	m = max(a, b);
//	return 0;
//}

//��Ĳ�������������
//#define MALLOC(num, type) malloc(num*sizeof(type))
//int main()
//{
//	malloc(10 * sizeof(int));
//	//malloc(10, int);
//	MALLOC(10, int);
//	malloc(10 * sizeof(int));
//
//	return 0;
//}

//�������� inline ����˺�ͺ������ŵ� 
//����Լ�� �������ȫ����д ���������ֲ�Ҫȫ����д


//#undef
//#define MAX 100
//int main()
//{
//	int a = MAX;
//#undef MAX
//	//printf("%d\n", a);
//	printf("%d\n", MAX);
//	return 0;
//}

//��������
//#define PRINT
//int main()
//{
//#ifdef PRINT
//	printf("hehe\n");
//#endif
//	printf("haha\n");
//	return 0;
//}

//#if �������ʽ
//#endif
//int main()
//{
//#if 0
//	printf("hehe\n");
//#endif
//	return 0;
//}

//#if #endif ��Ԥ����ָ�� ��Ԥ�����ʱ��ͻ�ɾ��
#if 0
#define PRINT 1
int main()
{

#if PRINT
	printf("zhangsijia\n");
#endif
	return 0;
}
#endif

//int main()
//{
//	printf("hello world\n");
//	return 0;
//}

//�����һ������Ϊ�棬����ڶ�������ҲΪ�棬Ҳֻ�������һ��
//int main()
//{
//#if 1==2
//	printf("hehe\n");
//#elif 1==3
//	printf("haha\n");
//#else
//	printf("heihei\n");
//#endif
//	return 0;
//}

//�ж��Ƿ���
//#define TEST 1
//int main()
//{
//	//���������TEST ������Ĵ������
//#ifdef TEST
//	printf("hello world\n");
//#endif 
//
//	//���û�ж���HEHE������Ĵ������
//#ifndef HEHE
//	printf("hehe\n");
//#endif 
//
//	return 0;
//}

//<> �� ""����ͷ�ļ��ı��������ǣ����Ҳ��ԵĲ�ͬ
//"" 1.���Լ��������ڵ�Ŀ¼�²��� 2.�����1������ʧ�ܣ����ڿ⺯����ͷ�ļ�Ŀ¼�²���
//<> ֱ��ȥ�⺯��Ŀ¼�²���
//����ֱ��д #include "stdio.h" Ҳû��ϵ���ܻ��ҵ���
//VS2019 - C:\Program Files (x86)\Windows Kits\10\Include\10.0.19041.0\ucrt

//��ֹͷ�ļ�����ΰ���
//1.#pragma once 
//
// 2.#ifndef __TEST_H_
//   #define __TEST_H_
//   //ͷ�ļ�������
//   #endif 


