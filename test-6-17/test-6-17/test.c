#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//�����ʽ���ƴ����зǸ�ʽ�ַ�������ʱҲҪ����Ǹ�ʽ�ַ�
//	scanf("a=%d,b=%d", &a, &b);//a=1,b=2
//
//	int c = 0;//���ϵı�׼�У������Ķ�������ڴ�������ǰ�棬C99��׼û��
//	c = a;
//	a = b;
//	b = c;
//
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//����һ���ַ����������ַ���Ӧ��ASCII��
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//
//	printf("%d\n", ch);
//
//	return 0;
//}

//int main()
//{
//	int a = 40;
//	int c = 212;
//	int ret = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", ret);
//	return 0;
//}

//���⣺����BMIָ������������ָ������BMIָ���������ָ���ֳ�����Ӣ��Body Mass Index
//�������ع����������������ƽ���ó������֣���Ŀǰ�����ϳ��õĺ����������ݳ̶��Լ��Ƿ񽡿�
//��һ����׼����Ҫ����ͳ����;����������Ҫ�Ƚϼ�����һ���˵����ض��ڲ�ͬ�߶ȵ�����������
//����Ӱ��ʱ��BMIֵ��һ���������ɿ���ָ�ꡣ

int main()
{
	int weight = 0;
	int high = 0;
	scanf("%d %d", &weight, &high);

	double BMI = weight / ((high / 100.0) * (high / 100.0));
	printf("%.2lf\n", BMI);//������λС��
	return 0;
}