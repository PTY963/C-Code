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

//��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������
//ÿһ�ж����մ��ϵ��µ�����˳�����������һ��
//����������������һ����ά�����һ���������ж��������Ƿ��и�������
//ʱ�临�Ӷ� O(row + col)
#include<stdio.h>	
int main()
{
	int arr[4][4] = { 1,2,8,9,2,4,9,12,4,7,10,13,6,8,11,15 };
	int num = 7;
	//�ڶ�ά�����в�������
	int i = 0;//��
	int j = 3;//��
	int flag = 1;
	while (i <= 3 && j >= 0)
	{
		if (arr[i][j] > num)
			j--;
		else if (arr[i][j] < num)
			i++;
		else
		{
			printf("�ҵ���\n");
			flag = 0;
			break;
		}
	}
	if(flag==1)
	  printf("û�ҵ�\n");
	return 0;
}
