#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int score = 0;
//	while (~scanf("%d", &score))
//	{
//		if (score % 2 == 1)
//			printf("Odd\n");
//		if (score % 2 == 0)
//			printf("Even\n");
//	}
//	return 0;
//}

//int main()
//{
//	int s1 = 0;
//	int s2 = 0;
//	int s3 = 0;
//	while (~scanf("%d %d %d", &s1, &s2, &s3))
//	{
//		int max = 0;
//		if (s1 > max)
//			max = s1;
//		if (s2 > max)
//			max = s2;
//		if (s3 > max)
//			max = s3;
//
//		printf("%d\n", max);
//	}
//	return 0;
//}

//�ж���Ԫ����ĸ���Ǹ�����ĸ
//int main()
//{
//	char s[] = "AaEeIiOoUu";
//	int ch = 0;
//	while (~(ch = getchar()))
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == s[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		//���������1.ѭ������û���ҵ���ȵ��ַ� 2.break����ѭ��
//		if (10 == i)
//			printf("Consonant\n");
//
//		//����\n
//		getchar();
//	}
//	return 0;
//}


int main()
{
	char s[] = "AaEeIiOoUu";
	char ch = 0;
	//%cǰ��һ���ո��ʾ�ڶ�ȡ�ַ���ʱ����Կհ��ַ�
	while (~scanf(" %c",&ch))
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			if (ch == s[i])
			{
				printf("Vowel\n");
				break;
			}
		}
		//���������1.ѭ������û���ҵ���ȵ��ַ� 2.break����ѭ��
		if (10 == i)
			printf("Consonant\n");

		//����\n
		//getchar();
	}
	return 0;
}



