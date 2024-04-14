#define _CRT_SECURE_NO_WARNINGS

#include<sddl.h>

void PrintBasicTypeSizeof() {
	printf("数据类型-开辟空间尺寸.\n");
	printf("\tTypeName\tsize\n");
	printf("\tchar \t\tsizeof :%d\n", sizeof(char));
	printf("\tshort \t\tsizeof :%d\n", sizeof(short));
	printf("\tint \t\tsizeof :%d\n", sizeof(int));
	printf("\tlong \t\tsizeof :%d\n", sizeof(long));
	printf("\tlong long \tsizeof :%d\n", sizeof(long long));
	printf("\tfloat \t\tsizeof :%d\n", sizeof(float));
	printf("\tdouble \t\tsizeof :%d\n", sizeof(double));
}

int main() {
	PrintBasicTypeSizeof();
	extern int g_val;
	printf("extern int g_val:%d", g_val);
	return 0;
	
}