#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	while (n != 0)
//	{
//		printf("%d ", n % 10);
//		n = n / 10;
//	}
//	return 0;
//}


//int main()
//{
//	int ch = getchar();//getchar的返回值是一个整形
//	ch = ch + 32;//对应大写字母和小写字母的ASCII码值相差32
//	putchar(ch);
//	return 0;
//}
//


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar() != EOF))
//	{
//		printf("%c\n", ch + 32);
//		getchar();//清理缓冲区的/n
//	}
//	return 0;
//}


//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：> \n");
//	scanf("%s", password);//scanf不会拿走缓冲区的\n
//	getchar();//清理缓冲区的\n
//	printf("请确认（Y/N）:>\n");
//	int ch = getchar();
//	if ('Y'== ch)
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}