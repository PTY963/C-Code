#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int ls_prime(int n)//��������
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;//˵��n��������������0
//		}
//	}
//	return 1;//������������1
//}
//
//int main()
//{
//	//100-200֮�������
//	int i = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		if (ls_prime(i) == 1)//��������
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}

//дһ�������ж�year�Ƿ�������
//�����귵��1
//�������귵��0
//int is_leap_year(int y)//��������
//{
//	if ((0 == y % 4) && (y % 100 != 0) || (0 == y % 40))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//	
//}
//int is_leap_year(int y)
//{
//	return ((0 == y % 4 && y % 100 != 0) || (0 == y % 400));//&& ||�����߼�������
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1==is_leap_year(year) )//�������ã���ֵ����
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}
//binary_search ��һ�����������в���һ��Ԫ��key
//���ҳɹ��������±�
//����ʧ�ܣ�����-1

//int binary_search(int* parr,int key,int sz)
//int binary_search(int arr[], int key, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;//�ҵ���
//		}
//	}
//	return -1;//û�ҵ�
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int ret=binary_search(arr, key, sz);
//
//	if (ret != -1)
//	{
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//
//	return 0;
//}
//int arr[]��ʵ�ǹ���ͷ������
//int binary_search(int* parr,int key);
//int binary_search(int arr[], int key)
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//arr��ָ�룬������4��8���ֽ�
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;//�ҵ���
//		}
//	}
//	return -1;//û�ҵ�
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	
//
//	int ret = binary_search(arr, key);//����arr���Σ�ʵ���ϴ�������Ԫ�صĵ�ַ
//
//	if (ret != -1)
//	{
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
//	}
//	else
//	{
//		printf("û�ҵ�\n");//�������û�ҵ�
//	}
//
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	//printf("%d\n", strlen("abc"));//��ʽ����
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "abc";
//
//	//printf("%s\n", strcpy(arr1, arr2));//��ʽ����
//
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������һ��-��֪
//	int ADD(int, int);//��������
//	int sum = ADD(a, b);//�������ã������ڶ���֮ǰ���������ߵĹ�ȥ�����ᱨ����
//
//	printf("%d\n", sum);
//	return 0;
//
//}
//
//int ADD(int x, int y)//��������
//{
//	return x + y;
//}
//#include"Add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int sum = Add(a, b);//���˱��˵ĺ�������Ҫ��ͷ�ļ���ͷ�ļ����к�����������
//
//	printf("%d\n", sum);
//
//	return 0;
//}
#include"Add.h"
//���뾲̬��
#pragma comment(lib,"Add.lib")
int main()
{
	int a = 10;
	int b = 20;

	int sum = Add(a, b);

	printf("%d\n", sum);
	
	return 0;
}