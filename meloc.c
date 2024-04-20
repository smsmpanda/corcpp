#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void meloc_1() {
	char name[100];
	char* title;

	strcpy(name, "Dynamic memory allocation.");

	//动态分配内存
	//title = (char*)malloc(200 * sizeof(char));
	title = calloc(30,sizeof(char));
	if (title == NULL) {
		fprintf(stderr, "allocate failure.");
	}
	else {
		strcpy(title, "allocate succeed.");
	}

	/* 假设您想要存储更大的描述信息 */
	title = (char*)realloc(title, 100 * sizeof(char));
	if (title == NULL)
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
	}
	else
	{
		strcat(title, "She is in class 10th");
	}

	printf("Name = %s\n",name);
	printf("Title = %s\n",title);

	free(title);
}

int main_meloc() {

	meloc_1();








	return 0;
}