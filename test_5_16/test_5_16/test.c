#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//ģ��ʵ��strcpy����
//��srcָ������ݿ�����destָ�������
//�ӱ����ϣ���ϣ��destָ������ݱ��ı�,srcָ������ݲ�Ӧ�øı�
//void  my_strcpy(char* dest,const char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//#include<assert.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(src != NULL);//���ԣ���һ����
//	assert(dest != NULL);//����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//return dest;//??? �����ԣ���Ϊdest��++�Ĺ������Ѿ����ı�
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//
//	strcpy(arr1, arr2);//1.Ŀ��ռ���ʼ��ַ 2.Դ�ռ���ʼ��ַ
//	//printf("%s\n", arr1);//����ӡ�����x����Ϊ�ַ����Ľ�����־��'\0'
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
//
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	//num = 20;//error
//	/*int* p = &num;
//	*p = 20;*///num��ֵ���ı�
//	const int* p = &num;//const����*����ߣ���ʾָ��pָ������ݲ��ܱ��ı�
//	//*p = 20;//error
//
//	return 0;
//}

//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	//int const * p = &num1;//*p�����Ըı䣬����p���Ըı�
//	//*p = 20;//err
//	//p = &num2;
//	int* const p = &num1;//�����Ըı䣬����*p���Ըı�
//	*p = 100;
//	//p = &num2;//err
//
//	return 0;
//}
//#include<assert.h>
//������ϣ�������ַ����ĳ��ȣ��ǳ��ȾͲ������Ǹ���
//��׳��
//³����
size_t my_strlen(const char* arr)//�����ϲ�ϣ��arrָ������ݱ��ı�
{
	//assert(arr != NULL);
	assert(arr);//NULL����0������ǿգ�Ϊ��
	size_t count = 0;
	while (*arr++ != '\0')
	{
		count++;
		
	}
	return count;
}
int main()
{
	char arr[] = "hello";
	my_strlen(arr);
	printf("%d\n", my_strlen(arr));

	return 0;
}