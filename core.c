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
	strcpy(b1.name, "C++");
	printf("Book name is %s, price is %d\n", b1.name, b1.price);

	struct Book* bp = &b1;
	printf("Book name is %s, price is %d\n", bp->name, bp->price);
}


/// <summary>
/// 循环
/// </summary>
void C_Circulation() {
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch == 'Y') {
			printf("输入了 %c,确认\n", ch);
			break;
		}
		putchar(ch);
	}

	int chart = 0;
	while ((chart = getchar()) != EOF)
	{
		if (chart >= 97 && chart <= 122) {
			printf("您输入了一个小写字母!转化后为：%c\n", chart - 32);
		}
		else {
			putchar(chart);
		}
	}

	int ret = 1;
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("n的阶乘为：%d\n", ret);
}


/// <summary>
/// 练习
/// </summary>
void C_BinarySearch() {
	int k = 53;
	int arr[10] = { 1,3,5,12,34,53,67,72,81 };

	int len = sizeof(arr) / sizeof(arr[0]); //数组长度
	int left = 0;  //左指针
	int right = len - 1; //右指针

	while (left <= right)
	{
		int mid = (right + left) / 2;   //中间指针
		if (arr[mid] > k) {
			right = mid - 1;
		}
		else if (arr[mid] < k) {
			left = mid + 1;
		}
		else {
			printf("找到了值：%d，所在数组下标为：%d\n", k, mid);
			break;
		}
	}
}

int main() {
	return 0;
}