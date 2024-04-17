#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//函数指针
int (*callback)(int, int);

//具体方法（指针应用此方法）
void AddN(int a, int b) {
	return a + b;
}

void ks0416();

void ks0416_1();

void ks0416_2();

void ks0416_3();

void ks0416_4();

void ks0416_5();

enum Week { MON = 1, TUE, WED, THU, FRI, STA, SUN };

struct Hero {
	char* name;
	char* type;
} Mangsen, Dema;


int main_ks0416() {

	//ks0416();
	//ks0416_1();
	//ks0416_2();
	//ks0416_3();
	//ks0416_4();
	ks0416_5();
	return 1;
}

typedef struct Books {
	int id;
	char* name;
} Book;

void ks0416() {
	callback = AddN;
	int c = callback(10, 20);
	printf("callback is method's point execute result is %d.\n", c);

	printf("Today is day of week %d.\n", TUE);
	int d = 5;
	enum Week enum_d = (enum week)d;
	printf("Number %d convert type of enum Week is %d\n", d, enum_d);

	int color[] = { 1,0,3,4,5,9 };
	int color_len = sizeof(color) / sizeof(color[0]);

	int* cp = &color;

	for (size_t i = 0; i < color_len; i++)
	{
		printf("c -> %d\n", *(cp++));
	}
}

void ks0416_1() {
	printf("你最喜欢星期?\n");
	int w = 0;
	while (1)
	{
		scanf("%d", &w);

		enum Week ww = (enum Week)w;

		switch (ww)
		{
		case MON:
			printf("Day of week %d everything is terrible!\n", MON);
			break;
		case TUE:
			printf("Day of week %d everything is bad!\n", TUE);
			break;
		case WED:
			printf("Day of week %d everything is general!\n", WED);
			break;
		case THU:
			printf("Day of week %d everything is good!\n", THU);
			break;
		case FRI:
			printf("Day of week %d everything is pretty good!\n", FRI);
			break;
		case STA:
		case SUN:
			printf("Day of week %d,%d everything is very happy!\n", STA, SUN);
			break;
		default:
			printf("Don't understand！");
			break;
		}
	}
}

void ks0416_2() {
	char site[12] = { 'P','R','E','T','T','Y',',','G','O','O','D','\0' };
	printf("C Programing %s\n", site);
	char* sitestr = "Pretty Good";
	printf("Charcharte is %c.\n", *sitestr++);
	printf("Charcharte is %c.\n", *sitestr++);
	printf("Charcharte is %c.\n", *sitestr++);
	printf("Charcharte is %c.\n", *sitestr++);
	printf("Charcharte is %c.\n", *sitestr++);
	printf("Charcharte is %c.\n", *sitestr++);
}

void ks0416_3() {
	char str1[14] = "runoob";
	char str2[14] = "good";
	char str3[14];

	//复制str2到str3
	strcpy(str3, str2);
	printf("str3 is %s\n", str3);

	char* scat = strcat(str1, str2);
	printf("str1 concat str2 is %s\n", scat);
}

void ks0416_4() {
	Mangsen.name = "盲僧";
	Mangsen.type = "战士";

	Dema.name = "德玛西亚";
	Dema.type = "战士";

	struct Hero lfl;
	lfl.name = "乐芙兰";
	lfl.type = "法师";

	printf("名称\t\t类型\n");
	printf("%s\t\t%s\n", Mangsen.name, Mangsen.type);
	printf("%s\t%s\n", Dema.name, Dema.type);
	printf("%s\t%s\n", lfl.name, lfl.type);

	Book book;
	book.name = "CLR Via c#";
	book.id = 1;

	struct Hero h = { "fs","fdf" };
	struct Hero h1 = { "fs","fdf" };
	struct Hero h2 = { "fs","fdf" };
	struct Hero h3 = { "fs","fdf" };
}

void ks0416_5() {

	int c;
	while ((c = getchar())!=EOF)
	{
		putchar(c);
	}
}