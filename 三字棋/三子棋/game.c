#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//��ʼ�������Ķ���
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

//��ӡ���̺����Ķ���
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
	printf("�����: \n");
	while (1)
	{
		printf("�������������: ");
		scanf("%d %d", &x, &y);
		//�жϽ��յ������Ƿ�Ϸ�
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�Ϸ�
			//���� �ж��µ�����û�б�ռ��
			if (board[x - 1][y - 1] == ' ')
			{
				//û�б�ռ��
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				//��ռ��
				printf("�����걻ռ�ã�����������\n");
			}


		}
		else
		{
			//���Ϸ�
			printf("���겻�Ϸ�������������\n");
		}
	}
	
	
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("�����ߣ�\n");

	while (1)
	{
		int x = rand()%row;//�����������ֻ����0-2֮��
		int y = rand()%col;
		//�ж������Ƿ�ռ��
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
		//����Ҫ�ж������Ƿ�Ϸ���Ҳ����Ҫ����-1
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
	//�ж�����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//�����жϷ���ʲô
		}
	}
	//�ж�����
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i]&&board[1][i]!=' ')
		{
			return board[1][i];
		}
	}
	//�ж϶Խ���
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
	//�ж�ƽ��
	//����������˷���1
	//�������û������0
	int ret = IsFull(board, row, col);
	if (1 == ret)
	{
		return 'Q';
	}
	//��Ϸ����
	return 'C';
}