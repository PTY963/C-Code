#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b==2) + (a==1) == 1
//							&& (b==2) + (e==4) == 1
//							&& (c==1) + (d==2) == 1
//							&& (c==5) + (d==3) == 1
//							&& (e==4) + (a==1) == 1)
//						{
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//���
//��ʵ������ת���ɴ��룬˼·����Щ��һ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1
//							&& (b == 2) + (e == 4) == 1
//							&& (c == 1) + (d == 2) == 1
//							&& (c == 5) + (d == 3) == 1
//							&& (e == 4) + (a == 1) == 1)
//						{
//							if(a*b*c*d*e==120)
//							    printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//һ��ָ�봫��
//void print(int* ptr, int sz)//һ��ָ�봫�Σ���һ��ָ��������
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	print(p, sz);
//	return 0;
//}

//����ָ�봫��
//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;//����Ҫȡ��ַ���������ſ��Բ���&
//	//test(pp);
//	//test(&p);//���Դ�һ��ָ��ĵ�ַ
//	int* arr[10] = { 0 };
//	test(arr);//���Դ���ָ�������������
//	printf("%d\n", a);
//	return 0;
//}

//����ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	char c = 'z';
//	char* pc = &c;
//
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;//ȡ����������ĵ�ַ������Ҫһ������ָ��������
//
//	printf("%p\n", &Add);//008613BB
//	printf("%p\n", Add);//008613BB
//	int(*pf)(int, int) = &Add;//pf����һ������ָ��
//	//&������ - ȡ�����Ǻ����ĵ�ַ
//	//������ -��ʾ�����ĵ�ַ
//	return 0;
//}

//void test(char* str)
//{
//
//}
//int main()
//{
//
//	void (*pt)(char*) = &test;
//	//pt�Ǻ���ָ�� ָ��ĺ����Ĳ�����char* ����ֵ��void
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pf)(int, int) = &Add;
//	int(*pf)(int, int) = Add;
//	int ret = (*pf)(3, 5);//�Ժ���ָ��������н����ò�����Ȼ�󴫲���,*�ǰ���
//	int ret = pf(3, 5);
//	int ret = Add(3, 5);
//	printf("%d\n", ret);
//	return 0;
//}

//��C�����ȱ�ݡ�
//int main()
//{
//	(*(void (*)())0)();//����0��ַ���ĺ������ú����޲Σ�����������void
//	//0��һ�����֣���0ǿ��ת���� void(*)()�ͣ�0���Ǻ����ĵ�ַ ��(void(*)())0
//	//���н�����*(void(*)())0�����ҵ���0��ַ���ĺ�������*(void(*)())0���е���
//	//�ͱ��(*(void (*)())0)(),��Ϊ0��ַ���ĺ����Ĳ���û�У�������()
//	return 0;
//}

//int main()
//{
//	void(*signal(int, void(*)(int)))(int);
//	//1.signal ��()�Ƚ�ϣ�����signal��һ��������
//	//2.signal��������������һ��������int�ͣ��ڶ��������Ǻ���ָ������
//	//�ú���ָ�룬ָ��һ������Ϊint������ֵΪvoid�ĺ���
//	//3.signald�ķ���ֵ������Ϊ����ָ������
//	//�ú���ָ�룬ָ��һ������Ϊint������ֵΪvoid�ĺ���
//	//signal��һ�κ�������
//	return 0;
//}

//void(*)(int) signal(int void(*)(int));//����д������⣬�����﷨��֧��

//typedef-�����ض��塢������
//typedef void(*)(int) pfun_t;//�﷨��֧��
//typedef void(*pfun_t)(int); //��ʱpfun_t==void(*)(int)
//pfun_t signal(int, pfun_t);

//����ָ������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int(*pf1)(int, int) = Add;
//	int(*pf2)(int, int) = Sub;
//	int(*pfArr[2])(int, int) = { Add,Sub };//pfArr�Ǻ���ָ������
//	//pfArr�������� 2������Ԫ�� int(*)(int,int)������Ԫ�ص�����
//	return 0;
//}

//ģ�������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*************************\n");
//	printf("***** 1.Add   2.Sub ****\n");
//	printf("***** 3.Mul   4.Div *****\n");
//	printf("******    0.exit    *****\n");
//	printf("*************************\n");
//}

//int main()
//{
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		menu();
//		printf("������ѡ�");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("�������������");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			printf("�������������");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			printf("�������������");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			printf("�������������");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("�������������ѡ��\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;
//}

//����ָ�������Ӧ��
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("*************************\n");
	printf("***** 1.Add   2.Sub ****\n");
	printf("***** 3.Mul   4.Div *****\n");
	printf("******    0.exit    *****\n");
	printf("*************************\n");
}

//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		//ת�Ʊ�-��C��ָ�롷
//		int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//		printf("������ѡ� ");
//		scanf("%d", &input);
//
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������������");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret=%d\n", ret);
//
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//		}
//		else
//		{
//			printf("ѡ�����������ѡ��\n");
//		}
//	} while (input);
//}

int Calc(int(*pf)(int, int))//pf�Ǻ���ָ�����
{
	int x = 0;
	int y = 0;

	printf("����������������:");
	scanf("%d %d", &x, &y);

	return pf(x, y);

}
int main()
{
	int input = 0;
	int ret = 0;
	do
	{
		
		menu();
		printf("������ѡ�");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ret=Calc(Add);
			printf("ret=%d\n", ret);
			break;
		case 2:
			ret=Calc(Sub);
			printf("ret=%d\n", ret);
			break;
		case 3:
			ret=Calc(Mul);
			printf("ret=%d\n", ret);
			break;
		case 4:
			ret=Calc(Div);
			printf("ret=%d\n", ret);
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}

