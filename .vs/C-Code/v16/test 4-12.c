#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20);
//		{
//			break;
//		}
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid - 1;
//		}
//		else
//		{
//			printf("���ҳɹ����±�Ϊ��%d\n", mid);
//			break;//�ҵ��ˣ�����ѭ��
//		}
//	}
//
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺 ");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;//��¼�ɹ�������ѭ��
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//			
//	}
//	if (i == 3)
//	{
//		printf("���ε�¼�������˳�����\n");
//	}
//	return 0;
//}
//#include<stdlib.h>
//
//void meun(void)
//{
//	printf("***********************\n");
//	printf("****** 1. PIAY   ******\n");
//	printf("****** 0. EXIT   ******\n");
//	printf("***********************\n");
//}

//void game()
//{
//	//��������Ϸ��ʵ��
//	//1.���������
//	//rand����һ��0-32767֮������֣����������
//	
//	int ret=rand()%100+1;//%100��������0-99
//	printf("%d\n", ret);
//	//2.������
//	int guess = 0;

//	while (1)
//	{
//
//		printf("�������: \n");
//		scanf("%d", &guess);
//
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;//�¶��ˣ�����������whileѭ��
//		}
//	}
//}

//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//�������һ�ξ͹��ˣ���Ȼ�������
//
//	do
//	{
//		meun();
//		printf("������ѡ� \n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ��������������룺 \n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//������λ��
//#include<string.h>
//void LeftShiftOne(char* ch, int len)//����һλ�ַ�
//{
//	int tmp = ch[0];//�����һ���ַ�
//	int i = 0;
//	
//	for (i = 1; i < len; i++)
//	{
//		ch[i - 1] = ch[i];
//	}
//
//	ch[len - 1] = tmp;
//
//}

//void leftshiftmore(char* ch, int len, int m)//������λ�ַ�
//{
//	while (m--)
//	{
//		LeftShiftOne(ch, len);
//	}
//}


//int main()
//{
//	char ch[] = "abcdef";
//	int len = strlen(ch);
//
//	leftshiftmore(ch, len,2);
//	printf("%s\n", ch);
//	return 0;
//}

