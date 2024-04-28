#define _CRT_SECURE_NO_WARNINGS

#include <string.h>


int main() {

	char arr1[] = "bit";
	char arr2[20] = "##########";

	printf("%d ? %d\n",arr1,arr1[0]);
	printf("%d ? %d\n",arr1,&arr1[0]);
	printf("%d ? %d\n",*arr1,arr1[0]);

	strcpy(arr2, arr1);
	printf("%s",arr2);
	printf("\n");
	

	char msg[] = "The food bad";
	memset(msg,'b',3);
	printf("%s\n",msg);


	return 0;
}