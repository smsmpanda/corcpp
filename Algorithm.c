#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void NarcissisticNumber()
{
	//���
	int sum = 0;
	int digital = 0;

	int temp = 0;
	for (int i = 0; i < 1000; i++)
	{
		digital = 1;
		sum = 0;

		//1.ȷ����ǰ�����Ǽ�λ��n
		temp = i;
		while (temp /= 10)
		{
			digital++;
		}

		//2.��ÿһλ����n�η�֮��
		temp = i;
		while (temp)
		{
			sum += pow(temp % 10, digital);
			temp /= 10;
		}

		//3.��ǰ������ÿλn�η�֮�ͱȽ��Ƿ����
		if (i == sum) {
			printf("Narcissistic Number:%d\n", i);
		}
	}
}

int main() {

	//ˮ�ɻ�����ӡ
	//NarcissisticNumber();

	//ȷ����ӡ����
	int line = 0;
	scanf("%d",&line);
	if (!(line % 2)) {
		printf("Please enter an odd number!");
		return 0;
	}

	// ��λ��
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

		_s = space;			//��ӡ�Ŀո���
		_g = N - 2 * space; //��ӡ��ͼ����

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