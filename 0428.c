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
		printf("请猜一个数字：");
		scanf("%d", &input);
		if (input > ret) {
			printf("猜大了！");
			++count;
		}
		else if (input == ret) {
			printf("恭喜你，猜对了！猜了%d次.\n",count);
			break;
		}
		else {
			printf("猜小了！");
			++count;
		}
	}
}

void menu_select() {
	printf("*********\t1.猜数字\n");
	printf("*********\t2.退 出\n");
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
			printf("退出游戏\n");
			exit(0);
			break;
		default:
			printf("抱歉！没有%d选项!",sel);
			break;
		}

	} while (1);

	return 0;
}