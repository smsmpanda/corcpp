#define _CRT_SECURE_NO_WARNINGS
#include "add.h"
#include "0420.h"
#include <stdio.h>

//宏延续运算符
#define  message_for(a, b)  \
    printf(#a " and " #b ": We love you!\n")

#define tokenpaster(n) printf ("token" #n " = %d\n", token##n)

#define MAX(x,y) ((x) > (y) ? (x) : (y))


int main_ks0420() {
	printf("File :%s\n", __FILE__);
	printf("Date :%s\n", __DATE__);
	printf("Time :%s\n", __TIME__);
	printf("Line :%d\n", __LINE__);

	message_for(Carole, Debra);

	int token20 = 40;
	tokenpaster(20);

	printf("Max between 20 and 10 is %d\n", MAX(10, 20));

	//char* s = test();
	Add(2, 2);
	//printf("%s\n",s);
	
	char* s = test();
	printf("Header: 0420.h call test() -> %s\n", s);



	int sum = 17, count = 5;
	float mean;

	mean = (float)sum / count;
	printf("Value of mean : %.1f\n", mean);



	int dividend = 20;
	int divisor = 1;
	int quotient;

	if (divisor == 0) {
		fprintf(stderr, "除数为 0 退出运行...\n");
		exit(-1);
	}
	quotient = dividend / divisor;
	fprintf(stderr, "quotient 变量的值为 : %d\n", quotient);

	exit(0);
}