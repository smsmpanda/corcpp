#define _CRT_SECURE_NO_WARNINGS
#include<stdint.h>
#include<string.h>

typedef struct  
{
	char* company;
	float width;
	float height;
	char* color;
} Car;

Car Change(Car *car,char* company,char *color,float w,float h) {
	car->company = "��Ϊ����";
	car->color = "��ʿ��";
	car->width = 5.32;
	car->height = 1.45;
}

void Print(Car* car) {
	printf("�������̣�%s\n",car->company);
	printf("��ɫ��%s\n", car->color);
	printf("������%.3f\n",car->width);
	printf("���ߣ�%.1f\n",car->height);
	printf("\n");
}

int main() {
	Car xiaomi;
	xiaomi.company = "С������";
	xiaomi.color = "������";
	xiaomi.width = 4.98;
	xiaomi.height = 1.25;

	Print(&xiaomi);

	Car huawei = Change(&xiaomi,"��Ϊ����","����ɫ",5.12,1.45);
	Print(&huawei);
}



void test1() {
	printf("%s", "�þò���������������\n");
	char* n = "С��";
	char* n1 = "С��";

	int r = strcmp(n, n1);
	char* s = r == 0 ? "true" : "false";
	printf("%s == %s ? %s\n", n, n1, s);

	char* s1 = "T,Work";
	printf("ʱ�䣺����%s\n", "c");
	printf("�¼���%s", s1 += 2);
}