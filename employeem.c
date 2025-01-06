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

//���ְ����Ϣ
Employee* addEmployee(Employee* head) {
	Employee* newEmployee = (Employee*)malloc(sizeof(Employee));
	if (newEmployee == NULL) {
		return 0;
	}
	printf("������ְ����ţ�");
	scanf("%d", &newEmployee->id);
	printf("������ְ��������");
	scanf("%s", newEmployee->name);
	printf("������ְ���Ա�: ");
	scanf("%s", newEmployee->gender);
	printf("������ְ������: ");
	scanf("%d", &newEmployee->age);
	printf("������ְ�����ڲ���: ");
	scanf("%s", newEmployee->department);
	printf("������ְ��ְλ: ");
	scanf("%s", newEmployee->position);

	newEmployee->next = head;
	return newEmployee;
}

//��ѯְ����Ϣ
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

//�޸�ְ����Ϣ
void modifyEmployeeAge(Employee* head, int id, int newAge) {
	Employee* employee = searchEmployeeById(head, id);
	if (employee != NULL) {
		employee->age = newAge;
		printf("ְ�������޸ĳɹ���\n");
		return;
	}
	printf("δ�ҵ����:%d��Ա����", id);
}

//ְ����Ϣɾ��
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

// ��ʾ����ְ����Ϣ����
void displayEmployees(Employee* head) {
	Employee* current = head;
	while (current != NULL) {
		printf("ְ�����: %d\n", current->id);
		printf("ְ������: %s\n", current->name);
		printf("ְ���Ա�: %s\n", current->gender);
		printf("ְ������: %d\n", current->age);
		printf("ְ������: %s\n", current->department);
		printf("ְ��ְλ: %s\n", current->position);
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
		printf("\nְ������ϵͳ�˵�\n");
		printf("1. ���ְ����Ϣ\n");
		printf("2. ��ѯְ����Ϣ������ţ�\n");
		printf("3. �޸�ְ����Ϣ��������޸����䣩\n");
		printf("4. ɾ��ְ����Ϣ������ţ�\n");
		printf("5. ��ʾ����ְ����Ϣ\n");
		printf("6. �˳�ϵͳ\n");
		printf("���������ѡ��: ");
		scanf("%d", &choice);
		switch (choice)
		{	
		case 1:
			head = addEmployee(head);
			break;
		case 2:
			printf("������Ҫ��ѯ��ְ�����: ");
			scanf("%d", &id);
			Employee* searched = searchEmployeeById(head, id);
			if (searched != NULL) {
				printf("ְ�����: %d\n", searched->id);
				printf("ְ������: %s\n", searched->name);
				printf("ְ���Ա�: %s\n", searched->gender);
				printf("ְ������: %d\n", searched->age);
				printf("ְ������: %s\n", searched->department);
				printf("ְ��ְλ: %s\n", searched->position);
			}
			else {
				printf("δ�ҵ����:%d��ְ����Ϣ��\n",id);
			}
			break;
		case 3:
			printf("������Ҫ�޸ĵ�ְ�����: ");
			scanf("%d", &id);
			printf("�������µ�����: ");
			scanf("%d", &newAge);
			modifyEmployeeAge(head, id, newAge);
			break;
		case 4:
			printf("������Ҫɾ����ְ�����: ");
			scanf("%d", &id);
			head = deleteEmployee(head, id);
			break;
		case 5:
			displayEmployees(head);
			break;
		case 6:
			printf("�˳�ϵͳ����лʹ�ã�\n");
			while (head != NULL) {
				Employee* temp = head;
				head = head->next;
				free(temp);
			}
			return 0;
		default:
			printf("��Ч��ѡ�����������롣\n");
		}
	}
	return 0;
}