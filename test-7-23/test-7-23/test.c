#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct S
//{
//	char arr[10];
//	int i;
//	float f;
//};
//int main()
//{
//	struct S s = { "hello", 3, 5.5f };
//	char buff[20] = { 0 };
//	//sprintf 把格式化的数据写到（转换成）一个字符串里
//	sprintf(buff, "%s %d %f", s.arr, s.i, s.f);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//helloworld
//	int ret = fgetc(pf);//h
//	printf("%c\n", ret);
//	//调整文件位置
//    fseek(pf, 3, SEEK_CUR);
//	
//	ret = fgetc(pf);//h
//	printf("%c\n", ret);//o
//
//	ret = ftell(pf);//返回文件指针相对于起始位置的偏移量
//	printf("%d\n", ret);
//
//	//让文件指针回到起始位置
//	rewind(pf);
//	ret = fgetc(pf);
//	printf("%c\n", ret);//h
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//将内存中的数据，不加ASCII码值修饰，直接写到文件中 - 二进制文件
//	fwrite(&a, sizeof(int), 1, pf);
//	//0000 0000 0000 0000 0010 0111 0001 0000
//	//00 00 27 10
//	//10 27 00 00
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	FILE* pfread = fopen("test.txt", "r");
	if (pfread == NULL)
	{
		perror("pfread");
		return 1;
	}

	FILE* pfwrite = fopen("text2.txt", "w");
	if (pfwrite == NULL)
	{
		fclose(pfread);
		pfread = NULL;
		perror("pfwrite");
		return 1;
	}

	//文件全部打开成功
	//写文件
	int ch = 0;
	while ((ch = fgetc(pfread)) != EOF)
	{
		fputs(&ch, pfwrite);
	}

	if (feof(pfread))
		printf("文件正常读取结束\n");
	else if (ferror(pfread))
		printf("文件读取错误结束\n");


	fclose(pfread);
	pfread = NULL;
	fclose(pfwrite);
	pfwrite = NULL;
	return 0;
}
