#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����һ������ x ����� x ��һ���������������� true �����򣬷��� false
//��������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������
//���磬121 �ǻ��ģ��� 123 ���ǡ�
#include<limits.h>
int  isPalindrome(int x)
{
	int dight = 0;
	int start = x;

	while (x>0)
	{
		if (dight < INT_MIN / 10 || dight>INT_MAX / 10)//��ֹ���
		{
			return 0;
		}
	
		dight = dight * 10 + x % 10;
		x = x / 10;
	}

	if (start == dight)
		return 1;
	else
		return 0;
	

}
int main()
{
	int num = 0;
	scanf("%d", &num);

	int ret = isPalindrome(num);
	if (1 == ret)
		printf("Ture\n");
	else
		printf("False\n");

	
	return 0;
}