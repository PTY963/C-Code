#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//枚举类型
//声明枚举类型
enum Color
{
	Red=5,//0
	Green,//1
	Blue//2
};
int main()
{
	enum Color c =Red;
	printf("%d\n", Red);
	printf("%d\n", Blue);
	printf("%d\n", Green);
	return 0;
}

void menu()
{
	printf("*************************\n");
	printf("**** 1.Add     2.Sub ****\n");
	printf("**** 3.Mul     4.Div ****\n");
	printf("*****     0.Exit     ****\n");
	printf("*************************\n");
}
enum Option
{
	Exit,//0
	Add,//1
	Sub,//2
	Mul,//3
	Div//4
};
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", input);
//		switch (input)
//		{
//		case Add:
//			break;
//		case Sub:
//			break;
//		case Mul:
//			break;
//		case Div:
//			break;
//		case Exit:
//			break;
//		default:
//			break;
//		}
//
//	} while (input);
//	return 0;
//}


//这些是没有类型的，而枚举是有类型的
#define Red 1
#define Green 2
#define Blue 3