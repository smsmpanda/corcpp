#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

struct Book
{
	char name[20];
	short price;
};

/// <summary>
/// ָ��
/// </summary>
void C_Point() {
	int a = 10;

	int* p = &a;
	printf("a's ptr is %p\n", p);

	//*p �����ò�����/��ӷ��ʲ�����
	*p = 100;
	printf("a = %d\n", a);
	printf("ptr sizeof is %d\n", sizeof(p));
}

/// <summary>
/// �ṹ��
/// </summary>
void C_Struct() {
	struct Book b1 = { "C���Գ������",55 };

	// name -> ��һ������
	strcpy(b1.name, "C++");
	printf("Book name is %s, price is %d\n", b1.name, b1.price);

	struct Book* bp = &b1;
	printf("Book name is %s, price is %d\n", bp->name, bp->price);
}


/// <summary>
/// ѭ��
/// </summary>
void C_Circulation() {
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch == 'Y') {
			printf("������ %c,ȷ��\n", ch);
			break;
		}
		putchar(ch);
	}

	int chart = 0;
	while ((chart = getchar()) != EOF)
	{
		if (chart >= 97 && chart <= 122) {
			printf("��������һ��Сд��ĸ!ת����Ϊ��%c\n", chart - 32);
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
	printf("n�Ľ׳�Ϊ��%d\n", ret);
}


/// <summary>
/// ��ϰ
/// </summary>
void C_BinarySearch() {
	int k = 53;
	int arr[10] = { 1,3,5,12,34,53,67,72,81 };

	int len = sizeof(arr) / sizeof(arr[0]); //���鳤��
	int left = 0;  //��ָ��
	int right = len - 1; //��ָ��

	while (left <= right)
	{
		int mid = (right + left) / 2;   //�м�ָ��
		if (arr[mid] > k) {
			right = mid - 1;
		}
		else if (arr[mid] < k) {
			left = mid + 1;
		}
		else {
			printf("�ҵ���ֵ��%d�����������±�Ϊ��%d\n", k, mid);
			break;
		}
	}
}

int main() {
	return 0;
}