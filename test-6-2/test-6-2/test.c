#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	short s = 5;
//	int a = 3;
//	printf("%d\n", sizeof(s = a + 6));//2
//	printf("%d\n", s);//5 sizeof�ڲ��ı��ʽ�ǲ������
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&arr + 1);
//	printf("%d %d\n", *(arr + 1), *(ptr - 1));
//	return 0;
//}

//��֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int num;
//	char* pcname;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
//����p��ֵΪ0x100000 ���±��ʽ��ֵ�ֱ�Ϊ���٣�

//int main()
//{
//	printf("%p\n", p + 0x1);//0x1��16���Ƶ�1������p+0x1�ȼ���p+1 p�ǽṹ�����͵�ָ�������+1
//	//����һ���ṹ�����͵Ĵ�С20�ֽ� 0x100000+20=0x100014
//	printf("%p\n",(unsigned long) p + 0x1);//0x100001 p��ǿ������ת����unsigned long 
//	//��ʱp��һ������ ���ͱ���+1 ����+1 0x100000+0x1==0x100001
//	printf("%p\n",(unsigned int*) p + 0x1);
//	//p��ǿ������ת����unsigned int* ��һ������ָ��+1������һ�����͵Ĵ�С4���ֽ�0x100000+4=0x100004
//	return 0;
//}


//int main()
//{
//	int arr[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&arr + 1);
//	int* ptr2 = (int)((int)arr + 1);
//
//	printf("%#x %#x\n", ptr1[-1], *ptr2);//0x00000004 0x00000002
//	//#���ӡ��0x
//	return 0;
//}

// С���ֽ���洢(��λ�洢�ڵ͵�ַ������λ�洢�ڸߵ�ַ��)
//�͵�ַ   -------------------------  �ߵ�ַ
//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//(&arr+1)ȡ����04 00 00 00 ����ĵ�ַ ptr[-1]==arr[3] ��16������ʽ��ӡ��������0x00000004

//int main()
//{
//	int arr[5][5];
//	int(*p)[4];
//	p = arr[0];
//	printf("%p  &d\n", &p[4][2] - &arr[4][2], &p[4][2] - &arr[4][2]);//ָ��-ָ��=Ԫ�ظ���
//	return 0;
//}

//���������
int main()
{
	char* a[] = { "work","at","alibaba" };
	char** pa = a;
	pa++;
	printf("%s\n", *pa);//at
	return 0;
}

