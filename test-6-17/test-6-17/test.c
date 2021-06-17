#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//如果格式控制串中有非格式字符则输入时也要输入非格式字符
//	scanf("a=%d,b=%d", &a, &b);//a=1,b=2
//
//	int c = 0;//在老的标准中，变量的定义必须在代码块的最前面，C99标准没有
//	c = a;
//	a = b;
//	b = c;
//
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//输入一个字符，输出这个字符对应的ASCII码
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//
//	printf("%d\n", ch);
//
//	return 0;
//}

//int main()
//{
//	int a = 40;
//	int c = 212;
//	int ret = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", ret);
//	return 0;
//}

//问题：计算BMI指数（身体质量指数），BMI指数简称体质指数又称体重英文Body Mass Index
//是用体重公斤数除以身高米数平方得出的数字，是目前国际上常用的衡量人体胖瘦程度以及是否健康
//的一个标准。主要用于统计用途，当我们需要比较及分析一个人的体重对于不同高度的人所带来的
//健康影响时，BMI值是一个中立而可靠的指标。

int main()
{
	int weight = 0;
	int high = 0;
	scanf("%d %d", &weight, &high);

	double BMI = weight / ((high / 100.0) * (high / 100.0));
	printf("%.2lf\n", BMI);//保留两位小数
	return 0;
}