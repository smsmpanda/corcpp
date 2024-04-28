#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/// <summary>
/// N�������
/// </summary>
void examplec_add() {
	int n1, n2, n3;
	printf("�������������Կո�ָ��");
	scanf("%d %d %d", &n1, &n2, &n3);
	int sum = n1 + n2 + n3;
	printf("%d + %d + %d  = %d\n", n1, n2, n3, sum);
}

/// <summary>
/// N�����������
/// </summary>
void example_mul() {
	float num1, num2, result;
	printf("�������һ��������: ");
	scanf("%f", &num1);
	printf("������ڶ���������: ");
	scanf("%f", &num2);
	result = num1 * num2;
	printf("%.2f ���� %.2f ���� %.2f\n", num1, num2, result);
	return 0;
}

void example_max() {
	double n1, n2, n3;

	printf("���������������Կո�ָ�: ");
	scanf("%lf %lf %lf", &n1, &n2, &n3);

	if (n1 >= n2 && n1 >= n3)
		printf("%.2f ���������", n1);

	if (n2 >= n1 && n2 >= n3)
		printf("%.2f ���������", n2);

	if (n3 >= n1 && n3 >= n2)
		printf("%.2f ���������", n3);
}

/// <summary>
/// ��һԪ���η��̣�ax2+bx+c=0 �ĸ���
/// ��������ʵ��a, b, c��ֵ����a������0��
/// </summary>
void example_3() {
	float a, b, c, x1, x2, d;
	printf("���뷽�̵�����ϵ��:");
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
/// �����ж�
/// </summary>
void example_runyear() {
	int year;
	while (1)
	{
		printf("������ݣ�");
		scanf("%d",&year);

		if (year % 4 == 0 && year % 100 != 0) {
			printf("%d������.\n", year);
		}
		else if (year % 400 == 0) {
			printf("%d������.\n", year);
		}
		else {
			printf("%d��������.\n", year);
		}
	}
}

/// <summary>
/// �ж�N�Ƿ����ַ�
/// </summary>
void example_ischar() {
	char c;
	printf("����һ���ַ�: ");
	scanf("%c", &c);

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		printf("%c ����ĸ", c);
	else
		printf("%c ������ĸ", c);

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
/// �ַ�����ת
/// </summary>
/// <returns></returns>
int main_reverse()
{
	printf("����һ���ַ���: ");
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
/// ������ת�˽���
/// </summary>
/// <returns></returns>
int example_2t8()
{
	long long n;
	printf("����һ����������: ");
	scanf("%lld", &n);
	printf("�������� %lld ת��Ϊʮ����Ϊ %d", n, convertBinaryToDecimal(n));
	return 0;
}

/// <summary>
/// ָ���������Ԫ��
/// </summary>
void example_accessel() {
	int data[5], i;
	for (size_t i = 0; i < 5; i++)
		scanf("%d",data + i);

	printf("���������: \n");
	for (i = 0; i < 5; ++i)
		printf("%d\n", *(data + i));
}

/// <summary>
/// �Ƴ�����ĸ֮��������ַ�
/// </summary>
void example_removesp() {
	char line[150];
	int i, j;
	printf("����һ���ַ���: ");
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
		
		printf("�ҵ�������ţ�%s \n",line);
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