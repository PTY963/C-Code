#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();//�����л�ȡ���ߴ�stdin�л�ȡ��һ���ַ�
//	//putchar(ch);//��ӡ�����ַ�
//	printf("%d\n", ch);//��ӡ����ASCII��ֵ
//	
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	
//	for (year = 1000; year<= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)))
//		{
//			printf("%d ", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	
//	return 0;
//}
//�ܱ�4���������ܱ�100�����������꣬�ܱ�400������������

//��ӡ100��200֮�������

//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)//�������0��˵������1�ͱ�������������
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//���������������Լ�� 20 40

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	if (a < b)//��֤a�Ǵ�ģ�b��С��
//	{
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//
//	while ((a != 0) && (b != 0))
//	{
//		
//	}
//	
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar) != EOF)
//	{
//		if ((ch < '0') || (ch > 9))
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)//��ӡ1-4 ��break��forѭ��������ֹ����ѭ����
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//��forѭ����ʡ�Դ����Ĺ�

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)//j�ڵ�һ�δ�ӡ��3���Ǻ�֮��j��ֵ����3�ˣ�����ȥѭ��
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//һ�������⣺ѭ�������˼���
//int main()
//{
//	int i = 0;
//	int k = 0;
//
//	for (i = 0, k = 0; k = 0; i++, k++)//ѭ��һ�ζ�û�����жϲ���Ϊ��
//	{
//		k++;
//	}
//	return 0;
//}

//����n�Ľ׳�

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//����1!+2!+3!+...+10!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 10; n++)
//	{
//		 ret = 1;
//		 for (i = 1; i < n; i++)
//	       {   
//			   //����׳�
//		       ret *= i;
//	       }
//		 sum += ret;
//	}
//	printf("%d\n", sum);
//	
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;//ret��ŵ��ǽ׳�
//		sum = sum + ret;
//	}
//	return 0;
//}

//��һ�����������в���ĳһ�����֣��۰���ң�
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//mid��Ҫ�仯�ģ���Ҫ����ѭ����
//		if (arr[mid] > k)//ֵ��ֵ�Ƚ�  �����±��ֵ�Ƚ�
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("���ҳɹ�,�±�Ϊ��%d\n", mid);
//			break;//���ҳɹ�������ѭ��
//		}
//		
//	
//
//	}
//	if (left > right)
//	{
//		printf("����ʧ��\n");
//	}
//	return 0;
//	
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)//1!+2!+31
//	{
//		ret = ret * n;//�׳�
//		sum = sum + ret;//���
//	}
//
//	return 0;
//}

//��ʾ����ַ��������ƶ������м���
//"welcome to bit!!!!!"
//"###################"

//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);//��λ�Ǻ��룬˯��
//		system("cls");//�����Ļ
//
//		left++;
//		right--;
//
//	}
//
//	printf("%s\n", arr2);
//
//	return 0;
//}