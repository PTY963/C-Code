#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//�ж��Ƿ���һԪ���η���
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	while (~scanf("%lf %lf %lf", &a, &b, &c))
//	{
//		if (a != 0.0)
//		{
//			//��һԪ���η���
//			double disc = b * b - 4 * a * c;
//			if (disc > 0.0)
//			{
//				printf("x1=%.2lf;x2=%.2lf;\n", (-b + sqrt(disc)) / (2 * a),
//					                          (-b - sqrt(disc)) / (2 * a));
//			}
//			else if (disc < 0.0)
//			{
//				printf("x1=%.2lf-%.2lfi;x2=%.2lf-%.2lfi\n;", (-b * (2 * a)),
//					                                sqrt(-disc) / (2 * a),
//					                                       (-b * (2 * a)),
//					                                sqrt(-disc) / (2 * a));
//			}
//			else
//			{
//				printf("x1=x2=%.2lf\n", (-b) / (2 * a));
//			}
//		}
//		else
//		{ 
//			//����һԪ���η���
//			printf("Not quadratic equation\n");
//		}
//	}
//	return 0;
//}

//һ�����߰�ʮ�� ��ʮһ��������
//�������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ�
//���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж�����
int main()
{
	int year = 0;
	int month = 0;
	int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	while (~scanf("%d %d", &year, &month))
	{
		int day = 0;
		day = arr[month - 1];//0-11
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			if (2 == month)
			{
				day = 29;
			}
		}

		printf("day=%d\n", day);
	}
	return 0;
}