#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int arr[a];//C99��׼�������˱䳤����ĸ���ñ���ָ����С�����ܳ�ʼ��
//	           //����ǰ��������֧��
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	if (age > 18)
//		printf("����\n");
//	else
//		printf("δ����\n");
//	    printf("����̸����\n");
//	
//	return 0;
//}
//��Ļ��ӡ�� ���� ����̸���� ��Ӧ�ü��ϴ�����

//int main()
//{
//	int age = 60;
//	if (age < 18)
//	{
//		printf("����\n");
//	}
//	else if (18 <= age < 26)//��Ļ��ӡ�� ���� д������
//	{
//		//age=60 18<=60 Ϊ��1 1<26 Ϊ�� ִ�����
//		printf("����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else//����else else�����������ifƥ��
//			printf("haha\n");//��Ļʲô������ӡ
//	return 0;
//}

//int main()
//{
//	int num = 3;
//	if (5 == num)//�õĴ���������ȽϵĻ����ѳ�������ǰ�棬��ֹ����
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int a = 15;
//	if (a % 2 == 1)
//	{
//		printf("����\n");
//	}
//	return 0;
//}

//���1��100֮�������

//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf(" %d ", i);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	//C++
//	//C99֧������д��
//	for (int i = 0; i < 100; i++)
//	{
//		;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//1-5 ������
//6-7��Ϣ��

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;//��̺�ϰ�ߣ����һ��breakҲҪ����
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	//while (i <= 10)
//	//{
//	//	if (5 == i)
//	//		break;//ֱ������ѭ������Ļ��ӡ1 2 3 4
//	//	printf("%d ", i);
//	//	i++;
//	//}
//	return 0;
//}