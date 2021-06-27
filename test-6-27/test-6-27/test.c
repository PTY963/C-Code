#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double n1 = 0.0;
	double n2 = 0.0;
	char op = 0;
	while (~scanf("%lf%c%lf", &n1, &op, &n2))
	{
		switch (op)
		{
		case '+':
			printf("%.4lf+%.4lf=%.4lf", n1, n2, n1 + n2);
			break;
		case '-':
			printf("%.4lf-%.4lf=%.4lf", n1, n2, n1 - n2);
			break;
		case '*':
			printf("%.4lf*%.4lf=%.4lf", n1, n2, n1 * n2);
			break;
		case '/':
			printf("%.4lf/%.4lf=%.4lf", n1, n2, n1 / n2);
			break;
		default:
			printf("Invalid operation\n");
			break;
		}
	}
	return 0;
}
//case 整形常量表达式 （字符也属于整形）
