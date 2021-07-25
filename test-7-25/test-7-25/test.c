#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//union Un
//{
//	short s[7];//14
//	int n;//4/8 4
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));//16
//	return 0;
//}

//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n" , a.k);
//    return 0;
//}

//模拟实现atoi  -  《剑指offer》
#include<limits.h>
#include<ctype.h>
enum State
{
	LNVAILD,//0 非法
	VAILD//1 合法
};

//state 记录的是函数 my_atoi 的返回值是合法转换的值，还是非法的状态
enum State state = LNVAILD;

int my_atoi(const char* str)
{
	int flag = 1;
	
	if (*str == NULL)//1.空指针的情况
		return 0;
	if (*str == '\0')//2.空字符串的情况
		return 0;
	while (isspace(*str))//3.空白字符的情况
	{
		str++;
	}
	//4.+/-的情况
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
		
   
	//正常情况 把数字字符转换成数字
	long long  n = 0;//如果是int类型，就不存在超出int范围的情况
	while (isdigit(*str))
	{
		n = n * 10 + flag * (*str - '0');//'1'-'0' 49-48=1
		if (n > INT_MAX || n < INT_MIN)//超出范围的情况
			return 0;
		str++;
	}
	//跳出while循环 要么是'\0',要么就是非数字字符
	if (*str == '\0')
	{
		state = VAILD;
		return (int)n;
	}
	else
	{
		//非法的情况
		return (int)n;
	}


}
int main()
{
	//1.空指针
	//2.空字符串
	//3.遇到非法字符（除了数字字符之外的字符）
	//4.超出了范围
	const char* p = "1234";
	int ret = my_atoi(p);//把数字字符转换成整数
	if (state == VAILD)
		printf("正常的转换： %d\n", ret);
	else
		printf("非法的转换： %d\n", ret);
	return 0;
}