#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���㵱ǰ������Ĵ�С��
//int check_sys(void)
//{
//	union U
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//		printf("С���ֽ���\n");
//	else
//		printf("����ֽ���\n");
//	return 0;
//}
//������Ĵ�С����������Ա�Ĵ�С������һ����
//�������Ա�Ĵ�С������������������������ôҪ���뵽������������������

union Un
{
	char arr[5];//1
	int i;//4
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}