#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/// <summary>
/// 获取每种数据类型的存储空间大小
/// </summary>
void C_GetTypeSize()
{
	//printf-C语言本身提供的函数
	printf("Hello World!\n");

	printf("\n");
	printf("数据类型-开辟空间尺寸.\n");
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
/// 数据类型使用举例
/// </summary>
void C_TypePrint()
{
	printf("数据类型举例.\n");

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
/// 计算两数之和
/// </summary>
void C_AddTwoNumbers() {
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	printf("Add 执行结果：%d", a + b);
}

/// <summary>
/// 访问全局变量
/// </summary>
void C_AccessGlobalValue() {
	extern int g_val;
	printf("全局变量g_val --> %d", g_val);
}

//#define 定义的标识符常量
#define MAX 10

/// <summary>
/// 枚举常量
/// </summary>
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

/// <summary>
/// 常量的使用
/// </summary>
void C_ConstVaribleUse() {
	//常量
	const int n = 10;
	printf("常量n:%d\n", n);


	//#define 定义的标识符常量
	int arr[MAX] = { 0 };

	//常量变量
	enum Sex sex = FEMALE;
	sex = SECRET;


	printf("枚举 Sex MALE：%d\n", MALE);
	printf("枚举 Sex FEMALE：%d\n", FEMALE);
	printf("枚举 Sex SECRET：%d\n", SECRET);
}

/// <summary>
/// 字符串
/// </summary>
void C_StringTypeUse() {
	//'\0'是字符串结束标志，不计入字符串长度
	char str[] = "abc";
	char str1[] = { 'a','b','c' };

	//3
	printf("str len :%d\n", strlen(str));

	//随机值，因为没有找到'\0'结束字符
	printf("str1 len :%d\n", strlen(str1));

	//转义字符
	char str2[] = "c:\\aa\\na\\ta\n";
	printf(str2);

	printf("%s\n", "c\\ab12");
}

/// <summary>
/// 选择语句
/// </summary>
void C_Ifelse() {
	int input = 0;
	printf("请选择：");
	scanf("%d", &input);
	if (input == 0) {
		printf("回家卖红薯！");
	}
	else {
		printf("走向人生巅峰");
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
/// 函数实现
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

//宏的定义
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