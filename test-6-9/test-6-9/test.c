#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//���ļ�ʧ�ܵ�ʱ��᷵��NULL
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");//fopen: No such file or directory
//		return 1;
//	}
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include<ctype.h>
//int main()
//{
//	char ch = '2';
//	int ret = isdigit(ch);
//	//���������ַ��ͷ���0 �������ַ��ͷ��ط�0��ֵ
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	gets(arr);
//
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c", arr[i]);
//
//		i++;
//	}
//	return 0;
//}

//�ڴ��������
//1.memcpy �ڴ濽��
//void* memcpy(char* dest,const void* src,size_t num)
//���һ���������ֽ�Ϊ��λ
//#include<string.h>
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	strcpy strncpy ���������ַ�
//	01 00 00 00 strncpy����0�ͽ���
//	memcpy(arr2, arr1, 20);
//	return 0;
//}

//ģ��ʵ��memcpy
//#include<assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//
//	void* start = dest;
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return start;
//}


//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	
//	my_memcpy(arr2, arr1, 20);
//	return 0;
//}


//ģ��ʵ��memmove
#include<assert.h>
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//
//	if (dest < src)//��ǰ���󿽱�
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else//�Ӻ���ǰ����
//	{
//		while (num--)//20
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//		
//	}
//
//	return ret;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//1 2 3 4 5 ������ 3 4 5 6 7 ��Ӧ���ڴ���
//	//my_memcpy(arr1+2, arr1, 20);//1 2 1 2 3 4 5 8 9 10
//	//memcpy(arr1 + 2, arr1, 20);
//	my_memmove(arr1 + 2, arr1, 20);
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	memcpy(arr1 + 3, arr1, 20);//1 2 3 1 2 3 4 5 9 10
//	
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0 };
//	float arr2[] = { 1.0,2.0 };
//
//	int ret = memcmp(arr1, arr2, 8);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 20);//���ֽ�Ϊ��λ�����ڴ棬��ÿһ���ֽڶ����ó���1��������
//	                   //arr[0]-arr[9]�����ó���1
//	return 0;
//}

//�ṹ����������һ�����Ӷ����
struct Book
{
	char name[20];
	char id[20];
	int price;
}b4,b5,b6;//ȫ�ֱ���
//int main()
//{
//	struct Book b1;//�ֲ�
//	struct Book b2;
//	struct Book b3;
//	return 0;
//}

//��������� �����ṹ������
struct
{
	char c;
	int a;
	double d;
}s;
struct
{
	char c;
	int a;
	double d;
}*ps;

int main()
{
	ps = &s;//���� �������������������������������ȫ��ͬ�����͡������ǷǷ���
	return 0;
}