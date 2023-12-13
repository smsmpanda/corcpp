#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

struct Book
{
	char name[20];
	short price;
};

/// <summary>
/// 指针
/// </summary>
void C_Point() {
	int a = 10;

	int* p = &a;
	printf("a's ptr is %p\n", p);

	//*p 解引用操作符/间接访问操作符
	*p = 100;
	printf("a = %d\n", a);
	printf("ptr sizeof is %d\n", sizeof(p));
}

/// <summary>
/// 结构体
/// </summary>
void C_Struct() {
	struct Book b1 = { "C语言程序设计",55 };

	// name -> 是一个数组
	strcpy(b1.name,"C++");
	printf("Book name is %s, price is %d\n", b1.name, b1.price);

	struct Book* bp = &b1;
	printf("Book name is %s, price is %d\n", bp->name, bp->price);
}

int main() {

	C_Struct();
	return 0;
}