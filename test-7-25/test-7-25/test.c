#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//union Un
//{
//	short s[7];//14
//	int n;//4/8 4
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));//16
//	return 0;
//}

//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n" , a.k);
//    return 0;
//}

//ģ��ʵ��atoi  -  ����ָoffer��
#include<limits.h>
#include<ctype.h>
enum State
{
	LNVAILD,//0 �Ƿ�
	VAILD//1 �Ϸ�
};

//state ��¼���Ǻ��� my_atoi �ķ���ֵ�ǺϷ�ת����ֵ�����ǷǷ���״̬
enum State state = LNVAILD;

int my_atoi(const char* str)
{
	int flag = 1;
	
	if (*str == NULL)//1.��ָ������
		return 0;
	if (*str == '\0')//2.���ַ��������
		return 0;
	while (isspace(*str))//3.�հ��ַ������
	{
		str++;
	}
	//4.+/-�����
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
		
   
	//������� �������ַ�ת��������
	long long  n = 0;//�����int���ͣ��Ͳ����ڳ���int��Χ�����
	while (isdigit(*str))
	{
		n = n * 10 + flag * (*str - '0');//'1'-'0' 49-48=1
		if (n > INT_MAX || n < INT_MIN)//������Χ�����
			return 0;
		str++;
	}
	//����whileѭ�� Ҫô��'\0',Ҫô���Ƿ������ַ�
	if (*str == '\0')
	{
		state = VAILD;
		return (int)n;
	}
	else
	{
		//�Ƿ������
		return (int)n;
	}


}
int main()
{
	//1.��ָ��
	//2.���ַ���
	//3.�����Ƿ��ַ������������ַ�֮����ַ���
	//4.�����˷�Χ
	const char* p = "1234";
	int ret = my_atoi(p);//�������ַ�ת��������
	if (state == VAILD)
		printf("������ת���� %d\n", ret);
	else
		printf("�Ƿ���ת���� %d\n", ret);
	return 0;
}