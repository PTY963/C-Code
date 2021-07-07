#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//    int total = 0;
//    for (int i = 0, j = 5; total < 10 || j > 3; ++i, --j) {
//        total += (i + j);
//    }
//    return 0;
//}

//int main()
//{
//    int sum = 0;
//    int i = 0, j = 0;
//
//    for (j = 0; j < 6; j++)
//    {
//        if (j % 2)continue;
//        sum++;
//    }
//
//    printf("sum=%d", sum);
//
//    return 0;
//}

//int main()
//{
//	int a[] = { 4,0,2,3,1 }, i, j, t;
//
//	for (i = 1; i < 5; i++)
//
//	{
//
//		t = a[i];
//
//		j = i - 1;
//
//		while (j >= 0 && t > a[j])
//
//		{
//
//			a[j + 1] = a[j];
//
//			--j;
//
//		}
//
//		a[j + 1] = t;
//
//	}
//	return 0;
//}


//int func(x)//x=9981
//{
//    int countx = 0;
//    while (x)
//    {
//        countx++;
//        x = x & (x - 1);//x & (x - 1)的效果是让x的二进制位中1的个数
//                        //从低到高依次变为0
//    }
//    return countx;
//}
//0010011011111101
//0010011011111100
//0010011011111100

//0000 0011
//0000 1100
//0000 0011
//0000 1111

#include<stdio.h>
int main()
{
	char* str = "abcd";
	printf("%5s\n", str);//5表示输出的字符占5列，如果长度不够右对齐，左补空格
	//如果长度超过5，按原字符长，从左向右全部输出
	return 0;
}

