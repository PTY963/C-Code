#define _CRT_SECURE_NO_WARNINGS 1
//99 45 78 67 72 88 60
//73.00
#include<stdio.h>
#include<stdlib.h>
int cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int main()
{
	int arr[7] = { 0 };
	scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3],
		                           &arr[4], &arr[5], &arr[6]);

	qsort(arr, 7, sizeof(arr[0]), cmp);//45 60 67 72 78  88 99
	int i = 0;
	int sum = 0;
	for (i = 1; i < 6; i++)
	{
		sum += arr[i];
	}

	printf("%lf\n", sum / 5.0);
	return 0;
}