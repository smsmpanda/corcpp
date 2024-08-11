#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>

/// <summary>
/// 字符串复制函数
/// </summary>
/// <param name="dest"></param>
/// <param name="src"></param>
/// <returns></returns>
char* my_strcpy(char* dest, const char* src) {
	assert(src != NULL);			//断言
	assert(dest != NULL);		//断言
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main_strcopy() {

	/*char str[] = "hello";
	char str1[] = "world";

	printf("%s\n", my_strcpy(str, str1));*/

	// char a = -128;
	// 1000 0000 0000 0000 0000 0000 1000 0000  原码
	// 1111 1111 1111 1111 1111 1111 0111 1111  反码
	// 1111 1111 1111 1111 1111 1111 1000 0000  补码

	// %u打印无符号十进制数
	// printf("%u\n",a); //输出结果：4294967168

	/*unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n",i);
	}*/
	/*char b = -129;
	printf("%d", b);

	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d",strlen(a));*/

	/*char a = -1;
	char b = -1;
	unsigned char c = -1;
	printf("a=%d,b=%d,c=%d",a,b,c);*/

	/*unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
	}*/

	/*unsigned char i = 0;
	for ( i = 0; i <=255; i++)
	{
		printf("hello");
	}*/

	return 0;
}