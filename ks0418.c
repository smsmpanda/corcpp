#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

const char* FILE_NAME = "E:\\dev\\github.com\\corcpp\\file\\a.txt";

void read_file() {
	int c;
	FILE* fp;

	fp = fopen(FILE_NAME, "r");
	if (fp == NULL) {
		printf("�޷�������ļ���\n");
		return;
	}
	while ((c = getc(fp)) != EOF)
		putchar(c);
	// �ر��ļ�
	fclose(fp);
}

void write_file() {
	FILE* fp = NULL;
	int ch;

	fp = fopen(FILE_NAME, "a");
	if (fp == NULL) {
		printf("�޷����ļ���\n");
		return;
	}

	printf("��ʼ����:\n");
	while ((ch = getchar()) != EOF)
	{
		//putchar(ch);
		fputc(ch,fp);
	}

	fclose(fp);
}







int main() {
	read_file();
	write_file();
	return 1;
}