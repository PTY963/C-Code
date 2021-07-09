#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
//0x13 - 19  0001 0011
//0x17 - 23  0001 0111
//           0001 0011 - 0x13  &按位和
//           0001 0111 - 0x17  |按位或

//对齐数默认是8
typedef struct
{ 
	int a;//4/8  4  0-3
    char b;//1/8 1  4
    short c;//2/8 2 6-7
    short d;//2/8  2 8-9
}AA_t;

//int main()
//{
//    printf("%d\n", sizeof(AA_t));//12
//    return 0;
//}

//int a = 10;
//a += a *= a -= a / 3  结合性 右-左

//void main()
//{ 
//    int i = 0;
//    while (i < 10)//0-9 
//    {
//        if (i < 1)
//            continue;
//        if (i == 5)
//            break;
//        i++; 
//    } 
//}

//要求写一个函数，将字符串中的空格替换为 % 20。
//样例： “abc defgx yz” 转换成 “abc % 20defgx % 20yz”
char*  replaceBlankSpace(char* str1, char* str2)
{
    assert(str1 && str2 != NULL);

    char* ret = str2;

    while (*str1 != '\0')
    {
        if (*str1 != ' ')
        {
            *str2 = *str1;
            str2++;
        }
        else
        {
            strcpy(str2, "%20");
            str2 += 3;
        }
           
        str1++;
    }

    return ret;
}
int main()
{
    char str1[] = "abc defgx yz";
    char str2[50] = { 0 };
    printf("%s\n", replaceBlankSpace(str1, str2));
    return 0;
}
//%20 是三个字符，而空格是一个字符，所以数组的长度需要改变
