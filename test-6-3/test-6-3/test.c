#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
void left_reverse_string(char* pa, int k)
{
	assert(pa);

	int len = strlen(pa);
	int i = 0;
	for (i = 0; i < k; i++)
	{
		char tmp = *pa;
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			pa[j] = pa[j + 1];
		}
		pa[len - 1] = tmp;
	}
}
int main()
{
	char arr[] = "abcdef";
	int k = 0;
	scanf("%d", &k);

	left_reverse_string(arr, k);

	printf("%s\n", arr);
	return 0;
}