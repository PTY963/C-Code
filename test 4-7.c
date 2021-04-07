#include<stdio.h>
//void test(void)
//{
//	int a = 1;//a是局部变量，进函数体创建，出函数体销毁
//	a++;
//	printf("%d\n", a);//打印出10个2
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//void test(void)
//{
//	static int a = 1;//改变了局部变量的生命周期（本质上是改变了变量存储类型）
//	a++;
//	printf("%d\n", a);//打印出2到11
//
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//extern 声明外部符号的
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//声明
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);//无法解析的外部符号
//	return 0;
//}

//static修饰全局变量，使得这个全局变量只能在自己所在的源文件（.c）内部使用

//声明
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(10, 20);
//	printf("sum=%d\n", sum);//30
//	return 0;
//}
//Add被static修饰之后，就不可以使用


//define定义宏
#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	printf("%d\n", ADD(2, 3));//5
//	return 0;
//}
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));//11
//	//4*2+3=11 宏是替换
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	return 0;
//}

//定义一个学生变量类型
struct Stu
{
	char name[20];
	int age;
	double score;
};
int main()
{
	struct Stu s = { "张思佳",19,90.5 };//结构体的创建和初始化
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
	struct Stu* ps=&s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	//过于啰嗦
	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);
	//结构体指针->成员变量名
	return 0;
}
