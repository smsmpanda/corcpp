#pragma once
#define ROW 3
#define COL 3
#define PLACEHOLDER ' '
#define CHESS_ITEM_PLAYER '*'
#define CHESS_ITEM_PC '#'

//��ʼ������ & ��ӡ���� & ������� & �������� & �ж�������
void InitBoarder(char boarder[ROW][COL], int row, int col);
void DisplayBoarder(char boarder[ROW][COL], int row,int col);
void PlayerMove(char boarder[ROW][COL], int row, int col);
void PCMove(char boarder[ROW][COL], int row, int col);
char IsWin(char boarder[ROW][COL],int row,int col);
char IsFull(char boarder[ROW][COL], int row, int col);