#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	float price = 0.0;
//	int month = 0;
//	int day = 0;
//	int flag = 0;
//	scanf("%f %d %d %d", &price, &month, &day, &flag);
//
//	if ((11 == month) && (11 == day))
//	{
//		price *= 0.7;
//		if (1 == flag)
//			price -= 50;
//	}
//	else if ((12 == month) && (12 == day))
//	{
//		price *= 0.8;
//		if (1 == flag)
//			price -= 50;
//	}
//
//	if (price <= 0.0)
//		price=0.00;
//	printf("%.2f", price);
//
//	return 0;
//}


//int main()
//{
//	float price = 0.0;
//	int month = 0;
//	int day = 0;
//	int flag = 0;
//	float cut = 1.0;
//	scanf("%f %d %d %d", &price, &month, &day, &flag);
//
//	if ((11 == month) && (11 == day))
//	{
//		cut = 0.7;
//	}
//	else if ((12 == month) && (12 == day))
//	{
//		cut = 0.8;
//	}
//
//	price = price * cut - flag * 50;
//
//	if (price <= 0.0)
//		price = 0.00;
//	printf("%.2f", price);
//
//	return 0;
//}

//������������һ������һ������n n(>=5)��ʾn��ѧ�����ڶ�������n��ѧ���ĳɼ� n�ķ�Χ
//�ǣ�0-100�����ÿո�ָ�
//�������������ɼ���ߵ�ǰ������ÿո����

int main()
{
	//����
	int n = 0;
	scanf("%d", &n);
	int arr[40] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	//ð������-����
	//����
	for (i = 0; i < n - 1; i++)//n������ֻ������n-1��
	{
		//һ������
		int j = 0;
		for (j = 0; j <n-1-i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	//���
	for (i = 0; i < n-1; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}


