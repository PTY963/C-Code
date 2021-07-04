#define _CRT_SECURE_NO_WARNINGS 1
//����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ�
//�������Ƴ���������³��ȡ�
//���룺nums = [3, 2, 2, 3], val = 3
//�����2, nums = [2, 2]
#include<stdio.h>
#include<assert.h>
//˫ָ��
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

//˫ָ���Ż�
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
		}//���nums[right-1]ǡ�õ���val,��Ҫ�ٸ���һ�Σ�����left����Ų��
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