#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>
//offsetof  C语言中的宏 计算偏移量
//offset - 偏移量   of-谁的偏移量
//struct S
//{
//	char c1;//1 0
//	int i;//4 4-7
//	char c2;//1 8
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//	return 0;
//}

//位段
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//枚举
//enum Color
//{
//	Blue,//0
//	Red,//1
//	Green//2
//};
//int main()
//{
//	//enum Color c = Blue;
//  enum Color c = Color :: Bule;
//	return 0;
//}

void menu()
{
	printf("******************************\n");
	printf("****    1. add    2.sub   ****\n");
	printf("****    3. mul    4.div   ****\n");
	printf("****    0. exit           ****\n");
	printf("******************************\n");
}
enum Option
{
	exit,
	add,
	sub,
	mul,
	div
};
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择： \n");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			break;
		case sub:
			break;
		case mul:
			break;
		case div:
			break;
		case exit:
			break;
		default:
			break;

		}
	} while (input);
	
	return 0;
}