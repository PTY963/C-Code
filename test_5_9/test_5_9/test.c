#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�Լ������һ������
//struct Book
//{
//	//�ṹ���Ա����Ա������
//	char name[20];
//	char id[10];
//	int price;
//};
//
//int main()
//{
//	struct Book b = { "C����","C22019423",55 };
//	struct Book* pb = &b;
//
//	printf("����: %s\n", pb->name);
//	printf("���: %s\n", pb->id);
//	printf("�۸�: %d\n", pb->price);//�ṹ��ָ��->��Ա��
//
//	/*printf("����: %s\n", (*pb).name);
//	printf("���: %s\n", (*pb).id);
//	printf("�۸�: %d\n", (*pb).price);*/
//
//	/*printf("����: %s\n", b.name);
//	printf("���: %s\n", b.id);
//	printf("�۸�: %d\n", b.price);*///�ṹ�������.��Ա��
//
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000011
//	char b = 127;
//	//01111111
//	char c = a + b;//a��b�ĳ��ȶ�û�дﵽһ��int�ĳ��ȣ�������������
//	//���������ǰ��ձ����������͵ķ���λ������
//	//00000000000000000000000000000011-a
//	//00000000000000000000000001111111-b
//	//00000000000000000000000010000010-c c��char���ͣ������ض�
//	//10000010-c 130
//	printf("%d\n", c);//-126
//	//������������ ����λ��1 ����1
//	//11111111111111111111111110000010-���� ���մ�ӡ������Ҫԭ��
//	//11111111111111111111111110000001-���� -1
//	//10000000000000000000000001111110-ԭ�� ����λ���䣬����λ��λȡ�� -126
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");//c
//
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4 c���������㣬��������������
//	printf("%u\n", sizeof(-c));//4
//	printf("%u\n", sizeof(!c));//1 gcc 4 gcc���ӷ���C���Ա�׼
//	return 0;
//}

//int main()
//{
//	printf("%u\n", sizeof(unsigned int));
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);//����ȷ��Ψһ�ļ���·�����������
//	printf("%d\n", ret);//12
//
//	return 0;
//}

//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	reverse(arr, sz);
//	
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	return 0;
//}

