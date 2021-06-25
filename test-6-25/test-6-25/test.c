#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
//int main()
//{
//	int ch = 0;
//	while (~(ch = getchar()))
//	{
//		if (isalpha(ch))//库函数-判断是否是个字母
//			printf("%c is an alphabet\n",ch);
//		else
//			printf("%c is not an alphabet\n",ch);
//
//		//消除'\n'
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
//			printf("%c\n", ch - 32);//小写转大写
//		else if (ch >= 'A' && ch <= 'Z')
//			printf("%c\n", ch + 32);//大写转小写
//
//		getchar();//消除'\n'
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
//			printf("%c\n", toupper(ch));//小写转大写
//		else if (isupper(ch))
//			printf("%c\n", tolower(ch));//大写转小写
//
//		getchar();//消除'\n'
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
			//是三角形
			if (a == b && b == c)
				printf("全等三角形\n");
			else if (((a == b) && (b != c)) || ((a == c) && (c != b)) || ((c == b) && (b != a)))
				printf("等腰三角形\n");
			else
				printf("其他三角形\n");
		}
		else
		{
			//不是三角形
			printf("不是三角形\n");
		}
	}
	return 0;
}