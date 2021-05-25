#define _CRT_SECURE_NO_WARNINGS 1
//��¼���ź����Ķ���
typedef struct
{
	int value;//ʣ����Դ��
	struct process* L;//�ȴ�����
}semaphore;

//������Ҫĳ��Դʱ��ͨ��waitԭ������
void wait(semaphore S)
{
	S.value--;
	if (S.value < 0)
	{
		block(S.L);//�����Դ��С��0 �ͰѸý��̲�������������
	}

}

//����ʹ������Դ��ͨ��signalԭ���ͷ�
void signal(semaphore S)
{
	S.value++;
	if (S.value <= 0)//<=0,��ʾ�н����ڵȴ���Դ
	{
		wakeup(S.L);
	}
}

semaphore mutex = 1;//�����ź�����ʵ�ֶԻ������Ļ������
semaphore empty = 5;//ͬ���ź�������ʾ�ջ�����������
semaphore full = 0;//ͬ���ź�������ʾ��Ʒ������

void Producer()
{
	while (1)
	{
		//����һ����Ʒ��
		P(empty);//������û�п�����
		P(mutex);//������û���������������ڷ�����
		//�Ѳ�Ʒ���뻺������
		V(mutex);
		V(full);//����һ����Ʒ����
	}
}

void consumer()
{
	while (1)
	{
		//�ӻ�����ȡ��һ����Ʒ��
		P(full);//������������û������
		P(mutex);//������û������������ȡ
		//���ĸò�Ʒ��
		V(mutex);//�ñ��������ȡ
		V(empty);//����һ�����л�����
	}
}
//ʵ�ֻ����P����һ��Ҫ��ʵ��ͬ����P����֮ǰ
//����ʵ��ͬ����V�������Ժ�ʵ�ֻ����V��������λ�ã���ΪV���������������


//��������-������������
semaphore apple = 0;
semaphore orange = 0;
semaphore mutex = 1;//ʵ�ֻ���������ӣ���������
semaphore plate = 1;//�����У������ԷŶ���ˮ��

void dad()
{
	while (1)
	{
		//׼��һ��ƻ����
		P(plate);
		P(mutex);
		//��ƻ���ŵ������У�
		V(apple);//����daugher���̣�������ƻ����
		V(mutex);
	}
}

void mom()
{
	while (1)
	{
		//׼��һ�����ӣ�
		P(plate);
		P(mutex);
		//�����ӷŵ������У�
		V(orange);//����son���̣���������������
		V(mutex);
	}
}

void son()
{
	while (1)
	{
		P(orange);//����������Ƿ�������
		P(mutex);
		//��������ȡ�����ӣ�
		V(plate);//���Է�ˮ����
		V(mutex);
		//�Ե����ӣ�
	}
}

void daughter()
{
	while (1)
	{
		P(apple);//����Ƿ���ƻ��
		P(mutex);
		//��������ȡ��ƻ����
		V(plate);
		V(mutex);
		//�Ե�ƻ����
	}
}