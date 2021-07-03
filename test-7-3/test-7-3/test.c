#define _CRT_SECURE_NO_WARNINGS 1
//����һ���������� nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ�� ֻ����һ�� ��
//����ɾ����������³��ȡ�
//��Ҫʹ�ö��������ռ䣬������� ԭ�� �޸��������� ����ʹ�� O(1) ����ռ����������ɡ�
#include<stdio.h>
//˫ָ��
int removeDuplicates(int* arr, int arrSize)
{
	if (arrSize == 0)//����Ϊ��
		return 0;

	int fast = 1;//��ָ�룬ɨ������
	int slow = 1;//��ָ�룬ָ��ɸ���λ��
	while (fast < arrSize)//��ָֹ��Խ�磻fast=1�����Բ����ڵ��ڵ����
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
