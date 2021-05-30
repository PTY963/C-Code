#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。


//实现一个函数，可以左旋字符串中的k个字符

//abcdef k=4
//efabcd
//#include<string.h>
//void LeftReverseString(char* pa,int k)
//{
//	
//	int i = 0;
//	int j = 0;
//	int len = strlen(pa);
//
//	for (i = 0; i < k; i++)//旋转几个字符
//	{
//		char tmp = *pa;
//		for (j = 0; j < len - 1 - i; j++)//向前挪动几位
//		{
//			*(pa + j) = *(pa + j + 1);
//				
//		}
//		
//		
//	}
//	
//}
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//
//	char arr[] = "abcdef";
//
//	LeftReverseString(arr,k);
//
//	printf("%s\n", arr);
//	return 0;
//}

//冒泡排序
//void BubbleSort(int arr[], int sz)
//{
//	//升序
//	int i = 0;
//	//排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟
//		int j = 0;
//		for (j = 0; j<sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void print_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print_sort(arr, sz);
//	BubbleSort(arr, sz);
//	print_sort(arr, sz);
//
//	return 0;
//}

//void qsort (void* base,//待排序数据中第一个元素的地址
//            size_t num, //待排序数据的元素个数
//            size_t size,//待排序数据中，一个元素的大小，单位是字节
//            int (*compar)(const void*, const void*)//函数指针-比较两个元素的函数
//            );
#include<stdlib.h>
//void print_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_sort(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_sort(arr, sz);
//	return 0;
//}

//qsort来排序一个结构体
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int sort_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//int main()
//{
//	struct Stu s[] = { {"zhangsan",29},{"fan",20},{"yang",30} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s,sz,sizeof(s[0]),sort_by_age);//按年龄来排序,升序
//	//按照名字来排序
//	qsort(s, sz, sizeof(s[0]), sort_by_name);
//	return 0;
//}

//模仿qsort实现冒泡排序通用算法
void Swap(char* buff1, char* buff2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buff1;
		*buff1 = *buff2;
		*buff2 = tmp;
		buff1++;
		buff2++;
	}
}
void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz; i++)//总共比较的趟数
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)//每一趟的比较
		{
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
int cmp1(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp1);
}
struct Stu
{
	char name[20];
	int age;
};
int cmp2(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void test2()
{
	struct Stu s[] = { {"zhangsan",39},{"lisi",12},{"wangwu",45} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp2);
}
int main()
{
	//test1();
	test2();
	return 0;
}


