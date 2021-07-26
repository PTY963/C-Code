#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
编写一个函数找出这两个只出现一次的数字。
#endif

//void find(int arr[], int sz, int* px ,int* py)
//{
//	//1.把数组的所有数字异或在一起（得到一个不为0的数字）
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp ^= arr[i];
//	}
//	//2.把异或后的数字从低位到高位遍历，找出为1的那一位
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((tmp << i) & 1)== 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//3.根据为1的那一位将数组重新分成两个组
//	int arr1 = 0;
//	int arr2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] << pos) & 1) == 1)
//			arr1 ^= arr[i];
//		else
//			arr2 ^= arr[i];	
//	}
//
//	*px = arr1;
//	*py = arr2;
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//1.传 x和y 的地址
//	//x和y为返回型参数
//	//2.传一个数组
//	//int diff[2] 把arr1和arr2放入diff中
//	int x = 0;
//	int y = 0;
//	find(arr, sz, &x ,&y);
//	printf("%d %d\n", x, y);
//	return 0;
//}

//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。
//00000000 00000000 00000000 00001010
//偶数位向右移动1位  奇数位向左移动1位

//把所有的偶数位拿出来之后向右移动1位 把所有恶奇数位拿出来向左移动1位 再相加
//#define SWAP(N) ((N & 0xaaaaaaaa) >> 1) + ((N & 0x55555555) << 1)
//int main()
//{
//	int a = 10;
//	int ret = SWAP(a);
//	printf("%d\n", ret);
//	return 0;
//}

#include<stddef.h>
#define OFFSETOF(struct_name, mem_name) (int)&(((struct_name*)0)->mem_name)
struct A
{
	int a;//0
	short b;//2-3
	int c;//4-7
	char d;//8
};
//int main()
//{
//	printf("%d\n", OFFSETOF(struct A, a));
//	return 0;
//}
int main()
{
	printf("%d\n", OFFSETOF(struct A, a));
	printf("%d\n", OFFSETOF(struct A, b));
	printf("%d\n", OFFSETOF(struct A, c));
	printf("%d\n", OFFSETOF(struct A, d));
	return 0;
}