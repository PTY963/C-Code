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

//判断是元音字母还是辅音字母
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
//		//两种情况：1.循环结束没有找到相等的字符 2.break跳出循环
//		if (10 == i)
//			printf("Consonant\n");
//
//		//消除\n
//		getchar();
//	}
//	return 0;
//}


int main()
{
	char s[] = "AaEeIiOoUu";
	char ch = 0;
	//%c前面一个空格表示在读取字符的时候忽略空白字符
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
		//两种情况：1.循环结束没有找到相等的字符 2.break跳出循环
		if (10 == i)
			printf("Consonant\n");

		//消除\n
		//getchar();
	}
	return 0;
}



