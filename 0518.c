#define _CRT_SECURE_NO_WARNINGS
#include <string.h>


//struct Stu
//{
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5]
//} s1,s2,s3; // ��������ȫ�ֵĽṹ�����
struct Address {
	char province[20];
	char city[20];
	int zipcode;
};

struct Stu {
	char name[20];
	short age;
	char tel[12];
	char sex[5];
	struct Address address;
};

//int arr[] ���ص��������Ԫ�ص�ַ��ָ��Ĵ�С
void arrtest(int arr[]) {
	printf("%d", sizeof arr);
}

/// <summary>
/// ��n�Ľ׳� 5x4x3x2x1
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int jc(int n) {
	if (n <= 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	return n * jc(n - 1);
}

char* fz(char* str) 
{
	int len = strlen(str);
	int i, j;
	char temp;

	for (i = 0, j = len - 1; i < j; i++, j--) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

int main_0518() {

	int arr[10] = { 1,2,3 };
	arrtest(arr);

	struct Stu s1 = { "����",20,"15848613594","��",{ "������","������",120001} };
	struct Stu s2 = { "����",20,"15848613594","����",{ "�Ϻ���","������",140001} };

	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.tel);
	printf("%s\n", s1.address.province);
	printf("%s\n", s1.address.city);
	printf("%d\n", s1.address.zipcode);

	int jcr = jc(5);
	printf("jcr=%d\n", jcr);

	// hello
	char tel[] = "13190703594";
	printf("ԭʼ�ַ���: %s\n", tel);
	fz(tel);
	printf("��ת����ַ���: %s\n", tel);
	return 0;
}