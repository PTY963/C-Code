#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

void meun()
{
	printf("*********************\n");
	printf("*** 1.Add  2.Sub  ***\n");
	printf("*** 3.Mul  4.Div  ***\n");
	printf("***    0.Exit    ***\n");
	printf("********************\n");
}

//int main()
//{
//	int input = 0;
//	do
//	{
//		meun();
//		printf("请输入选项：");
//		scanf("%d", &input);
//
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		//pfArr的作用，相当于跳板 转移表-《C和指针》
//		int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };//函数指针数组
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret=pfArr[input](x, y);//pfArr[input]表示的是数组下标 指向的是函数地址 
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	do
//	{
//		meun();
//		printf("请输入选项：");
//		scanf("%d", &input);
//
//		int(*pfArr[5])(int ,int) = { 0,Add,Sub,Mul,Div };
//
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret=(pfArr[input])(x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//		{
//			printf("选项错误，请重新选择\n");
//		}
//
//
//	} while (input);
//	return 0;
//}
int Cacl(int(*pf)(int ,int))
{
	int x = 0;
	int y = 0;
	printf("请输入操作数：");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}
int main()
{
	int input = 0;
	int ret = 0;
	do
	{
		meun();
		printf("请输入你的选项：");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ret=Cacl(Add);//函数调用
			printf("ret=%d\n", ret);
			break;
		case 2:
			ret = Cacl(Sub);
			printf("ret=%d\n", ret);
			break;
		case 3:
			ret = Cacl(Mul);
			printf("ret=%d\n", ret);
			break;
		case 4:
			Cacl(Div);
			printf("ret=%d\n", ret);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}


	} while (input);
	return 0;
}
