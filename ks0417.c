#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/// <summary>
/// 标准输入：getchar
/// </summary>
void Say() {
	int c;
	while ((c = getchar())!=EOF)
	{
		putchar(c); //标准输出：putchar
	}
}

/// <summary>
/// 注意：
/// 1.gets()函数在读取字符串时不会自动去除字符串末尾的换行符，因此再处理字符串时可能需要手动去除
/// 2.gets()函数在读取字符串时不会检查缓冲区溢出的问题，因此在实际使用中需要注意安全性问题。在C语言中，更推荐使用fgets()函数来代替gets()函数，因为fgets()函数可以指定读取的字符数，从而避免缓冲区溢出的问题
/// </summary>
void SayV2() {
	char str[100];
	printf("Please input strings (input 'exit' to quit):\n");
	while (1) {
		gets(str);
		if (strcmp(str, "exit") == 0) {
			break;
		}
		printf("Input string: %s\n", str);
	}
}

typedef struct {
	float score;
	char name[20];
} Subject;

void SayV3() {

	int s[5];
	int* sp = &s;
	int slen = sizeof(s) / sizeof(s[0]);

	for (size_t i = 0; i < slen; i++)
	{
		printf("Please input %d: ", i + 1);
		scanf("%d", sp++);
	}
	printf("complete!");
	/*int x;
	while (1)
	{
		printf("Please input two value：\n");
		scanf("%s %d",s,&x);
		printf("the first value is '%s'\n",s);
		printf("the second value is '%d'\n",x);
	}*/
}


void SayV4() {
	Subject ss[2];
	Subject* ssp = &ss;
	int len = sizeof(ss) / sizeof(ss[0]);
	for (size_t i = 0; i < len; i++)
	{
		printf("Please input name and score of student %d:\n", i + 1);
		scanf("%s %f.1", ss[i].name, &ss[i].score);
	}
	printf("complete!\n");

	for (size_t i = 0; i < len; i++)
	{
		printf("Please project's name is %s, project's score is %f.\n",ss[i].name,ss[i].score);
	}
}


int main_ks0417() {
	//Say();
	//SayV2();
	//SayV3();
	SayV4();
	return 1;
}