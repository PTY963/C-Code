#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ֻ���������� 1.
//int NumberOf1(int n)//���԰Ѳ�����Ϊunsigned int 
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//2.
//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//3.
//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//ȥ��1
//		count++;//����ִ�м��ξ�ȥ������1
//	}
//	return count;
//}

//int main()
//{
//	int n = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	int ret=NumberOf1(n);
//
//	printf("%d\n", ret);//0
//
//	return 0;
//}

//�ж�һ�����ǲ���2^n
//һ�����������2^n,��ô���Ķ������У�ֻ��һ��1
//k&(k-1)==0,��˵����

//���������Ķ����Ʋ�ͬλ�ĸ���
//22 33 
//5

//int main()
//{
//	int n = 22;
//	int m = 33;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int NumberOf1(int ret)
//{
//	int count = 0;
//	while (ret)
//	{
//		ret = ret & (ret - 1);//����ִ��һ�Σ�ȥ��һ��1
//		count++;
//	}
//	return count;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//
//	int ret = m ^ n;//�����ͬΪ0������Ϊ1
//	//����1�ĸ���
//	NumberOf1(ret);
//	printf("%d\n", NumberOf1(ret));
//	return 0;
//}

//�ֱ��ӡһ�����������е�����λ��ż��λ

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	//�ֱ��ȡn�Ķ��������е�����λ��ż��λ����ӡ
//	//000000000000000000000000000001010 - 10
//	int i = 0;
//	//��ӡż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//��ӡ����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}

//��������ʱ�����������������α�����ֵ
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;//a^b^b
//	a = a^ b;//a^a^b
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);//0 0 3 4 5
//	}
//	return 0;
//}

// 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00��С��ģʽ��
//arr��ǿ��ת����short���͵�ָ�룬����p������һ���ܷ��������ֽ�

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	//��ȡn�Ķ����Ƶ�����λ��ż��λ
//	//00000000 00000000 00000000 00001010
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)//��ӡż��λ
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//
//	printf("\n");
//
//	for (i = 30; i >= 0; i -= 2)//��ӡ����λ
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}

//дһ���������ز����������� 1 �ĸ���
//int NumberOf1(int a)
//{
//	int count = 0;
//
//	while (a)
//	{
//		a = a & (a - 1);//ȥ��1 ����ִ�м��Σ�ȥ������1
//		count++;
//	}
//
//	return count;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//10
//
//	NumberOf1(a);
//
//	printf("%d\n", NumberOf1(a));//��ʽ����
//	return 0;
//}

//ģ��ʵ�ֿ⺯��strlen
//#include<assert.h>
//size_t my_strlen(const char* arr)
//{
//	assert(arr != NULL);
//	size_t count = 0;
//
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//
//	return count;
//}

//int main()
//{
//	char arr[] = "hello";
//
//	my_strlen(arr);
//
//	printf("%u\n", my_strlen(arr));//��ʽ����
//	return 0;
//}

//ģ��ʵ�ֿ⺯��strcpy
//char* my_strcpy(char* dest, const char* src)//�����ϲ�ϣ��src�����ݱ��ı�
//{
//	char* ret = dest;
//	while (*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//	return ret;
//}

#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);

	char* ret = dest;//������ʽ����
	while (*dest++ = *src++)//\0����ֵ��dest֮�󣬱��ʽΪ�٣�ѭ������
	{
		;
	}

	return ret;
}

int main()
{
	char arr1[] = "xxxxxxxxxx";
	char arr2[] = "hello";

	my_strcpy(arr1, arr2);

	printf("%s\n", arr1);//'\0'���ַ���������־������ʣ�µ�4��x����ӡ

	return 0;
}