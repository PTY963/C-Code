#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
//int main()
//{
//	int ch = 0;
//	while (~(ch = getchar()))
//	{
//		if (isalpha(ch))//�⺯��-�ж��Ƿ��Ǹ���ĸ
//			printf("%c is an alphabet\n",ch);
//		else
//			printf("%c is not an alphabet\n",ch);
//
//		//����'\n'
//		getchar();
//	}
//
//	return 0;
//}

//A - 65 a - 97  
//97-65=32
//int main()
//{
//	int ch = 0;
//	while (~(ch = getchar()))
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);//Сдת��д
//		else if (ch >= 'A' && ch <= 'Z')
//			printf("%c\n", ch + 32);//��дתСд
//
//		getchar();//����'\n'
//	}
//	return 0;
//}

//#include<ctype.h>
//int main()
//{
//	int ch = 0;
//	while (~(ch = getchar()))
//	{
//		if (islower(ch))
//			printf("%c\n", toupper(ch));//Сдת��д
//		else if (isupper(ch))
//			printf("%c\n", tolower(ch));//��дתСд
//
//		getchar();//����'\n'
//	}
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (~scanf("%d %d %d", &a, &b, &c))
	{
		if ((a + b > c) && (a + c > b) && (b + c > a))
		{
			//��������
			if (a == b && b == c)
				printf("ȫ��������\n");
			else if (((a == b) && (b != c)) || ((a == c) && (c != b)) || ((c == b) && (b != a)))
				printf("����������\n");
			else
				printf("����������\n");
		}
		else
		{
			//����������
			printf("����������\n");
		}
	}
	return 0;
}