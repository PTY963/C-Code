#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//дһ����������������һ���ַ���������
//void reverse(char* str,int len)
//{
//	int left = 0;
//	int right = len - 1;
//	char tmp = 0;
//
//	while (left<right)
//	{
//		tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}	
//}

//int main()
//{
//	char ch[] = "abcdef";//fedcba
//	int len = strlen(ch);
//	reverse(ch,len);
//
//	printf("%s\n", ch);
//
//	return 0;
//}

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
int main()
{
	int a = 0;
	scanf("%d", &a);
	int i = 0;
	int sum = a;
	for (i = 1; i < 3; i++)
	{
		sum += sum * 10 + 2;
	}
	
	printf("%d\n", sum);
	return 0;
}
