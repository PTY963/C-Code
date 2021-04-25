#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//初始化函数的定义
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘函数的定义
void DisplayBoard(char  board[ROW ][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j<col-1)
			     printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");

		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走: \n");
	while (1)
	{
		printf("请玩家输入坐标: ");
		scanf("%d %d", &x, &y);
		//判断接收的坐标是否合法
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//合法
			//下棋 判断下的棋有没有被占用
			if (board[x - 1][y - 1] == ' ')
			{
				//没有被占用
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				//被占用
				printf("该坐标被占用，请重新输入\n");
			}


		}
		else
		{
			//不合法
			printf("坐标不合法，请重新输入\n");
		}
	}
	
	
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走：\n");

	while (1)
	{
		int x = rand()%row;//产生的随机数只能是0-2之间
		int y = rand()%col;
		//判断坐标是否被占用
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
		//不需要判断坐标是否合法，也不需要坐标-1
	}
}



int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;

}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//无需判断返回什么
		}
	}
	//判断三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i]&&board[1][i]!=' ')
		{
			return board[1][i];
		}
	}
	//判断对角线
	for (i = 0; i < row; i++)
	{
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		{
			return board[1][1];
		}
		if (board[0][2] == board[1][1] && board[1][1] == board[2][1] && board[2][1] != ' ')
		{
			return board[1][1];
		}
	}
	//判断平局
	//如果棋盘满了返回1
	//如果棋盘没满返回0
	int ret = IsFull(board, row, col);
	if (1 == ret)
	{
		return 'Q';
	}
	//游戏继续
	return 'C';
}