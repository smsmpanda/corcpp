#define _CRT_SECURE_NO_WARNINGS

#include <string.h>

void print(int n) {
	if (n > 9) {
		print(n / 10);
	}
	printf("%d ",n % 10);
}


/// <summary>
/// arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
/// </summary>
/// <param name="arr"></param>
void change(int* arr) {
	arr[0] = 110;
	arr[1] = 220;
}

int my_strlen(char* str) {
	if (*str != '\0') 
		return 1 + my_strlen(str+1);
	else
		return 0;
}

int main_04281() {

	char arr1[] = "bit";
	char arr2[20] = "##########";

	printf("%d ? %d\n", arr1, arr1[0]);
	printf("%d ? %d\n", arr1, &arr1[0]);
	printf("%d ? %d\n", *arr1, arr1[0]);

	strcpy(arr2, arr1);
	printf("%s", arr2);
	printf("\n");


	char msg[] = "The food bad";
	memset(msg, 'b', 3);
	printf("%s\n", msg);

	//1234
	print(1234);

	int arr[] = { 1,2 };
	change(arr);

	char str[] = "abcdf";
	int len = my_strlen(str);
	printf("%s len is %d", str, len);

	printf("\n");

	char arr3[] = "abc";
	char arr4[] = { 'a','b','c' };
	printf("%d\n",sizeof(arr3)); //4
	printf("%d\n",sizeof(arr4)); //3
	printf("%d\n",strlen(arr3)); //3
	printf("%d\n", strlen(arr4)); //n?

	return 0;
}