#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void NarcissisticNumber()
{
	//求和
	int sum = 0;
	int digital = 0;

	int temp = 0;
	for (int i = 0; i < 1000; i++)
	{
		digital = 1;
		sum = 0;

		//1.确定当前数字是几位数n
		temp = i;
		while (temp /= 10)
		{
			digital++;
		}

		//2.求每一位数的n次方之和
		temp = i;
		while (temp)
		{
			sum += pow(temp % 10, digital);
			temp /= 10;
		}

		//3.当前数字与每位n次方之和比较是否相等
		if (i == sum) {
			printf("Narcissistic Number:%d\n", i);
		}
	}
}

int main() {

	//水仙花数打印
	//NarcissisticNumber();

	//确定打印机行
	int line = 0;
	scanf("%d",&line);
	if (!(line % 2)) {
		printf("Please enter an odd number!");
		return 0;
	}

	// 总位数
	int N = line * 2 - 1;

	int space = 0;
	int _s = 0;
	int _g = 0;
	for (int i = 1; i <= N; i++) {
		if (i <= line) {
			space = line - i;
		}
		else {
			space = i % line;
		}

		_s = space;			//打印的空格数
		_g = N - 2 * space; //打印的图案数

		while (_s) {
			printf("%c", ' ');
			_s--;
		}

		while (_g) {
			printf("%c", '*');
			_g--;
		}

		printf("\n");
	}

	return 0;
}