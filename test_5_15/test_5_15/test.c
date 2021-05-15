#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//求n的阶乘
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int ret = 1;
//
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//求阶乘的和
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;//不能是0
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)//j是几就求几的阶乘
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//代码的运行结果是什么？越界访问，程序崩溃？
//	return 0;
//}//屏幕上打印13个呵呵，然后程序崩溃

//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 11; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}//程序的结果是死循环，屏幕循环打印hehe
//原型出自《C陷阱与缺陷》，nice笔试题

//#include<string.h>
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//
//	strcpy(arr1, arr2);//strcpy会把arr2中的'\0'拷贝走
//	printf("%s\n", arr1);
//
//	return 0;
//}


//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)//既拷贝了'\0'又使得循环停了下来
	{
		;
	}
}

int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";

	my_strcpy(arr1,arr2);

	printf("%s\n", arr2);

	return 0;
}