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
//	int right = my_strlen(str)-1;//下标-1
//
//	while (left < right)//没有=号，如果字符是奇数，中间的那个字符不需要交换
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
//	while (left < right)//没有=号，如果字符是奇数，中间的那个字符不需要交换
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
//	reverse_string(arr);//函数调用，传址调用，数组名表示首元素地址
//
//	printf("%s\n", arr);//fedcba
//
//	return 0;
//}


//递归的方法实现逆序
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = str[len - 1];
//	str[len - 1] = '\0';
//	//限制条件 逼近限制条件
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

//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
//判断i是否是素数
//如果是，返回1 不是返回0
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
//	char ch2[] = { 'b','i','t' };//找到\0才结束
//
//	//printf("%s\n", ch1);
//	//printf("%s\n", ch2);
//
//	printf("%d\n", strlen(ch1));//3
//	printf("%d\n", strlen(ch2));//随机值
//
//	return 0;
//}


//int main()
//{
//	printf("%x\n", 0x12);//16进制打印 12
//	printf("%p\n", 0x12);//按地址形式打印 00000012
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

//一维数组在内存中的存储是连续的！！
//随着数组下标的增长，地址是由低到高变化的

int main()
{
	int arr[10] = { 1,2,3,4,56,7,8,9,10 };
	int* p = arr;//数组名表示首元素地址
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}