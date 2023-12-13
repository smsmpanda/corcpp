#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/// <summary>
/// ��ȡÿ���������͵Ĵ洢�ռ��С
/// </summary>
void C_GetTypeSize()
{
	//printf-C���Ա����ṩ�ĺ���
	printf("Hello World!\n");

	printf("\n");
	printf("��������-���ٿռ�ߴ�.\n");
	printf("char sizeof :%d\n", sizeof(char));
	printf("short sizeof :%d\n", sizeof(short));
	printf("int sizeof :%d\n", sizeof(int));
	printf("long sizeof :%d\n", sizeof(long));
	printf("long long sizeof :%d\n", sizeof(long long));
	printf("float sizeof :%d\n", sizeof(float));
	printf("double sizeof :%d\n", sizeof(double));

	printf("\n");
}

/// <summary>
/// ��������ʹ�þ���
/// </summary>
void C_TypePrint()
{
	printf("�������;���.\n");

	//char
	char ch = 'A';
	printf("char ---> %c\n", ch);

	//short-int16
	short n = 32769;
	printf("short int ---> %d\n", n);

	//int
	int n1 = 123;
	printf("int ---> %d\n", n1);

	//long
	long n2 = 123;
	printf("long ---> %d\n", n2);

	//long long
	long long n3 = 2423;
	printf("long long ---> %d\n", n3);

	//float
	float n4 = 5.0f;
	printf("float ---> %f\n", n4);

	//double
	double n5 = 3.14;
	printf("double ---> %lf\n", n5);

	printf("\n");
}

/// <summary>
/// ��������֮��
/// </summary>
void C_AddTwoNumbers() {
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	printf("Add ִ�н����%d", a + b);
}

/// <summary>
/// ����ȫ�ֱ���
/// </summary>
void C_AccessGlobalValue() {
	extern int g_val;
	printf("ȫ�ֱ���g_val --> %d", g_val);
}

//#define ����ı�ʶ������
#define MAX 10

/// <summary>
/// ö�ٳ���
/// </summary>
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

/// <summary>
/// ������ʹ��
/// </summary>
void C_ConstVaribleUse() {
	//����
	const int n = 10;
	printf("����n:%d\n", n);


	//#define ����ı�ʶ������
	int arr[MAX] = { 0 };

	//��������
	enum Sex sex = FEMALE;
	sex = SECRET;


	printf("ö�� Sex MALE��%d\n", MALE);
	printf("ö�� Sex FEMALE��%d\n", FEMALE);
	printf("ö�� Sex SECRET��%d\n", SECRET);
}

/// <summary>
/// �ַ���
/// </summary>
void C_StringTypeUse() {
	//'\0'���ַ���������־���������ַ�������
	char str[] = "abc";
	char str1[] = { 'a','b','c' };

	//3
	printf("str len :%d\n", strlen(str));

	//���ֵ����Ϊû���ҵ�'\0'�����ַ�
	printf("str1 len :%d\n", strlen(str1));

	//ת���ַ�
	char str2[] = "c:\\aa\\na\\ta\n";
	printf(str2);

	printf("%s\n", "c\\ab12");
}

/// <summary>
/// ѡ�����
/// </summary>
void C_Ifelse() {
	int input = 0;
	printf("��ѡ��");
	scanf("%d", &input);
	if (input == 0) {
		printf("�ؼ�������");
	}
	else {
		printf("���������۷�");
	}
}

/// <summary>
/// Sizeof & Array
/// </summary>
void C_Sizeof() {
	int arr[] = { 1,2,3,4,5,6,7 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("Array variable arr length is %d\n", len);

	int a = 10;
	printf("sizeof(a) : %d\n ", sizeof(a));
	printf("sizeof(int) : %d\n", sizeof(int));
	printf("sizeof a : %d\n", sizeof a);
	printf("sizeof arr : %d\n", sizeof(arr));


	int arr1[4] = { 1,2,3,4 };
	printf("%d\n", arr1[0]);
	printf("%d\n", arr1[1]);
	printf("%d\n", arr1[2]);
	printf("%d\n", arr1[3]);
}

/// <summary>
/// ����ʵ��
/// </summary>
/// <param name="x"></param>
/// <param name="y"></param>
/// <returns></returns>
int Max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

//��Ķ���
#define MAXF(X,Y) (X>Y?X:Y)

int main1()
{
	printf("C Hello!\n");


	int a = 0;
	int b = ~a;
	printf("b is %d\n", b);

	int c = a++;
	printf("c : %d\n", c);
	int d = ++a;
	printf("d : %d\n", d);

	int e = 100;
	int f = 20;
	int g = Max(e, f);
	printf(" e:%d, f:%d  Max(e,f): %d\n", e, f, g);
	printf(" e:%d, f:%d  MAX(e,f): %d\n", e, f, MAXF(100,10));

	return 0;
}