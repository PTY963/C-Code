#define _CRT_SECURE_NO_WARNINGS 1
//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
//如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
//你可以假设数组中无重复元素。
#include<stdio.h>
int searchInsert(int* arr, int numsSize, int target)
{
	//二分查找法
	int left = 0;
	int right = numsSize - 1;

	while (left <= right)//一旦相等，就表明没有找到
	{
		int mid = (left + right) / 2;
		if (arr[mid] > target)
		{
			right = mid - 1;
		}
		else if (arr[mid] < target)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return left;
}
int main()
{
	int arr[] = { 1,3,5,7,9 };
	int target = 5;
	int numsSize = sizeof(arr) / sizeof(arr[0]);
	int ret = searchInsert(arr, numsSize, target);
	printf("%d\n", ret);
	return 0;
}