#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//�����p����һ��Ұָ��
//	int* p;//p��һ���ֲ�ָ��������ֲ�����û�г�ʼ����Ĭ��һ�����ֵ��p�Ͱ����ֵ����ַ
//	*p = 20;//�Ƿ������ڴ�
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)//ָ��Խ�����
//	{
//		 *p = i;
//		  p++;
//	}
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p=test();
//	*p = 20;//Ұָ�룬pָ��Ŀռ䱻�ͷ�
//	return 0;
//}

//int main()
//{
//	//��֪����ʼ��ʲô��ʱ��
//	int* p = NULL;//�����ǰ��֪����ָ���ʼ��ʲô��ַ���ͳ�ʼ��ΪNULL
//
//	//��ȷ�ҵ���ʼ��ʲô��ʱ��
//	int a = 10;
//	int* pa = &a;
//	return 0;
//
//}

//int main()
//{
//	int* p = NULL;
//
//	if (p != NULL)//���ָ�����Ч��
//	{
//		*p = 10;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����ĵ�ַ���ɵ͵�ַ-�ߵ�ַ
//	int* p = arr;
//	int* pend = arr + 9;
//
//	while (p<=pend)//ָ���ϵ����
//	{
//		printf("%d\n", *p);
//		p++;//ָ��+����
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//ָ��-ָ��õ���������ָ��֮���Ԫ�ظ���
//	printf("%d\n", &arr[9] - &arr[0]);
//
//	return 0;
//}

//�������ķ���
//int my_strlen(char* str)
//{
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return 0;
//}

//ָ��-ָ��ķ���
//my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;//'\0'֮ǰ��ָ��-��ʼָ��=��ָ��
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//
//	return 0;
//}

//my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}//strһ������ѭ������ζ��str�Ѿ�����'\0'��ǰ��
//	return str - start;//�ߵ�ַ��ָ�룩-�͵�ַ��ָ�룩=��ָ��֮���Ԫ�ظ���
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[2]);
//	printf("%d\n", 2[arr]);//[]�ǲ�������2��arr�ǲ�����
//	//arr[2]-->*(arr+2) �ڱ����ʱ��ת�����������ӷ�֧�ֽ�����
//	int* p = arr;
//	printf("%d\n", *(p + 2));
//	printf("%d\n", p[2]);
//	printf("%d\n", 2[p]);
//
//	return 0;
//}
//struct B
//{
//	char c;
//	short s;
//};
//struct Stu//����
//{
//	//��Ա����
//	struct B b;
//	char name[20];
//	int age;
//	char id[20];
//}s1,s2;//s1 s2Ҳ�ǽṹ�������ֻ������ȫ�ֱ���
//int main()
//{
//	struct Stu s = { {'c',20},"��˼��",19,"201942308559" };//����s�Ǿֲ�����
//	printf("%c\n", s.b.c);
//	return 0;
//}
//struct B
//{
//	char c;
//	short s;
//};
//struct Stu//����
//{
//	//��Ա����
//	struct B b;
//	char name[20];
//	int age;
//	char id[20];
//};

//void print1(struct Stu t)
//{
//	printf("%c,%d,%s,%d,%s\n", t.b.c, t.b.s, t.name, t.age, t.id);
//}
//
//void print2(struct Stu* p)
//{
//	printf("%c,%d,%s,%d,%s\n", p->b.c, p->b.s, p->name, p->age, p->id);
//}
//int main()
//{
//	struct Stu s = { {'c',20},"zsj",19,"201942308559" };
//	print1(s);//��ֵ����
//	print2(&s);//��ַ����
//	return 0;
//}