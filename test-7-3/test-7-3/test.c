#define _CRT_SECURE_NO_WARNINGS 1
//给你一个有序数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，
//返回删除后数组的新长度。
//不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
#include<stdio.h>
//双指针
int removeDuplicates(int* arr, int arrSize)
{
	if (arrSize == 0)//数组为空
		return 0;

	int fast = 1;//快指针，扫描数组
	int slow = 1;//慢指针，指向可覆盖位置
	while (fast < arrSize)//防止指针越界；fast=1，所以不存在等于的情况
	{
		if (arr[fast] != arr[fast - 1])
		{
			arr[slow] = arr[fast];
			slow++;
		}
		fast++;
	}

	return slow;
}

int main()
{
	int arr[] = { 0,0,1,1,1,2,2,3,3,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int newLen = removeDuplicates(arr, sz);
	printf("%d\n", newLen);
	return 0;
}
