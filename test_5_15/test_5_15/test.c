#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//��n�Ľ׳�
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int ret = 1;
//
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//��׳˵ĺ�
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;//������0
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)//j�Ǽ����󼸵Ľ׳�
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//��������н����ʲô��Խ����ʣ����������
//	return 0;
//}//��Ļ�ϴ�ӡ13���Ǻǣ�Ȼ��������

//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 11; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}//����Ľ������ѭ������Ļѭ����ӡhehe
//ԭ�ͳ��ԡ�C������ȱ�ݡ���nice������

//#include<string.h>
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//
//	strcpy(arr1, arr2);//strcpy���arr2�е�'\0'������
//	printf("%s\n", arr1);
//
//	return 0;
//}


//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)//�ȿ�����'\0'��ʹ��ѭ��ͣ������
	{
		;
	}
}

int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";

	my_strcpy(arr1,arr2);

	printf("%s\n", arr2);

	return 0;
}