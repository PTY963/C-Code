#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int i;//ȫ�ֱ�������ʼ����Ĭ����0
//int main()
//{
//	i--;//-1
//	if (i > sizeof(i))//-1>4 sizeof����ֵ��������unsigned int ����ת��
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//int main()
//{
//	//��a��ǰn��֮��,��������������
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		//���ÿһ��
//		ret = ret * 10 + a;
//		sum = sum +ret ;
//	}
//
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int* pend = arr + sz - 1;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//���1-100000֮���������
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10000; i++)
//	{
//		//�ж�i�Ƿ�Ϊ������
//		//1.�ж�i�Ǽ�λ�� -n
//		int tmp = i;
//		int n = 1;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2.���ÿһλ��n�η������
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, n);//pow��һ����η��Ŀ⺯��
//			tmp = tmp / 10;
//		}
//		
//		//3.�ж�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include<string.h>
//#include<assert.h>
//void ReverseString(char* str)
//{
//	assert(str);//��������ϰ��
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "zhang";//hnahz
//	ReverseString(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//���0��100000֮������������������
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10000; i++)
//	{
//		//�ж�i�Ƿ���������
//		//1.�ж�i��λ��-n�η�
//		int tmp = i;
//		int n = 1;//ÿ�����֣������һλ��
//		while (tmp / 10)
//		{
//			n++;//��λ���ͳ��ϼ��η�
//			tmp = tmp / 10;
//		}
//		//2.�õ�i��ÿһλ������n�η������
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		//3.��Ӻ��ֵ��i�Ƚϣ���Ⱦ���������
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//1.��
//	int i = 0;
//	for (i = 0; i < line; i++)//��ӡÿһ��
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0;j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j<1+2*i; j++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	
//	//2.��
//	for (i = 0; i < line - 1; i++)//��ӡÿһ��
//	{
//		//�ո�
//		int j = 0;
//		for (j = 0;j<=i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0;j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	return 0;
//}

//����ˮ��һƿ��ˮ1��Ǯ��������ƿ���Ի�1ƿ��ˮ����20��Ǯ�����Ժȼ�ƿ��ˮ�����ʵ�֣�
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	
//	int total = money;//total��ʾ�ȵ���ˮ��������ʼֵȡ����money
//	int empty = money;//empty��ʾ��ƿ������ʼֵȡ����money
//
//	//��ʼ�û�
//	while (empty>=2)//empty������ڵ���2
//	{
//		total =total+ empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("%d\n", total);
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//
//	int total = 0;
//	if (money > 0)//����0 ����ָ���
//	{
//		total = 2 * money - 1;
//	}
//
//	printf("%d\n", total);
//	return 0;
//}

//�������������ż����ǰ��
//������ǰ���� �ҵ����� ָ���1 �ҵ�ż��
//����������� �ҵ�ż�� ָ���1 �ҵ�����
//���ҵ���������ż������
void Move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{

		//��ż�� ѭ��û��ȥ �ҵ���
		while ((left < right) && (arr[left] % 2 == 1))//left<right ��ֹȫ������ ����Խ��
		{
			left++;
		}

		//������ ѭ��û��ȥ �ҵ���
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}

		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Move(arr, sz);
	print(arr, sz);
	return 0;
}