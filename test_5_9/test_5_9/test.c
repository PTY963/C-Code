#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//自己定义的一种类型
//struct Book
//{
//	//结构体成员（成员变量）
//	char name[20];
//	char id[10];
//	int price;
//};
//
//int main()
//{
//	struct Book b = { "C语言","C22019423",55 };
//	struct Book* pb = &b;
//
//	printf("书名: %s\n", pb->name);
//	printf("书号: %s\n", pb->id);
//	printf("价格: %d\n", pb->price);//结构体指针->成员名
//
//	/*printf("书名: %s\n", (*pb).name);
//	printf("书号: %s\n", (*pb).id);
//	printf("价格: %d\n", (*pb).price);*/
//
//	/*printf("书名: %s\n", b.name);
//	printf("书号: %s\n", b.id);
//	printf("价格: %d\n", b.price);*///结构体变量名.成员名
//
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000011
//	char b = 127;
//	//01111111
//	char c = a + b;//a和b的长度都没有达到一个int的长度，发生整形提升
//	//整形提升是按照变量数据类型的符号位提升的
//	//00000000000000000000000000000011-a
//	//00000000000000000000000001111111-b
//	//00000000000000000000000010000010-c c是char类型，发生截断
//	//10000010-c 130
//	printf("%d\n", c);//-126
//	//发生整形提升 符号位是1 补齐1
//	//11111111111111111111111110000010-补码 最终打印出来需要原码
//	//11111111111111111111111110000001-反码 -1
//	//10000000000000000000000001111110-原码 符号位不变，其他位按位取反 -126
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");//c
//
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4 c参与了运算，发生了整形提升
//	printf("%u\n", sizeof(-c));//4
//	printf("%u\n", sizeof(!c));//1 gcc 4 gcc更加符合C语言标准
//	return 0;
//}

//int main()
//{
//	printf("%u\n", sizeof(unsigned int));
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);//不能确定唯一的计算路径，问题代码
//	printf("%d\n", ret);//12
//
//	return 0;
//}

//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	reverse(arr, sz);
//	
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	return 0;
//}

