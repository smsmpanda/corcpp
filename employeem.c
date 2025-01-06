#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee {
	int id;
	char name[50];
	char gender[10];
	int age;
	char department[50];
	char position[50];
	struct Employee* next;
} Employee;

//添加职工信息
Employee* addEmployee(Employee* head) {
	Employee* newEmployee = (Employee*)malloc(sizeof(Employee));
	if (newEmployee == NULL) {
		return 0;
	}
	printf("请输入职工编号：");
	scanf("%d", &newEmployee->id);
	printf("请输入职工姓名：");
	scanf("%s", newEmployee->name);
	printf("请输入职工性别: ");
	scanf("%s", newEmployee->gender);
	printf("请输入职工年龄: ");
	scanf("%d", &newEmployee->age);
	printf("请输入职工所在部门: ");
	scanf("%s", newEmployee->department);
	printf("请输入职工职位: ");
	scanf("%s", newEmployee->position);

	newEmployee->next = head;
	return newEmployee;
}

//查询职工信息
Employee* searchEmployeeById(Employee* head, int id) {
	Employee* current = head;
	while (current != NULL)
	{
		if (current->id == id) {
			return current;
		}
		current = current->next;
	}
	return NULL;
}

//修改职工信息
void modifyEmployeeAge(Employee* head, int id, int newAge) {
	Employee* employee = searchEmployeeById(head, id);
	if (employee != NULL) {
		employee->age = newAge;
		printf("职工年龄修改成功！\n");
		return;
	}
	printf("未找到编号:%d的员工！", id);
}

//职工信息删除
Employee* deleteEmployee(Employee* head, int id) {
	if (head == NULL) {
		return head;
	}
	if (head->id == id) {
		Employee* temp = head;
		head = head->next;
		free(temp);
		return head;
	}
	Employee* current = head;
	while (current->next!=NULL && current->next->id!=id)
	{
		current = current->next;
	}
	if (current->next != NULL) {
		Employee* temp = current->next;
		current->next = current->next->next;
		free(temp);
	}
	return head;
}

// 显示所有职工信息函数
void displayEmployees(Employee* head) {
	Employee* current = head;
	while (current != NULL) {
		printf("职工编号: %d\n", current->id);
		printf("职工姓名: %s\n", current->name);
		printf("职工性别: %s\n", current->gender);
		printf("职工年龄: %d\n", current->age);
		printf("职工部门: %s\n", current->department);
		printf("职工职位: %s\n", current->position);
		printf("------------------------\n");
		current = current->next;
	}
}

int main() {
	Employee* head = NULL;
	int choice;
	int id, newAge;

	while (1)
	{
		printf("\n职工管理系统菜单\n");
		printf("1. 添加职工信息\n");
		printf("2. 查询职工信息（按编号）\n");
		printf("3. 修改职工信息（按编号修改年龄）\n");
		printf("4. 删除职工信息（按编号）\n");
		printf("5. 显示所有职工信息\n");
		printf("6. 退出系统\n");
		printf("请输入你的选择: ");
		scanf("%d", &choice);
		switch (choice)
		{	
		case 1:
			head = addEmployee(head);
			break;
		case 2:
			printf("请输入要查询的职工编号: ");
			scanf("%d", &id);
			Employee* searched = searchEmployeeById(head, id);
			if (searched != NULL) {
				printf("职工编号: %d\n", searched->id);
				printf("职工姓名: %s\n", searched->name);
				printf("职工性别: %s\n", searched->gender);
				printf("职工年龄: %d\n", searched->age);
				printf("职工部门: %s\n", searched->department);
				printf("职工职位: %s\n", searched->position);
			}
			else {
				printf("未找到编号:%d的职工信息。\n",id);
			}
			break;
		case 3:
			printf("请输入要修改的职工编号: ");
			scanf("%d", &id);
			printf("请输入新的年龄: ");
			scanf("%d", &newAge);
			modifyEmployeeAge(head, id, newAge);
			break;
		case 4:
			printf("请输入要删除的职工编号: ");
			scanf("%d", &id);
			head = deleteEmployee(head, id);
			break;
		case 5:
			displayEmployees(head);
			break;
		case 6:
			printf("退出系统，感谢使用！\n");
			while (head != NULL) {
				Employee* temp = head;
				head = head->next;
				free(temp);
			}
			return 0;
		default:
			printf("无效的选择，请重新输入。\n");
		}
	}
	return 0;
}