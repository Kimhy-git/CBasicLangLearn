#include <stdio.h>
#define MAX_LANG 30

struct worker
{
	char name[MAX_LANG];
	char phone[MAX_LANG];
	int salary;
};
typedef struct worker WORKER;

int main(void) {
	WORKER person[3];

	for (int i = 0; i < 3; i++) {
		printf("����%d�� ���� �Է�\n", i + 1);
		printf("�̸�: ");
		scanf_s("%s", person[i].name, MAX_LANG);
		printf("����ó: ");
		scanf_s("%s", person[i].phone, MAX_LANG);
		printf("�޿�: ");
		scanf_s("%d", &person[i].salary);
	}
	
	for (int i = 0; i < 3; i++) {
		printf("����%d�� �̸�: %s, ����ó: %s, �޿�: %d\n", i+1, person[i].name, person[i].phone, person[i].salary);
		printf("\n");
	}

	return 0;
}