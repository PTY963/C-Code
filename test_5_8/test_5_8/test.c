#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	float a = 6.0f / 5.0f;
//	printf("%f\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 2;
//	//把a的二进制位向左移动一位
//	//00000000 00000000 00000000 00000010
//	//00000000 00000000 00000000 00000100 最高位丢弃，最低位补0
//	int b = a << 1;
//
//	printf("b=%d\n", b);//4
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//把a的二进制位向右移动一位
//	//00000000 00000000 00000000 00001010
//	//00000000 00000000 00000000 00000101
//	int b = a >> 1;
//
//	printf("b=%d\n", b);//5
//	return 0;
//}

//测试当前编译器采用的是算术右移还是逻辑右移
//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	//-1在内存中的存储是以补码的形式：
//	// 11111111 11111111 11111111 11111111
//
//	printf("b=%d\n", b);//b=-1,所以当前采用的是算术右移（左边补原符号位）
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	int b = a >> 1;
//
//	printf("a=%d\n", a);//虽然a的二进制位向右移动一位但是a的值不会改变
//	printf("b=%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;//a按位与b 位是二进制位
//	//00000000 00000000 00000000 00000011 3
//	//00000000 00000000 00000000 00000101 5 
//	//00000000 00000000 00000000 00000001
//	printf("c=%d\n", c);
//
//	return 0;
//}

//变态面试题，交换两个整型变量，不能创建第三个变量

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("a=%d,b=%d\n", a, b);
//
//	//交换
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	//有缺陷，如果数值太大会溢出
//	printf("a=%d,b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("a=%d,b=%d\n", a, b);
//
//	//交换
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	没有进位，不会产生溢出
//	printf("a=%d,b=%d\n", a, b);
//
//	return 0;
//}

//求一个整数存储在内存中的二进制中1的个数
//int main()
//{
//	int a = 13;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((13 >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int flag = 5;
//	//flag为真打印hehe
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//	//flag为假打印haha
//	if (!flag)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	/*printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);*///证明sizeof是操作符，不是函数
//
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));//int [10]是数组arr的类型
//	return 0;
//}

//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));//2
//	printf("%d\n", s);//5 sizeof括号里的表达式不参与运算，所以s的值不会改变
//
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//10000000 00000000 00000000 00000001 原码
//	//11111111 11111111 11111111 11111110 反码 符号位不变其余位按位取反
//	//11111111 11111111 11111111 11111111 补码 反码加1
//	int b = ~a;
//	//00000000 00000000 00000000 00000000
//	printf("%d\n", b);
//	printf("%d\n", a);//a还是保持不变
//
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	//把13的二进制序列的第5位置换成1
//	//0000 1101 13
//	//0001 0000 (1<<4)
//	//0001 1101 置换后
//	int b=13 | (1 << 4);
//	printf("%d\n", b);//29 
//
//	//把13的二进制序列的第5位置换成原来的0
//	//0001 1101 
//	//1110 1111 按位与 ~(1<<4)
//	//0000 1101
//	a=b & ~(1 << 4);
//	printf("%d\n", a);//13
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，后++
//	int b = ++a;//前置++，先++，再使用
//
//	printf("%d\n", a);//11
//	printf("%d\n", b);//11
//	return 0;
//}

//360笔试题
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//a的值为假，后面的不再计算
//	printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);//1 2 3 4
//
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;//a为真，后面的不再计算
//	printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);//2 2 3 4
//
//	return 0;
//}

int get_val(void);
void count_val(int a);
int main()
{
	

	/*while (a > 0)
	{
		a = get_val();
		count_val(a);
	}*/
	int a = 0;
	while ( a = get_val(), count_val(a), a > 0)
	{
		;
	}

	return 0;
}


