#define _CRT_SECURE_NO_WARNINGS 1
//0000 0000
//1110 0000
//1001 1111
//1011 1110
#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
//int main()
//{
//	//�����ʧ�ܵĻ����᷵��һ��NULLָ��
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));//���ش�����errno����Ӧ�Ĵ�����Ϣ
//		perror("text.txt");//��ӡ������Ϣ
//		return 1;
//	}
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//strerror �Ѵ�����ת���ɴ�����Ϣ
//perror 1.�Ѵ�����ת���ɴ�����Ϣ 2.��ӡ������Ϣ���������Զ�����Ϣ��

//�ַ����ຯ��
//int main()
//{
//	char ch = '2';
//	//���������ַ�����0�� �������ַ�����һ����0����
//	int ret = isdigit(ch);
//	printf("%d\n", ret);
//	return 0;
//}

//�ַ�ת������
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (islower(arr[i]))
//		{
//			arr[i] = toupper(arr[i]);
//		}
//		printf("%c", arr[i]);
//
//		i++;
//	}
//	return 0;
//}

//�ڴ��������
//1.memcpy - �ڴ濽��
//memcpy������ Ӧ�ÿ����ڴ治�ص������
void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;

	}
	return ret;
}
//++�����ȼ�Ҫ����ǿ������ת�� destת����char*����֮�� ��++ ��ʱ��char*����
//Ч���Ѿ�û����
//��Ŀ������Ľ������������
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//
//	my_memcpy(arr2, arr1, 20);
//	
//	return 0;
//}

//2. memmove���Կ����ڴ��ص������
void* my_mommove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	if (src < dest)//����ĵ�ַ���±����������
	{
		//��ǰ���󿽱�
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//�Ӻ���ǰ����
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr + 2, arr, 20);
//	return 0;
//}
//C��׼�涨 memcpy�������ص��ڴ������Ϳ�����

//3. memcmp 
//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0 };
//	float arr2[] = { 1.0,3.0 };
//	int ret = memcmp(arr1, arr2, 8);
//	//memcmp�ķ���ֵ��strcmp�ķ���ֵ��һ����
//	printf("%d\n", ret);
//	return 0;
//}

//4.menset - �ڴ�����
//void* memset(void* ptr, int value, size_t num)
//��ptrָ���ǰnum���ֽڵ��ڴ�ռ����ó�value
int main()
{
	int arr[10] = { 0 };//20byte 1
	memset(arr, 1, 20);//���ֽ�Ϊ��λ
	//00 00 00 00
	//01 01 01 01
	return 0;
}