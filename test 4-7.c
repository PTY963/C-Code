#include<stdio.h>
//void test(void)
//{
//	int a = 1;//a�Ǿֲ��������������崴����������������
//	a++;
//	printf("%d\n", a);//��ӡ��10��2
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//void test(void)
//{
//	static int a = 1;//�ı��˾ֲ��������������ڣ��������Ǹı��˱����洢���ͣ�
//	a++;
//	printf("%d\n", a);//��ӡ��2��11
//
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//extern �����ⲿ���ŵ�
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//����
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);//�޷��������ⲿ����
//	return 0;
//}

//static����ȫ�ֱ�����ʹ�����ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���.c���ڲ�ʹ��

//����
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(10, 20);
//	printf("sum=%d\n", sum);//30
//	return 0;
//}
//Add��static����֮�󣬾Ͳ�����ʹ��


//define�����
#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	printf("%d\n", ADD(2, 3));//5
//	return 0;
//}
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));//11
//	//4*2+3=11 �����滻
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	return 0;
//}

//����һ��ѧ����������
struct Stu
{
	char name[20];
	int age;
	double score;
};
int main()
{
	struct Stu s = { "��˼��",19,90.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
	struct Stu* ps=&s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	//���چ���
	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);
	//�ṹ��ָ��->��Ա������
	return 0;
}
