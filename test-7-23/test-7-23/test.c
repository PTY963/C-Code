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
//	//sprintf �Ѹ�ʽ��������д����ת���ɣ�һ���ַ�����
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
//	//�����ļ�λ��
//    fseek(pf, 3, SEEK_CUR);
//	
//	ret = fgetc(pf);//h
//	printf("%c\n", ret);//o
//
//	ret = ftell(pf);//�����ļ�ָ���������ʼλ�õ�ƫ����
//	printf("%d\n", ret);
//
//	//���ļ�ָ��ص���ʼλ��
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
//	//���ڴ��е����ݣ�����ASCII��ֵ���Σ�ֱ��д���ļ��� - �������ļ�
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

	//�ļ�ȫ���򿪳ɹ�
	//д�ļ�
	int ch = 0;
	while ((ch = fgetc(pfread)) != EOF)
	{
		fputs(&ch, pfwrite);
	}

	if (feof(pfread))
		printf("�ļ�������ȡ����\n");
	else if (ferror(pfread))
		printf("�ļ���ȡ�������\n");


	fclose(pfread);
	pfread = NULL;
	fclose(pfwrite);
	pfwrite = NULL;
	return 0;
}
