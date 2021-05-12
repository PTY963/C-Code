#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//这里的p就是一个野指针
//	int* p;//p是一个局部指针变量，局部变量没有初始化，默认一个随机值，p就把随机值当地址
//	*p = 20;//非法访问内存
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)//指针越界访问
//	{
//		 *p = i;
//		  p++;
//	}
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p=test();
//	*p = 20;//野指针，p指向的空间被释放
//	return 0;
//}

//int main()
//{
//	//不知道初始化什么的时候
//	int* p = NULL;//如果当前不知道给指针初始化什么地址，就初始化为NULL
//
//	//明确找到初始化什么的时候
//	int a = 10;
//	int* pa = &a;
//	return 0;
//
//}

//int main()
//{
//	int* p = NULL;
//
//	if (p != NULL)//检查指针的有效性
//	{
//		*p = 10;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//数组的地址是由低地址-高地址
//	int* p = arr;
//	int* pend = arr + 9;
//
//	while (p<=pend)//指针关系运算
//	{
//		printf("%d\n", *p);
//		p++;//指针+整数
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//指针-指针得到的是两个指针之间的元素个数
//	printf("%d\n", &arr[9] - &arr[0]);
//
//	return 0;
//}

//计数器的方法
//int my_strlen(char* str)
//{
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return 0;
//}

//指针-指针的方法
//my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;//'\0'之前的指针-开始指针=两指针
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//
//	return 0;
//}

//my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}//str一旦跳出循环，意味着str已经到了'\0'的前面
//	return str - start;//高地址（指针）-低地址（指针）=两指针之间的元素个数
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[2]);
//	printf("%d\n", 2[arr]);//[]是操作符，2和arr是操作数
//	//arr[2]-->*(arr+2) 在编译的时候转化成这样，加法支持交换律
//	int* p = arr;
//	printf("%d\n", *(p + 2));
//	printf("%d\n", p[2]);
//	printf("%d\n", 2[p]);
//
//	return 0;
//}
//struct B
//{
//	char c;
//	short s;
//};
//struct Stu//类型
//{
//	//成员变量
//	struct B b;
//	char name[20];
//	int age;
//	char id[20];
//}s1,s2;//s1 s2也是结构体变量，只不过是全局变量
//int main()
//{
//	struct Stu s = { {'c',20},"张思佳",19,"201942308559" };//对象，s是局部变量
//	printf("%c\n", s.b.c);
//	return 0;
//}
//struct B
//{
//	char c;
//	short s;
//};
//struct Stu//类型
//{
//	//成员变量
//	struct B b;
//	char name[20];
//	int age;
//	char id[20];
//};

//void print1(struct Stu t)
//{
//	printf("%c,%d,%s,%d,%s\n", t.b.c, t.b.s, t.name, t.age, t.id);
//}
//
//void print2(struct Stu* p)
//{
//	printf("%c,%d,%s,%d,%s\n", p->b.c, p->b.s, p->name, p->age, p->id);
//}
//int main()
//{
//	struct Stu s = { {'c',20},"zsj",19,"201942308559" };
//	print1(s);//传值调用
//	print2(&s);//传址调用
//	return 0;
//}