#define _CRT_SECURE_NO_WARNINGS 1

#define N 1024
static char buffer[N];//������
static char* bufptr;
//void bufwrite(char* p, int n)//1.Ҫд�뻺�����ĵ�һ���ַ� 2.Ҫд�뻺�������ַ���
//{
//	while (--n >= 0)//���ԳƱ߽� n-->0
//	{
//		if (bufptr == &buffer[N])//���ԳƱ߽� bufptr>&buffer[N-1]
//			flushbuffer();//�ѻ�����������д��������ָ��bufptr
//		*bufptr++ = *p++;
//	}
//}//����Ŀ�����Ҫ����ÿ�ε�����Ҫ���е��������

void my_memcpy(char* dest, const char* source, int k)
{
	while (--k >= 0)
	{
		*dest++ = *source++;
	}
}

void bufwrite(char* p, int n)//1.Ҫд�뻺�����ĵ�һ���ַ��ĵ�ַ 2.Ҫд�뻺�������ַ���
{
	while (n > 0)
	{
		int k = 0;//ת��k���ַ���������
		int rem = 0;
		if (bufptr == &buffer[N])
		{
			flushbuffer();
		}
		rem = N - (bufptr - buffer);//��������δռ�õ��ַ���  (buffer+N)-bufptr
		k = n > rem ? rem : n;
		my_memcpy(buffer, p, k);
		bufptr = bufptr + k;//ʹbufptr��Ȼָ�򻺳����е�1��δ��ռ�õ��ַ�
		p = p + k;
		n = n - k;
	}
}
 
