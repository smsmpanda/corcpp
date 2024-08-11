#define _CRT_SECURE_NO_WARNINGS
#include <string.h>


//struct Stu
//{
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5]
//} s1,s2,s3; // 这是三个全局的结构体变量
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

//int arr[] 返回的数组的首元素地址及指针的大小
void arrtest(int arr[]) {
	printf("%d", sizeof arr);
}

/// <summary>
/// 求n的阶乘 5x4x3x2x1
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

	struct Stu s1 = { "张三",20,"15848613594","男",{ "北京市","海淀区",120001} };
	struct Stu s2 = { "张三",20,"15848613594","保密",{ "上海市","闵行区",140001} };

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
	printf("原始字符串: %s\n", tel);
	fz(tel);
	printf("反转后的字符串: %s\n", tel);
	return 0;
}