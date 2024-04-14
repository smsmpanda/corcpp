#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include "add.h"

struct Book
{
	char name[20];
	short price;
};

/// <summary>
/// 指针
/// </summary>
void C_Point()
{
	int a = 10;

	int *p = &a;
	printf("a's ptr is %p\n", p);

	//*p 解引用操作符/间接访问操作符
	*p = 100;
	printf("a = %d\n", a);
	printf("ptr sizeof is %d\n", sizeof(p));
}

/// <summary>
/// 结构体
/// </summary>
void C_Struct()
{
	struct Book b1 = {"C语言程序设计", 55};

	// name -> 是一个数组
	strcpy(b1.name, "C++");
	printf("Book name is %s, price is %d\n", b1.name, b1.price);

	struct Book *bp = &b1;
	printf("Book name is %s, price is %d\n", bp->name, bp->price);
}

/// <summary>
/// 循环
/// </summary>
void C_Circulation()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch == 'Y')
		{
			printf("输入了 %c,确认\n", ch);
			break;
		}
		putchar(ch);
	}

	int chart = 0;
	while ((chart = getchar()) != EOF)
	{
		if (chart >= 97 && chart <= 122)
		{
			printf("您输入了一个小写字母!转化后为：%c\n", chart - 32);
		}
		else
		{
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
void C_BinarySearch()
{
	int k = 53;
	int arr[10] = {1, 3, 5, 12, 34, 53, 67, 72, 81};

	int len = sizeof(arr) / sizeof(arr[0]); // 数组长度
	int left = 0;							// 左指针
	int right = len - 1;					// 右指针

	while (left <= right)
	{
		int mid = (right + left) / 2; // 中间指针
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了值：%d，所在数组下标为：%d\n", k, mid);
			break;
		}
	}
}

/// <summary>
///  打印素数 - 版本1
/// </summary>
/// <param name="start">起始数</param>
/// <param name="end">结束数</param>
void C_PrintPrimeNumberV1(int start, int end)
{
	int j = 0;
	for (; start <= end; start++)
	{
		j = 0;
		for (j = 2; j < start; j++)
		{
			if (start % j == 0)
			{
				break;
			}
		}
		if (start == j)
		{
			printf("%d\n", start);
		}
	}
}

/// <summary>
///  打印素数 - 版本2
/// </summary>
/// <param name="start">起始数</param>
/// <param name="end">结束数</param>
void C_PrintPrimeNumberV2(int start, int end)
{
	int j = 0;
	int m = 0;
	for (; start <= end; start++)
	{
		j = 0;
		m = sqrt(start);
		for (j = 2; j <= m; j++)
		{
			if (start % j == 0)
			{
				break;
			}
		}
		if (j > m)
		{
			printf("%d\n", start);
		}
	}
}

/// <summary>
/// 分数之和
/// </summary>
/// <param name="start"></param>
/// <param name="end"></param>
void C_PrintNumberSum(int start, int end)
{
	// 奇数项 * 1   偶数项 * -1
	int i = 1;
	double sum = 0.0;
	for (; start <= end; start++)
	{
		sum += i * 1.0 / start;
		i = -i;
	}
	printf("sum : %1f", sum);
}

/// <summary>
/// 打印菜单
/// </summary>
void C_GamementPrint()
{
	printf("**** **** **** **** **** **** ****\n");
	printf("**** **** 1.Guess Number **** ****\n");
	printf("**** **** 0.Exit **** **** *******\n");
	printf("**** **** **** **** **** **** ****\n");
}

/// <summary>
/// 猜数字
/// </summary>
void C_StartGuessNumber()
{
	// 产生一个随机数
	int random = 0;

	srand((unsigned int)time(NULL));
	random = rand() % 100 + 1;
	printf("Guess * ?\n");

	int input = 0;
	while (1)
	{
		scanf("%d", &input);

		if (input > random)
		{
			printf("猜大了!");
		}
		else if (input == random)
		{
			printf("恭喜你，猜对了!");
			break;
		}
		else
		{
			printf("猜小了!");
		}
	}
}

/// <summary>
/// 游戏入口
/// </summary>
void C_Game()
{
	int menuSel = 1;
	do
	{
		// 输出菜单
		C_GamementPrint();

		printf("请选择菜单:");

		scanf("%d", &menuSel);

		switch (menuSel)
		{
		case 1:
			C_StartGuessNumber();
			break;
		case 0:
			menuSel = 0;
			break;
		default:
			printf("Select Error！\n");
			break;
		}

	} while (menuSel);
}

void C_GetNumberString(unsigned int a)
{
	if (a <= 9)
	{
		return;
	}
}

int maincore()
{
	// 一维数组
	int arr[10] = {1, 2, 3}; // 不完全初始化，剩下的元素默认初始化为0
	char arr1[5] = "ad";	 // 不完全初始化，剩下的元素默认初始化为0
	char arr2[5] = "admin";	 // 存有5个元素
	char arr3[] = "admin";	 // 存有6个元素，末尾元素为'\0' sizeof(arr3) = 6, stren(arr3_ = 5
	char arr4[] = {'a', 'c', 'd'};
	printf("%d", strlen(arr4)); // strlen(arr4) = 一个随机数，原因：计算机寻找'\0'结尾的字符，直到找到

	char chars[][3] = {'a', 'b', 'c', 'C', 'B', 'A'};

	return 0;
}