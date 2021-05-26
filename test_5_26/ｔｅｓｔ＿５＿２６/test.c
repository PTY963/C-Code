#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int i;//全局变量不初始化，默认是0
//int main()
//{
//	i--;//-1
//	if (i > sizeof(i))//-1>4 sizeof返回值的类型是unsigned int 算术转换
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//int main()
//{
//	//求a的前n项之和,不考虑溢出的情况
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		//算出每一项
//		ret = ret * 10 + a;
//		sum = sum +ret ;
//	}
//
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int* pend = arr + sz - 1;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//求出1-100000之间的自幂数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10000; i++)
//	{
//		//判断i是否为自幂数
//		//1.判断i是几位数 -n
//		int tmp = i;
//		int n = 1;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2.求出每一位的n次方并相加
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, n);//pow是一个求次方的库函数
//			tmp = tmp / 10;
//		}
//		
//		//3.判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include<string.h>
//#include<assert.h>
//void ReverseString(char* str)
//{
//	assert(str);//养成良好习惯
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "zhang";//hnahz
//	ReverseString(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//求出0～100000之间的所有自幂数并输出
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10000; i++)
//	{
//		//判断i是否是自幂数
//		//1.判断i的位数-n次方
//		int tmp = i;
//		int n = 1;//每个数字，最低是一位数
//		while (tmp / 10)
//		{
//			n++;//几位数就乘上几次方
//			tmp = tmp / 10;
//		}
//		//2.得到i的每一位，乘上n次方后，相加
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		//3.相加后的值和i比较，相等就是自幂数
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//1.上
//	int i = 0;
//	for (i = 0; i < line; i++)//打印每一行
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0;j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j<1+2*i; j++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	
//	//2.下
//	for (i = 0; i < line - 1; i++)//打印每一行
//	{
//		//空格
//		int j = 0;
//		for (j = 0;j<=i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0;j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	return 0;
//}

//喝汽水，一瓶汽水1块钱，两个空瓶可以换1瓶汽水，给20块钱，可以喝几瓶汽水（编程实现）
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	
//	int total = money;//total表示喝的汽水总数，初始值取决于money
//	int empty = money;//empty表示空瓶数，初始值取决于money
//
//	//开始置换
//	while (empty>=2)//empty必须大于等于2
//	{
//		total =total+ empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("%d\n", total);
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//
//	int total = 0;
//	if (money > 0)//等于0 会出现负数
//	{
//		total = 2 * money - 1;
//	}
//
//	printf("%d\n", total);
//	return 0;
//}

//数组的奇数放在偶数的前面
//从数组前面找 找到奇数 指针加1 找到偶数
//从数组后面找 找到偶数 指针加1 找到奇数
//把找到的奇数和偶数交换
void Move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{

		//找偶数 循环没进去 找到了
		while ((left < right) && (arr[left] % 2 == 1))//left<right 防止全是奇数 数组越界
		{
			left++;
		}

		//找奇数 循环没进去 找到了
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}

		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Move(arr, sz);
	print(arr, sz);
	return 0;
}