#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����Ļ�ϴ�ӡ1-100��3�ı���

//int main()
//{
//	int i = 0;
//
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//}

//�����������������������������Լ��

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//
//	int max = 0;
//	if (m > n)//��֤max��m��n��С���Ǹ�ֵ
//	{
//		max = n;
//	}
//	else
//	{
//		max = m;
//	}
//
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ���ǣ�%d\n",max);
//			break;//�ҳ����Լ��������ѭ��
//		}
//
//		max--;//���û��ͬʱ���������
//	}
//	return 0;
//}

//շת����������Լ��

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//
//	int t = 0;
//
//	while (t = m % n)//�����0����ѭ�������Ϊ0����ӡn
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ���ǣ�%d\n", n);
//
//	return 0;
//}
//���ñȽ�m��n�Ĵ�С������modһ��֮��m��n�ͻỻλ��

//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		for ( j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		//����������������һ��break��i�������ˣ�����������
//		//�����Ǹ���û����if����У�i���ܱ�j������i��������
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	int i = 0;
//	int j = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		
//		int flag = 1;//����i��������
//
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)//���i�ܱ�j����
//			{
//				flag = 0;//�ܱ�����i��һ����������
//				break;
//			}
//		}
//		if (flag == 1)//iû����if��䣬û�б���ֵ
//		{
//			count++;
//			printf("%d ", i);
//			
//		}
//	}
//
//	printf("\ncount=%d\n", count);
//
//
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//����i������
//
//		for (j = 2; j <= sqrt(i); j++)//2-sqrt(i)֮�����ȥ�Գ�
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//
//	for (i = 101; i <= 200; i += 2)//ż��������������Դͷ�ϼ���
//	{
//		int flag = 1;//����i������
//
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
// 
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}

//�ػ�����
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	//�ػ�
//	system("shutdown -s -t 60");
//again:
//	printf("���ĵ��Խ���һ���Ӻ�ػ��������룺������\n");
//
//	char input[20] = { 0 };
//	scanf("%s", input);
//
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//
//	return 0;
//}


//goto���ֻ����һ��������Χ����ת�����ܿ纯��

//void test(void)
//{
//flag:
//	printf("hehe\n");
//}
//
//int main()
//{
//	goto flag;
//
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, 'x', 5);
//
//	printf("%s\n", arr);
//	return 0;
//}