#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b==2) + (a==1) == 1
//							&& (b==2) + (e==4) == 1
//							&& (c==1) + (d==2) == 1
//							&& (c==5) + (d==3) == 1
//							&& (e==4) + (a==1) == 1)
//						{
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//穷举
//将实际问题转换成代码，思路上有些不一样
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1
//							&& (b == 2) + (e == 4) == 1
//							&& (c == 1) + (d == 2) == 1
//							&& (c == 5) + (d == 3) == 1
//							&& (e == 4) + (a == 1) == 1)
//						{
//							if(a*b*c*d*e==120)
//							    printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//一级指针传参
//void print(int* ptr, int sz)//一级指针传参，用一级指针来接收
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	print(p, sz);
//	return 0;
//}

//二级指针传参
//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;//变量要取地址，数组名才可以不用&
//	//test(pp);
//	//test(&p);//可以传一级指针的地址
//	int* arr[10] = { 0 };
//	test(arr);//可以传，指针数组的数组名
//	printf("%d\n", a);
//	return 0;
//}

//函数指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	char c = 'z';
//	char* pc = &c;
//
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;//取出的是数组的地址，所以要一个数组指针来接收
//
//	printf("%p\n", &Add);//008613BB
//	printf("%p\n", Add);//008613BB
//	int(*pf)(int, int) = &Add;//pf就是一个函数指针
//	//&函数名 - 取出的是函数的地址
//	//函数名 -表示函数的地址
//	return 0;
//}

//void test(char* str)
//{
//
//}
//int main()
//{
//
//	void (*pt)(char*) = &test;
//	//pt是函数指针 指向的函数的参数是char* 返回值是void
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pf)(int, int) = &Add;
//	int(*pf)(int, int) = Add;
//	int ret = (*pf)(3, 5);//对函数指针变量进行解引用操作，然后传参数,*是摆设
//	int ret = pf(3, 5);
//	int ret = Add(3, 5);
//	printf("%d\n", ret);
//	return 0;
//}

//《C陷阱和缺陷》
//int main()
//{
//	(*(void (*)())0)();//调用0地址处的函数，该函数无参，返回类型是void
//	//0是一个数字，把0强制转换成 void(*)()型，0就是函数的地址 对(void(*)())0
//	//进行解引用*(void(*)())0，就找到了0地址处的函数，对*(void(*)())0进行调用
//	//就变成(*(void (*)())0)(),因为0地址处的函数的参数没有，所以是()
//	return 0;
//}

//int main()
//{
//	void(*signal(int, void(*)(int)))(int);
//	//1.signal 和()先结合，表明signal是一个函数名
//	//2.signal有两个参数，第一个参数是int型，第二个参数是函数指针类型
//	//该函数指针，指向一个参数为int，返回值为void的函数
//	//3.signald的返回值的类型为函数指针类型
//	//该函数指针，指向一个参数为int，返回值为void的函数
//	//signal是一次函数声明
//	return 0;
//}

//void(*)(int) signal(int void(*)(int));//这样写更好理解，但是语法不支持

//typedef-类型重定义、重命名
//typedef void(*)(int) pfun_t;//语法不支持
//typedef void(*pfun_t)(int); //此时pfun_t==void(*)(int)
//pfun_t signal(int, pfun_t);

//函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int(*pf1)(int, int) = Add;
//	int(*pf2)(int, int) = Sub;
//	int(*pfArr[2])(int, int) = { Add,Sub };//pfArr是函数指针数组
//	//pfArr是数组名 2是数组元素 int(*)(int,int)是数组元素的类型
//	return 0;
//}

//模拟计算器
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*************************\n");
//	printf("***** 1.Add   2.Sub ****\n");
//	printf("***** 3.Mul   4.Div *****\n");
//	printf("******    0.exit    *****\n");
//	printf("*************************\n");
//}

//int main()
//{
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		menu();
//		printf("请输入选项：");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("请输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			printf("请输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			printf("请输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			printf("请输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误，请重新选择\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;
//}

//函数指针数组的应用
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

void menu()
{
	printf("*************************\n");
	printf("***** 1.Add   2.Sub ****\n");
	printf("***** 3.Mul   4.Div *****\n");
	printf("******    0.exit    *****\n");
	printf("*************************\n");
}

//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		//转移表-《C和指针》
//		int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//		printf("请输入选项： ");
//		scanf("%d", &input);
//
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret=%d\n", ret);
//
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//		}
//		else
//		{
//			printf("选择错误，请重新选择\n");
//		}
//	} while (input);
//}

int Calc(int(*pf)(int, int))//pf是函数指针变量
{
	int x = 0;
	int y = 0;

	printf("请输入两个操作数:");
	scanf("%d %d", &x, &y);

	return pf(x, y);

}
int main()
{
	int input = 0;
	int ret = 0;
	do
	{
		
		menu();
		printf("请输入选项：");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ret=Calc(Add);
			printf("ret=%d\n", ret);
			break;
		case 2:
			ret=Calc(Sub);
			printf("ret=%d\n", ret);
			break;
		case 3:
			ret=Calc(Mul);
			printf("ret=%d\n", ret);
			break;
		case 4:
			ret=Calc(Div);
			printf("ret=%d\n", ret);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}

	} while (input);
	return 0;
}

