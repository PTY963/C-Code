#define _CRT_SECURE_NO_WARNINGS 1
//���ݸ����������ε�3���� a b c (0<a b c<10000),���������ε��ܳ������
//���룺3  3  3
//���: circumference=9.00 area=3.90
#include<stdio.h>
#include<math.h>
//double sqrt (double x);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//
//	double circumference = a + b + c;
//	double p = (a + b + c) / 2.0;
//	double area = sqrt(p * (p - a) * (p - b) * (p - c));//sqrt�⺯��-��ƽ��
//
//	printf("circumference=%.2lf area=%.2lf", circumference, area);
//
//	return 0;
//}

//����һ������İ뾶��������������������������ʽΪ��4/3*��r3,���Ц�=3.1415926

//int main()
//{
//	double r = 0.0;
//	scanf("%lf", &r);
//
//	double pai = 3.1415926;
//	double V = (4.0 / 3) * pai * r * r * r;
//
//	printf("%.3lf\n", V);
//
//	return 0;
//}

//����ˮ�ɻ���-Lily Number:����������֣����м��ֳ��������֣����磺1461���Բ�ֳ�
//��1��461����14��61����146��1����������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		//�ж��Ƿ�ΪLily Number
//		int j = 0;
//		int sum = 0;
//		for (j = 10; j <= 10000; j *= 10)
//		{
//			sum += ((i / j) * (i % j));
//		}
//
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	//int ret = ((a % 100) + (b % 100)) % 100;
	int ret = (a + b) % 100;//��������λ����
	printf("%d\n", ret);
	return 0;
}