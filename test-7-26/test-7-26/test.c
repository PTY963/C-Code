#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
��дһ�������ҳ�������ֻ����һ�ε����֡�
#endif

//void find(int arr[], int sz, int* px ,int* py)
//{
//	//1.��������������������һ�𣨵õ�һ����Ϊ0�����֣�
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp ^= arr[i];
//	}
//	//2.����������ִӵ�λ����λ�������ҳ�Ϊ1����һλ
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((tmp << i) & 1)== 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//3.����Ϊ1����һλ���������·ֳ�������
//	int arr1 = 0;
//	int arr2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] << pos) & 1) == 1)
//			arr1 ^= arr[i];
//		else
//			arr2 ^= arr[i];	
//	}
//
//	*px = arr1;
//	*py = arr2;
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//1.�� x��y �ĵ�ַ
//	//x��yΪ�����Ͳ���
//	//2.��һ������
//	//int diff[2] ��arr1��arr2����diff��
//	int x = 0;
//	int y = 0;
//	find(arr, sz, &x ,&y);
//	printf("%d %d\n", x, y);
//	return 0;
//}

//дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ������
//00000000 00000000 00000000 00001010
//ż��λ�����ƶ�1λ  ����λ�����ƶ�1λ

//�����е�ż��λ�ó���֮�������ƶ�1λ �����ж�����λ�ó��������ƶ�1λ �����
//#define SWAP(N) ((N & 0xaaaaaaaa) >> 1) + ((N & 0x55555555) << 1)
//int main()
//{
//	int a = 10;
//	int ret = SWAP(a);
//	printf("%d\n", ret);
//	return 0;
//}

#include<stddef.h>
#define OFFSETOF(struct_name, mem_name) (int)&(((struct_name*)0)->mem_name)
struct A
{
	int a;//0
	short b;//2-3
	int c;//4-7
	char d;//8
};
//int main()
//{
//	printf("%d\n", OFFSETOF(struct A, a));
//	return 0;
//}
int main()
{
	printf("%d\n", OFFSETOF(struct A, a));
	printf("%d\n", OFFSETOF(struct A, b));
	printf("%d\n", OFFSETOF(struct A, c));
	printf("%d\n", OFFSETOF(struct A, d));
	return 0;
}