#define _CRT_SECURE_NO_WARNINGS 1
//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，
//并返回移除后数组的新长度。
//输入：nums = [3, 2, 2, 3], val = 3
//输出：2, nums = [2, 2]
#include<stdio.h>
#include<assert.h>
//双指针
//int removeElement(int* nums, int numsSize, int val)
//{
//	assert(nums != NULL);
//
//	if (numsSize == 0)
//		return 0;
//
//	int fast = 0;
//	int slow = 0;
//	while (fast < numsSize)
//	{
//		if (nums[fast] != val)
//		{
//			nums[slow] = nums[fast];
//			slow++;
//		}
//		fast++;
//	}
//
//	return slow;
//}

//双指针优化
int removeElement(int* nums, int numsSize, int val)
{
	assert(nums != NULL);

	if (numsSize == 0)
		return 0;

	int left = 0;
	int right = numsSize;
	while (left < right)
	{
		if (nums[left] == val)
		{
			nums[left] = nums[right];
			right--;
		}//如果nums[right-1]恰好等于val,需要再覆盖一次，但是left不能挪动
		else
		{
			left++;
		}
	}

	return left;

}
int main()
{
	int nums[] = { 3,2,2,2,3,4,4,4,8};
	int val = 3;
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int ret = removeElement(nums, numsSize, 3);
	printf("%d\n", ret);
	return 0;
}