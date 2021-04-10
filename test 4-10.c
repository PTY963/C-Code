#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int arr[a];//C99标准中引用了变长数组的概念，用变量指定大小但不能初始化
//	           //但当前编译器不支持
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	if (age > 18)
//		printf("成年\n");
//	else
//		printf("未成年\n");
//	    printf("不能谈恋爱\n");
//	
//	return 0;
//}
//屏幕打印出 成年 不能谈恋爱 ，应该加上大括号

//int main()
//{
//	int age = 60;
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else if (18 <= age < 26)//屏幕打印出 青年 写法错误
//	{
//		//age=60 18<=60 为真1 1<26 为真 执行语句
//		printf("青年\n");
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
//	else//悬空else else和离它最近的if匹配
//			printf("haha\n");//屏幕什么都不打印
//	return 0;
//}

//int main()
//{
//	int num = 3;
//	if (5 == num)//好的代码风格，如果比较的话，把常量放在前面，防止出错
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//判断一个数是否为奇数
//int main()
//{
//	int a = 15;
//	if (a % 2 == 1)
//	{
//		printf("奇数\n");
//	}
//	return 0;
//}

//输出1到100之间的奇数

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
//	//C99支持这种写法
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

//1-5 工作日
//6-7休息日

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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;//编程好习惯，最后一个break也要带上
//	default:
//		printf("输入错误\n");
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
//	//		break;//直接跳出循环，屏幕打印1 2 3 4
//	//	printf("%d ", i);
//	//	i++;
//	//}
//	return 0;
//}