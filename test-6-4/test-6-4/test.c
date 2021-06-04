#define _CRT_SECURE_NO_WARNINGS 1

#define N 1024
static char buffer[N];//缓冲区
static char* bufptr;
//void bufwrite(char* p, int n)//1.要写入缓冲区的第一个字符 2.要写入缓冲区的字符数
//{
//	while (--n >= 0)//不对称边界 n-->0
//	{
//		if (bufptr == &buffer[N])//不对称边界 bufptr>&buffer[N-1]
//			flushbuffer();//把缓冲区的内容写出，重置指针bufptr
//		*bufptr++ = *p++;
//	}
//}//程序的开销主要来自每次迭代都要进行的两个检查

void my_memcpy(char* dest, const char* source, int k)
{
	while (--k >= 0)
	{
		*dest++ = *source++;
	}
}

void bufwrite(char* p, int n)//1.要写入缓冲区的第一个字符的地址 2.要写入缓冲区的字符数
{
	while (n > 0)
	{
		int k = 0;//转移k个字符到缓冲区
		int rem = 0;
		if (bufptr == &buffer[N])
		{
			flushbuffer();
		}
		rem = N - (bufptr - buffer);//缓冲区中未占用的字符数  (buffer+N)-bufptr
		k = n > rem ? rem : n;
		my_memcpy(buffer, p, k);
		bufptr = bufptr + k;//使bufptr仍然指向缓冲区中第1个未被占用的字符
		p = p + k;
		n = n - k;
	}
}
 
