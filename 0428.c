#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <time.h>
#include <stdio.h>

void game() {
	int ret = rand();
	int input = 0;
	int count = 0;
	
	while (1)
	{
		printf("���һ�����֣�");
		scanf("%d", &input);
		if (input > ret) {
			printf("�´��ˣ�");
			++count;
		}
		else if (input == ret) {
			printf("��ϲ�㣬�¶��ˣ�����%d��.\n",count);
			break;
		}
		else {
			printf("��С�ˣ�");
			++count;
		}
	}
}

void menu_select() {
	printf("*********\t1.������\n");
	printf("*********\t2.�� ��\n");
}

int main_0428() {
	int sel = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu_select();
		scanf("%d", &sel);
		switch (sel)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			exit(0);
			break;
		default:
			printf("��Ǹ��û��%dѡ��!",sel);
			break;
		}

	} while (1);

	return 0;
}