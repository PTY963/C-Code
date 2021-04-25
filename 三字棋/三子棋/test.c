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
	char ret = 0;//������Ϸ��״̬
	char board[ROW][COL];//�洢����-��ά����
	Initboard(board,ROW,COL);//��ʼ������-��ʼ���ո�
	DisplayBoard(board, ROW, COL);//��ӡ���̣��������Ǵ�ӡ��ά���������
	
	
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ�ñ���
	    ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;//����ֵ����C��ʾ��Ϸ��������������ѭ��
		}

		//��������
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
		printf("���Ӯ\n");
	}
	else if ('#'==ret)
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
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
		printf("������ѡ� ");
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