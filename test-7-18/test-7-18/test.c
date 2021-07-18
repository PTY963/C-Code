#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//计算当前计算机的大小端
//int check_sys(void)
//{
//	union U
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//		printf("小端字节序\n");
//	else
//		printf("大端字节序\n");
//	return 0;
//}
//联合体的大小至少是最大成员的大小（但不一定）
//如果最大成员的大小不是最大对齐数的整数倍，那么要对齐到最大对齐数的整数倍处

union Un
{
	char arr[5];//1
	int i;//4
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}