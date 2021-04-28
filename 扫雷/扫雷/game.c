#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("-------------扫雷游戏------------\n");
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------扫雷游戏------------\n");
}

//布置雷 随机生成坐标，坐标没有被占用，就赋值成字符1
void SetMine(char board[ROWS][COLS], int row, int col)
{
	//布置10个雷
	int count = EASY_COUNT;
	
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
		
	}
}

//static修饰函数，把函数的外部链接属性，改成内部连接属性
static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x - 1][y] +
		mine[x + 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] - 8 * '0';
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//输入排查的坐标
	//检查坐标处是不是雷
	   //是雷-很遗憾炸死了-游戏结束
	   //不是雷-统计坐标周围有几个雷-存储排查雷的信息到show数组-游戏继续
	int x = 0;
	int y = 0;
	int win = 0;

	while (win<row*col- EASY_COUNT)
	{
		printf("请输入要排查的坐标： ");
		scanf("%d %d", &x, &y);

		//判断坐标是否合理
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断是否是雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, x, y);
				break;
			}
			else
			{
				//没有雷，统计坐标周围的信息
				int count=get_mine_count(mine, row, col);
				show[x][y] = count + '0';
				//显示排查出的信息
				DisplayBoard(show, row, col);
				win++;

			}

		}
		else
		{
			printf("坐标不合理，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}