#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//冒泡排序的思想进行升序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//确定趟数
//	for (i = 0; i < sz-1; i++)//十个元素排列九次，0-8
//	{
//		int j = 0;
//		int flag = 1;
//		//确定每一趟的比较次数
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//                flag=0;
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	
//	return 0;
//}





