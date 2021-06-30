#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//±©Á¦Ã¶¾Ù
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int i = 0;
	for (i = 0; i < numsSize-1; i++)
	{
		int j = 0;
		for (j = i + 1; j < numsSize; j++)
		{
			if (target - nums[i] == nums[j])
			{
				returnSize[0] = i;
				returnSize[1] = j;
				return returnSize;
			}
				
		}
	}
	return returnSize;
}
//#include<stdlib.h>
//int* twoSum(int* nums, int numsSize, int target, int* returnSize)
//{
//	int i = 0;
//	int* ret = NULL;
//	for (i = 0; i < numsSize - 1; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j < numsSize; j++)
//		{
//			if (target - nums[i] == nums[j])
//			{
//				ret = (int*)malloc(sizeof(int) * 2);
//				ret[0] = i;
//				ret[1] = j;
//				*returnSize = 2;
//				return ret;
//			}
//		}
//	}
//	return ret;
//}

int main()
{
	int nums[] = { 2,7,11,15 };
	int target = 9;
	int returnSize[2] = { 0 };
	twoSum(nums, 4, 9, returnSize);
	int i = 0;
	for (i = 0; i < 2; i++)
	{
		printf("%d ", returnSize[i]);
	}
	return 0;
}



