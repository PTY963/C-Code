#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");//����ļ������ھͻ��½�һ���ļ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//ʹ��
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	fputc('b', stdout);//��׼����������Ļ FILE*��ָ��
//	fputc('i', stdout);
//	fputc('t', stdout);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");//����ļ������ھͻ��½�һ���ļ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//ʹ��
//	fputs("hello world\n", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//��ʽ���������
struct S
{
	char arr[20];
	int i;
	float f;
};
//int main()
//{
//	struct S s = { "hello", 3, 5.5f };
//	FILE* pf = fopen("text.txt", "a");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//д�ļ�
//	fprintf(pf, "%s %d %f\n", s.arr, s.i, s.f);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("text.txt", "a");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fputs("zhangsijia", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	struct S s = {"bit", 3, 5.5f};
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	struct S s = {0};
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}


	fread(&s, sizeof(struct S), 1, pf);
	printf("%s %d %f", s.arr, s.i, s.f);

	fclose(pf);
	pf = NULL;
	return 0;
}