#define _CRT_SECURE_NO_WARNINGS 1
//记录型信号量的定义
typedef struct
{
	int value;//剩余资源数
	struct process* L;//等待队列
}semaphore;

//进程需要某资源时，通过wait原语申请
void wait(semaphore S)
{
	S.value--;
	if (S.value < 0)
	{
		block(S.L);//如果资源数小于0 就把该进程插入阻塞队列中
	}

}

//进程使用完资源后，通过signal原语释放
void signal(semaphore S)
{
	S.value++;
	if (S.value <= 0)//<=0,表示有进程在等待资源
	{
		wakeup(S.L);
	}
}

semaphore mutex = 1;//互斥信号量，实现对缓冲区的互斥访问
semaphore empty = 5;//同步信号量，表示空缓冲区的数量
semaphore full = 0;//同步信号量，表示产品的数量

void Producer()
{
	while (1)
	{
		//生产一个产品；
		P(empty);//看看有没有空闲区
		P(mutex);//看看有没有其他生产者正在放数据
		//把产品放入缓冲区；
		V(mutex);
		V(full);//增加一个产品数量
	}
}

void consumer()
{
	while (1)
	{
		//从缓冲区取出一个产品；
		P(full);//看看缓冲区有没有数据
		P(mutex);//看看有没有消费者正在取
		//消耗该产品；
		V(mutex);//让别的消费者取
		V(empty);//增加一个空闲缓冲区
	}
}
//实现互斥的P操作一定要在实现同步的P操作之前
//但是实现同步的V操作可以和实现互斥的V操作互换位置，因为V操作不会造成阻塞


//多生产者-多消费者问题
semaphore apple = 0;
semaphore orange = 0;
semaphore mutex = 1;//实现互斥访问盘子（缓冲区）
semaphore plate = 1;//盘子中，还可以放多少水果

void dad()
{
	while (1)
	{
		//准备一个苹果；
		P(plate);
		P(mutex);
		//把苹果放到盘子中；
		V(apple);//告诉daugher进程，盘子有苹果了
		V(mutex);
	}
}

void mom()
{
	while (1)
	{
		//准备一个橘子；
		P(plate);
		P(mutex);
		//把橘子放到盘子中；
		V(orange);//告诉son进程，盘子里有橘子了
		V(mutex);
	}
}

void son()
{
	while (1)
	{
		P(orange);//检查盘子里是否是橘子
		P(mutex);
		//从盘子中取出橘子；
		V(plate);//可以放水果了
		V(mutex);
		//吃掉橘子；
	}
}

void daughter()
{
	while (1)
	{
		P(apple);//检查是否是苹果
		P(mutex);
		//从盘子中取出苹果；
		V(plate);
		V(mutex);
		//吃掉苹果；
	}
}