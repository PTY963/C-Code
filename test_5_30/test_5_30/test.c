#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�


//ʵ��һ�����������������ַ����е�k���ַ�

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
//	for (i = 0; i < k; i++)//��ת�����ַ�
//	{
//		char tmp = *pa;
//		for (j = 0; j < len - 1 - i; j++)//��ǰŲ����λ
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

//ð������
//void BubbleSort(int arr[], int sz)
//{
//	//����
//	int i = 0;
//	//���������
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��
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

//void qsort (void* base,//�����������е�һ��Ԫ�صĵ�ַ
//            size_t num, //���������ݵ�Ԫ�ظ���
//            size_t size,//�����������У�һ��Ԫ�صĴ�С����λ���ֽ�
//            int (*compar)(const void*, const void*)//����ָ��-�Ƚ�����Ԫ�صĺ���
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

//qsort������һ���ṹ��
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
//	//qsort(s,sz,sizeof(s[0]),sort_by_age);//������������,����
//	//��������������
//	qsort(s, sz, sizeof(s[0]), sort_by_name);
//	return 0;
//}

//ģ��qsortʵ��ð������ͨ���㷨
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
	for (i = 0; i < sz; i++)//�ܹ��Ƚϵ�����
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)//ÿһ�˵ıȽ�
		{
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
			{
				//����
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


