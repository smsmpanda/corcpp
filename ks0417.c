#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/// <summary>
/// ��׼���룺getchar
/// </summary>
void Say() {
	int c;
	while ((c = getchar())!=EOF)
	{
		putchar(c); //��׼�����putchar
	}
}

/// <summary>
/// ע�⣺
/// 1.gets()�����ڶ�ȡ�ַ���ʱ�����Զ�ȥ���ַ���ĩβ�Ļ��з�������ٴ����ַ���ʱ������Ҫ�ֶ�ȥ��
/// 2.gets()�����ڶ�ȡ�ַ���ʱ�����黺������������⣬�����ʵ��ʹ������Ҫע�ⰲȫ�����⡣��C�����У����Ƽ�ʹ��fgets()����������gets()��������Ϊfgets()��������ָ����ȡ���ַ������Ӷ����⻺�������������
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
		printf("Please input two value��\n");
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