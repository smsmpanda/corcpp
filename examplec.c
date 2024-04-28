#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/// <summary>
/// N个数相加
/// </summary>
void examplec_add() {
	int n1, n2, n3;
	printf("输入三个数（以空格分割）：");
	scanf("%d %d %d", &n1, &n2, &n3);
	int sum = n1 + n2 + n3;
	printf("%d + %d + %d  = %d\n", n1, n2, n3, sum);
}

/// <summary>
/// N个浮点数相乘
/// </summary>
void example_mul() {
	float num1, num2, result;
	printf("请输入第一个浮点数: ");
	scanf("%f", &num1);
	printf("请输入第二个浮点数: ");
	scanf("%f", &num2);
	result = num1 * num2;
	printf("%.2f 乘于 %.2f 等于 %.2f\n", num1, num2, result);
	return 0;
}

void example_max() {
	double n1, n2, n3;

	printf("请输入三个数，以空格分隔: ");
	scanf("%lf %lf %lf", &n1, &n2, &n3);

	if (n1 >= n2 && n1 >= n3)
		printf("%.2f 是最大数。", n1);

	if (n2 >= n1 && n2 >= n3)
		printf("%.2f 是最大数。", n2);

	if (n3 >= n1 && n3 >= n2)
		printf("%.2f 是最大数。", n3);
}

/// <summary>
/// 求一元二次方程：ax2+bx+c=0 的根。
/// 输入三个实数a, b, c的值，且a不等于0。
/// </summary>
void example_3() {
	float a, b, c, x1, x2, d;
	printf("输入方程的三个系数:");
	scanf("%f %f %f", &a, &b, &c);
	if (a != 0)
	{
		d = sqrt(b * b - 4 * a * c);
		x1 = (-b + d) / (2 * a);
		x2 = (-b - d) / (2 * a);
		if (d < 0) {
			printf("Don't exists result.");
			return;
		}
		if (x1 < x2)
			printf("%0.2f %0.2f\n", x2, x1);
		else
			printf("%0.2f %0.2f\n", x1, x2);
	}
}

/// <summary>
/// 闰年判断
/// </summary>
void example_runyear() {
	int year;
	while (1)
	{
		printf("输入年份：");
		scanf("%d",&year);

		if (year % 4 == 0 && year % 100 != 0) {
			printf("%d是闰年.\n", year);
		}
		else if (year % 400 == 0) {
			printf("%d是闰年.\n", year);
		}
		else {
			printf("%d不是闰年.\n", year);
		}
	}
}

/// <summary>
/// 判断N是否是字符
/// </summary>
void example_ischar() {
	char c;
	printf("输入一个字符: ");
	scanf("%c", &c);

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		printf("%c 是字母", c);
	else
		printf("%c 不是字母", c);

	return 0;
}


void reverseSentence()
{
	char c;
	scanf("%c", &c);

	if (c != '\n')
	{
		reverseSentence();
		printf("%c", c);
	}
}

/// <summary>
/// 字符串反转
/// </summary>
/// <returns></returns>
int main_reverse()
{
	printf("输入一个字符串: ");
	reverseSentence();
	return 0;
}


int convertBinaryToDecimal(long long n)
{
	int decimalNumber = 0, i = 0, remainder;
	while (n != 0)
	{
		remainder = n % 10;
		n /= 10;
		decimalNumber += remainder * pow(2, i);
		++i;
	}
	return decimalNumber;
}

/// <summary>
/// 二进制转八进制
/// </summary>
/// <returns></returns>
int example_2t8()
{
	long long n;
	printf("输入一个二进制数: ");
	scanf("%lld", &n);
	printf("二进制数 %lld 转换为十进制为 %d", n, convertBinaryToDecimal(n));
	return 0;
}

/// <summary>
/// 指针访问数组元素
/// </summary>
void example_accessel() {
	int data[5], i;
	for (size_t i = 0; i < 5; i++)
		scanf("%d",data + i);

	printf("你输入的是: \n");
	for (i = 0; i < 5; ++i)
		printf("%d\n", *(data + i));
}

/// <summary>
/// 移除除字母之外的特殊字符
/// </summary>
void example_removesp() {
	char line[150];
	int i, j;
	printf("输入一个字符串: ");
	fgets(line, (sizeof line / sizeof line[0]), stdin);

	for (i = 0; i < line[i]!='\0'; i++)
	{
		if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
			continue;
		}
		for (j = i + 1; j < line[j] != '\0'; j++)
		{
			if (!(line[j] >= 'a' && line[j] <= 'z') || (line[j] >= 'A' && line[j] <= 'Z')) {
				line[j] = '\0';
				continue;
			}
			else {
				line[i++] = line[j];
				line[j] = '\0';
				printf("%s\n",line);
			}
		}
		
		printf("找到特殊符号：%s \n",line);
	}
}


int main_examp() {
	//examplec_add();
	//example_mul();
	//example_max();
	//example_3();
	//example_runyear();
	//example_ischar();
	//main_reverse();
	//example_2t8();
	//example_accessel();
	example_removesp();
	return 0;
}