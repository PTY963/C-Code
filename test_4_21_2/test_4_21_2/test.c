#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

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
//	return count;
//}

//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str)-1;//�±�-1
//
//	while (left < right)//û��=�ţ�����ַ����������м���Ǹ��ַ�����Ҫ����
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}

//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str)-1;
//
//	while (left < right)//û��=�ţ�����ַ����������м���Ǹ��ַ�����Ҫ����
//	{
//		char tmp = *(str+left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}

//int main()
//{
//	char arr[] = "abcdef";
//
//	reverse_string(arr);//�������ã���ַ���ã���������ʾ��Ԫ�ص�ַ
//
//	printf("%s\n", arr);//fedcba
//
//	return 0;
//}


//�ݹ�ķ���ʵ������
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = str[len - 1];
//	str[len - 1] = '\0';
//	//�������� �ƽ���������
//	if (my_strlen(str+1)>=2)
//	{
//		reverse_string(str + 1);
//	}
//	
//	str[len - 1] = tmp;
//}

//int main()
//{
//	char arr[] = "abcdef";
//
//	reverse_string(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}



//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = str[len - 1];
//	str[len - 1] = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	str[len - 1] = tmp;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
//�ж�i�Ƿ�������
//����ǣ�����1 ���Ƿ���0
//#include<math.h>
//int print_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int ret=print_prime(i);
//		if (1 == ret)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1.0;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else 
//		return 1.0 * Pow(n, -k);
//
//}

//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//
//	double ret=Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char ch1[] = "bit";
//	char ch2[] = { 'b','i','t' };//�ҵ�\0�Ž���
//
//	//printf("%s\n", ch1);
//	//printf("%s\n", ch2);
//
//	printf("%d\n", strlen(ch1));//3
//	printf("%d\n", strlen(ch2));//���ֵ
//
//	return 0;
//}


//int main()
//{
//	printf("%x\n", 0x12);//16���ƴ�ӡ 12
//	printf("%p\n", 0x12);//����ַ��ʽ��ӡ 00000012
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}

//һά�������ڴ��еĴ洢�������ģ���
//���������±����������ַ���ɵ͵��߱仯��

int main()
{
	int arr[10] = { 1,2,3,4,56,7,8,9,10 };
	int* p = arr;//��������ʾ��Ԫ�ص�ַ
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}