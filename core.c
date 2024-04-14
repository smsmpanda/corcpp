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
/// ָ��
/// </summary>
void C_Point()
{
	int a = 10;

	int *p = &a;
	printf("a's ptr is %p\n", p);

	//*p �����ò�����/��ӷ��ʲ�����
	*p = 100;
	printf("a = %d\n", a);
	printf("ptr sizeof is %d\n", sizeof(p));
}

/// <summary>
/// �ṹ��
/// </summary>
void C_Struct()
{
	struct Book b1 = {"C���Գ������", 55};

	// name -> ��һ������
	strcpy(b1.name, "C++");
	printf("Book name is %s, price is %d\n", b1.name, b1.price);

	struct Book *bp = &b1;
	printf("Book name is %s, price is %d\n", bp->name, bp->price);
}

/// <summary>
/// ѭ��
/// </summary>
void C_Circulation()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch == 'Y')
		{
			printf("������ %c,ȷ��\n", ch);
			break;
		}
		putchar(ch);
	}

	int chart = 0;
	while ((chart = getchar()) != EOF)
	{
		if (chart >= 97 && chart <= 122)
		{
			printf("��������һ��Сд��ĸ!ת����Ϊ��%c\n", chart - 32);
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
	printf("n�Ľ׳�Ϊ��%d\n", ret);
}

/// <summary>
/// ��ϰ
/// </summary>
void C_BinarySearch()
{
	int k = 53;
	int arr[10] = {1, 3, 5, 12, 34, 53, 67, 72, 81};

	int len = sizeof(arr) / sizeof(arr[0]); // ���鳤��
	int left = 0;							// ��ָ��
	int right = len - 1;					// ��ָ��

	while (left <= right)
	{
		int mid = (right + left) / 2; // �м�ָ��
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
			printf("�ҵ���ֵ��%d�����������±�Ϊ��%d\n", k, mid);
			break;
		}
	}
}

/// <summary>
///  ��ӡ���� - �汾1
/// </summary>
/// <param name="start">��ʼ��</param>
/// <param name="end">������</param>
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
///  ��ӡ���� - �汾2
/// </summary>
/// <param name="start">��ʼ��</param>
/// <param name="end">������</param>
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
/// ����֮��
/// </summary>
/// <param name="start"></param>
/// <param name="end"></param>
void C_PrintNumberSum(int start, int end)
{
	// ������ * 1   ż���� * -1
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
/// ��ӡ�˵�
/// </summary>
void C_GamementPrint()
{
	printf("**** **** **** **** **** **** ****\n");
	printf("**** **** 1.Guess Number **** ****\n");
	printf("**** **** 0.Exit **** **** *******\n");
	printf("**** **** **** **** **** **** ****\n");
}

/// <summary>
/// ������
/// </summary>
void C_StartGuessNumber()
{
	// ����һ�������
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
			printf("�´���!");
		}
		else if (input == random)
		{
			printf("��ϲ�㣬�¶���!");
			break;
		}
		else
		{
			printf("��С��!");
		}
	}
}

/// <summary>
/// ��Ϸ���
/// </summary>
void C_Game()
{
	int menuSel = 1;
	do
	{
		// ����˵�
		C_GamementPrint();

		printf("��ѡ��˵�:");

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
			printf("Select Error��\n");
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
	// һά����
	int arr[10] = {1, 2, 3}; // ����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	char arr1[5] = "ad";	 // ����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	char arr2[5] = "admin";	 // ����5��Ԫ��
	char arr3[] = "admin";	 // ����6��Ԫ�أ�ĩβԪ��Ϊ'\0' sizeof(arr3) = 6, stren(arr3_ = 5
	char arr4[] = {'a', 'c', 'd'};
	printf("%d", strlen(arr4)); // strlen(arr4) = һ���������ԭ�򣺼����Ѱ��'\0'��β���ַ���ֱ���ҵ�

	char chars[][3] = {'a', 'b', 'c', 'C', 'B', 'A'};

	return 0;
}