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
	car->company = "华为汽车";
	car->color = "武士黑";
	car->width = 5.32;
	car->height = 1.45;
}

void Print(Car* car) {
	printf("汽车厂商：%s\n",car->company);
	printf("颜色：%s\n", car->color);
	printf("车长：%.3f\n",car->width);
	printf("车高：%.1f\n",car->height);
	printf("\n");
}

int main() {
	Car xiaomi;
	xiaomi.company = "小米汽车";
	xiaomi.color = "海湾蓝";
	xiaomi.width = 4.98;
	xiaomi.height = 1.25;

	Print(&xiaomi);

	Car huawei = Change(&xiaomi,"华为汽车","西柚色",5.12,1.45);
	Print(&huawei);
}



void test1() {
	printf("%s", "好久不见，欢饮回来！\n");
	char* n = "小米";
	char* n1 = "小米";

	int r = strcmp(n, n1);
	char* s = r == 0 ? "true" : "false";
	printf("%s == %s ? %s\n", n, n1, s);

	char* s1 = "T,Work";
	printf("时间：星期%s\n", "c");
	printf("事件：%s", s1 += 2);
}