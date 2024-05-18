#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"

void menu_select1() {
	printf("* * * * * * * * * * Game Box * * * * * * * * * *\n");
	printf("* * * * * * * * * * 1. Play  * * * * * * * * * *\n");
	printf("* * * * * * * * * * 0. Exit  * * * * * * * * * *\n");
}

void DisplayBoarder(char boarder[ROW][COL], int row, int col) {
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c", boarder[i][j]);
			if (j < col - 1)
				printf(" |");

			// %c | %c | %c \n
		}
		printf("\n");
		if (i < row - 1)
		{
			for (size_t c = 0; c < col; c++)
			{
				printf("---");
				if (c < col - 1) {
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void InitBoarder(char boarder[ROW][COL], int row, int col) {
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			boarder[i][j] = PLACEHOLDER;
		}
	}
}

void PlayerMove(char boarder[ROW][COL], int row, int col) {
	int x = 0, y = 0;
	printf("����ߣ�>\n");
	while (1)
	{
		printf("������Ҫ�µ����꣺> ");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {

			char c = boarder[x - 1][y - 1];
			if (c != PLACEHOLDER) {
				printf("�����걻ռ�ã�\n");
				continue;
			}
			boarder[x - 1][y - 1] = CHESS_ITEM_PLAYER;
			break;
		}
		printf("����Ƿ������������룡\n");
	}
}

void PCMove(char boarder[ROW][COL], int row, int col) {
	printf("�����ߣ�>\n");
	// ��������������꣬����������
	
	while (1)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (x >= 1 && x <= row && y >= 1 && y <= col) {

			char c = boarder[x - 1][y - 1];
			if (c != PLACEHOLDER) {
				printf("�����걻ռ�ã����������룡\n");
				continue;
			}
			boarder[x - 1][y - 1] = CHESS_ITEM_PC;
			break;
		}
		printf("����Ƿ����������룡\n");
	}
}

char IsWin(char boarder[ROW][COL], int row, int col) {
	//���Ӯ & �˻�Ӯ & ƽ��
	//�����ж�
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col - 1; j++)
		{
			if (boarder[i][j] != PLACEHOLDER && boarder[i][j] == boarder[i][j + 1]) {
				if (j == col - 2) {
					return boarder[i][j];
				}
				continue;
			}
			break;
		}
	}

	//�����ж�
	for (i = 0; i < col; i++)
	{
		for (j = 0; j < row - 1; j++)
		{
			if (boarder[i][j] != PLACEHOLDER && boarder[j][i] == boarder[j + 1][i]) {
				if (j == row - 2)
					return boarder[j][i];
				continue;
			}
			break;
		}
	}

	// 11 22 33    13 22 31 
	// 11 22 33 44 14 23 32 41
	//�Խ���1
	for (i = 0; i < row - 1; i++)
	{
		if (boarder[i][j] != PLACEHOLDER && boarder[i][i] == boarder[i + 1][i + 1]) {
			if (i == row - 2)
				return boarder[i][i];
			continue;
		}
		break;
	}

	//�Խ���2
	//for (i = 0; i < row; i++)
	//{
	//	for (j = col; i > 0; i--)
	//	{
	//		if (boarder[i][j] == boarder[i + 1][i + 1]) {
	//			return boarder[i][i];
	//		}
	//	}
	//}

	i = 0, j = col - 1;
	while (i < row - 1)
	{
		// 0,2 1 1 
		if (boarder[i][j] != PLACEHOLDER && boarder[i][j] == boarder[i + 1][j - 1]) {
			if (i == row - 2) {
				return boarder[i][j];
			}
			i++;
			j--;
			continue;
		}
		break;
	}

	if (-1 == IsFull(boarder, row, col)) {
		return 'Q';
	}

	return 'C';
}

char IsFull(char boarder[ROW][COL], int row, int col) {
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			if (boarder[i][j] == PLACEHOLDER) {
				return -1;
			}
		}
	}
	return 1;
}

void play_game() {
	char board[ROW][COL] = { 0 };
	char ret = 0;

	//��ʼ������
	InitBoarder(board, ROW, COL);

	//��ӡ����
	DisplayBoarder(board, ROW, COL);

	//����
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		DisplayBoarder(board, ROW, COL);
		/*ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}*/

		//�˻���
		PCMove(board, ROW, COL);
		DisplayBoarder(board, ROW, COL);
		/*ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}*/
	}
	if (ret == CHESS_ITEM_PC) {
		printf("����ʤ����");
	}
	else if (ret == CHESS_ITEM_PLAYER) {
		printf("����ʤ����");
	}
	else {
		printf("ƽ��");
	}
}

void game_test() {

	int sel = 0;
	do
	{
		menu_select1();
		printf("��ѡ��˵���");
		scanf("%d", &sel);

		switch (sel)
		{
		case 1:
			printf("������\n");
			play_game();
			break;
		case 0:
			printf("�˳�");
			break;
		default:
			printf("û�д�ѡ�������ѡ��");
			break;
		}

	} while (sel);
}

int main() {
	srand((unsigned int)time(NULL));

	game_test();

	return 0;
}