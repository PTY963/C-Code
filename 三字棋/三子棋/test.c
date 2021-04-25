#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("***************************\n");
	printf("*****    1.PlAY      ******\n");
	printf("*****    0.EXIT      ******\n");
	printf("***************************\n");
}

void game()
{
	char ret = 0;//接收游戏的状态
	char board[ROW][COL];//存储数据-二维数组
	Initboard(board,ROW,COL);//初始化棋盘-初始化空格
	DisplayBoard(board, ROW, COL);//打印棋盘，本质上是打印二维数组的内容
	
	
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢得比赛
	    ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;//返回值不是C表示游戏结束，立刻跳出循环
		}

		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if ('*'==ret)
	{
		printf("玩家赢\n");
	}
	else if ('#'==ret)
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
	

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入选项： ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			break;

		}
	} while (input);
	return 0;
}