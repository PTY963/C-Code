#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int score = 0;
//		scanf("%d", &score);
//		sum += score;
//	}
//	printf("%.1f\n", sum / 5.0);
//	return 0;
//}

//����һ��ʮ������a��һ���˽�������b ���a+b��ʮ���ƽ��
//������ʮ�����ơ��˽��ơ�ʮ���ƶ������ݵı����ʽ���ˣ����������ݵĴ洢��ʽ
int main()
{
	int a = 0;
	int b = 0;
	scanf("%x %o", &a, &b);
	printf("%d\n", a + b);
	return 0;
}