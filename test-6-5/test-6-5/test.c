#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);

// 1 2 3
// 4 5 6
// 7 8 9

//int find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//
//	while (x < r && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;//�ҵ���
//		}
//
//	}
//
//	return 0;//û�ҵ�
//
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//
//	int ret=find_num(arr, 3, 3, k);
//	if (1 == ret)
//	{
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}


//�����±��
//int find_num(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;//�ҵ���
//		}
//
//	}
//
//	return 0;//û�ҵ�
//
//}

//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//
//	int x = 3;//��
//	int y = 3;//��
//	//&x,&y
//	//1.�������
//	//2.����ֵ
//	int ret = find_num(arr, &x, &y, k);
//	if (1 == ret)
//	{
//		printf("�ҵ���\n");
//		printf("�±��ǣ�%d %d", x, y);
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}

//int find_num(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;//�ҵ���
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//
//	int x = 3;//��
//	int y = 3;//��
//
//	int ret=find_num(arr, &x, &y, k);
//	if (1 == ret)
//	{
//		printf("�ҵ���\n");
//		printf("�±�Ϊ: %d %d\n",x,y);
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//
//	return 0;
//}


//������ת��
//ʵ��һ�����������������ַ����е�k���ַ�
//#include<string.h>
//#include<stdio.h>
////a b c d e f    
////b a c d e f 1.�������
////b a f e d c 2.�ұ�����
////c d e f b a 3.��������
//#include<assert.h>
//void reverse(char* start, char* end)
//{
//	assert(start);
//	assert(end);
//	while (start < end)
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = tmp;
//		start++;
//		end--;
//	}
//}

//void string_left_rotate(char* pa, int k)
//{
//	assert(pa);
//	int len = strlen(pa);
//	reverse(pa, pa + k - 1);//1.�������
//	reverse(pa + k, pa + len - 1);//2.�ұ�����
//	reverse(pa, pa + len - 1);//3.��������
//}

//int main()
//{
//	char arr[] = "abcdef";
//	int k = 2;
//
//	string_left_rotate(arr, k);
//
//	printf("%s\n", arr);
//	return 0;
//}

//������ٷ�
//����һ�Σ����ж��Ƿ����
#include<string.h>
//int is_string_rotate(char* str1, char* str2)
//{
//	int len = strlen(str1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = *str1;//1.
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			str1[j] = str1[j + 1];//2.
//		}
//		str1[len - 1] = tmp;//3.
//
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}


int is_string_rotate(char* str1, char* str2)
{
	//�ж������ַ��������Ƿ����
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	//1.��str1׷��һ��str1
	int len = strlen(str1);
	strncat(str1, str1, len);
	//2.�ж�str2�Ƿ�Ϊstr1���Ӵ�
	char* ret=strstr(str1, str2);//strstr�ķ���ֵ��ָ��

	return ret != NULL;//(�߼��жϵ�ֵֻ1����ǰ����������0)
}
int main()
{
	char arr1[20] = "ABCDEF";
	char arr2[] = "CDEFAB";

	int ret = is_string_rotate(arr1,arr2);

	if (1 == ret)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}

	return 0;
}

//int main()
//{
//	char arr[20] = "hello ";
//	//strcat(arr, "bit");//���ǲ����ԣ��Լ�׷���Լ�
//	strncat(arr, arr, 5);
//	printf("%s\n", arr);
//	return 0;
//}

