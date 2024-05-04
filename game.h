#pragma once
#define ROW 3
#define COL 3
#define PLACEHOLDER ' '
#define CHESS_ITEM_PLAYER '*'
#define CHESS_ITEM_PC '#'

//初始化棋盘 & 打印棋盘 & 玩家下棋 & 电脑下棋 & 判断下棋结果
void InitBoarder(char boarder[ROW][COL], int row, int col);
void DisplayBoarder(char boarder[ROW][COL], int row,int col);
void PlayerMove(char boarder[ROW][COL], int row, int col);
void PCMove(char boarder[ROW][COL], int row, int col);
char IsWin(char boarder[ROW][COL],int row,int col);
char IsFull(char boarder[ROW][COL], int row, int col);