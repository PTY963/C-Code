#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void Swap1(int x, int y)//形参x,y是实参a,b的一份临时拷贝，改变x,y不会改变a,b
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
int main()
{
	int a = 10;
	int b = 20;
	printf("交换前：a=%d,b=%d ", a, b);

	Swap1(a, b);//传值调用
	printf("交换后：a=%d,b=%d ", a, b);//a和b并没有交换内容
	return 0;
}
void Swap2(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("交换前：a=%d b=%d\n", a, b);

	Swap2(&a, &b);//传址调用
	printf("交换后：a=%d，b=%d\n", a, b);//a和b交换成功

	return 0;
}