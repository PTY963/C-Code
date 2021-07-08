#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int a[] = { 2,4,6,8,10,12,14,16,18,20,22,24 }, * q[4], k;
//	for (k = 0; k < 4; k++)
//	{
//		q[k] = &a[k * 3];
//	}
//	printf("%d\n", q[3][1]);
//	return 0;
//}

//int main()
//{ 
//	int i, j, a = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j % 2)
//				break;
//			a++;
//		}
//		a++;
//	}
//	printf("%d\n", a);
//
//}

//在一个二维数组中，每一行都按照从左到右递增的顺序排序，
//每一列都按照从上到下递增的顺序排序。请完成一个
//函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
//时间复杂度 O(row + col)
#include<stdio.h>	
int main()
{
	int arr[4][4] = { 1,2,8,9,2,4,9,12,4,7,10,13,6,8,11,15 };
	int num = 7;
	//在二维数组中查找整数
	int i = 0;//行
	int j = 3;//列
	int flag = 1;
	while (i <= 3 && j >= 0)
	{
		if (arr[i][j] > num)
			j--;
		else if (arr[i][j] < num)
			i++;
		else
		{
			printf("找到了\n");
			flag = 0;
			break;
		}
	}
	if(flag==1)
	  printf("没找到\n");
	return 0;
}
