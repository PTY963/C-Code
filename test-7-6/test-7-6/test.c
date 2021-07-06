#define _CRT_SECURE_NO_WARNINGS 1
//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ����������������
//���Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
//����Լ������������ظ�Ԫ�ء�
#include<stdio.h>
int searchInsert(int* arr, int numsSize, int target)
{
	//���ֲ��ҷ�
	int left = 0;
	int right = numsSize - 1;

	while (left <= right)//һ����ȣ��ͱ���û���ҵ�
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