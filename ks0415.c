#define _CRT_SECURE_NO_WARNINGS

#include<sddl.h>

void PrintBasicTypeSizeof() {
	printf("��������-���ٿռ�ߴ�.\n");
	printf("\tTypeName\tsize\n");
	printf("\tchar \t\tsizeof :%d\n", sizeof(char));
	printf("\tshort \t\tsizeof :%d\n", sizeof(short));
	printf("\tint \t\tsizeof :%d\n", sizeof(int));
	printf("\tlong \t\tsizeof :%d\n", sizeof(long));
	printf("\tlong long \tsizeof :%d\n", sizeof(long long));
	printf("\tfloat \t\tsizeof :%d\n", sizeof(float));
	printf("\tdouble \t\tsizeof :%d\n", sizeof(double));
}

/// <summary>
/// �ַ���
/// </summary>
void StringType()
{
	//'\0'���ַ���������־���������ַ�������
	char str[] = "abc";
	char str1[] = { 'a', 'b', 'c' };

	printf("str len :%d\n", strlen(str));

	//���ֵ����Ϊû���ҵ�'\0'�����ַ�
	printf("str1 len :%d\n", strlen(str1));

	char* ss = "abcd";
	printf("ss len is %d\n", strlen(ss));

	// ת���ַ�
	char str2[] = "c:\\aa\\na\\ta\n";
	printf(str2);

}


int main() {
	PrintBasicTypeSizeof();
	extern int g_val;
	printf("extern int g_val:%d", g_val);

	StringType();

	return 0;
}