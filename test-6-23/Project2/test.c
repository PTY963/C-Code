#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//int compare_int(const void* e1, const void* e2)
//{
//	return *(int*)e2 - *(int*)e1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[40] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	qsort(arr, n, sizeof(arr[0]), compare_int);//降序
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//一行字符序列，包含A或B，输入以字符0结束
//int main()
//{
//	int ch = 0;//getchar的返回值是int
//	int count_a = 0;
//	int count_b = 0;
//	while(((ch = getchar()) != '0') && (ch!=EOF))//一次读取一个字符
//	{
//		if (ch == 'A')
//			count_a++;
//		if (ch == 'B')
//			count_b++;
//	}
//
//	if (count_a == count_b)
//		printf("%c\n",'E');
//	else if (count_a > count_b)
//		printf("A\n");
//	else
//		printf("B\n");
//	return 0;
//}

//int main()
//{
//	int ch = 0;//getchar的返回值是int
//	int count = 0;
//	
//	while (((ch = getchar()) != '0') && (ch != EOF))//一次读取一个字符
//	{
//		if (ch == 'A')
//			count++;
//		if (ch == 'B')
//			count--;
//	}
//
//	if (count > 0)
//		printf("A\n");
//	else if (count == 0)
//		printf("E\n");
//	else
//		printf("B\n");
//
//	return 0;
//}

//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//
//	int i = 0;
//	int count = 0;
//	while (arr[i])
//	{
//		if (arr[i] == 'A')
//			count++;
//		if (arr[i] == 'B')
//			count--;
//
//		i++;
//	}
//
//	if (count > 0)
//		printf("A\n");
//	else if (count == 0)
//		printf("E\n");
//	else
//		printf("B\n");
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n)!=EOF)
//	{
//		if (n >= 140)
//			printf("Genius\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	//EOF -1
//	//原码 10000000 00000000 00000000 00000001
//	//反码 11111111 11111111 11111111 11111110
//	//补码 11111111 11111111 11111111 11111111
//	while (~scanf("%d", &n))//~ -按位取反
//	{
//		if (n >= 140)
//			printf("Genius\n");
//	}
//	return 0;
//}

int main()
{
	int age = 0;
	scanf("%d", &age);

	//优先级相同，自左向右结合 18 <= age 为真 1
	//1 <=30 为真 1
	if (18 <= age <= 30)
	{
		printf("青年\n");
	}
	return 0;
}