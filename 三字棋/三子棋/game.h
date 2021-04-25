#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//符号定义
#define ROW 3
#define COL 3


//函数声明
void Initboard(char board[][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);

void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//判断游戏的状态
//玩家赢了 *
//电脑赢了 #
//平局    Q
//游戏继续 C
char IsWin(char board[ROW][COL], int row, int col);