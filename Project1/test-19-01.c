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
		printf("직원%d의 정보 입력\n", i + 1);
		printf("이름: ");
		scanf_s("%s", person[i].name, MAX_LANG);
		printf("연락처: ");
		scanf_s("%s", person[i].phone, MAX_LANG);
		printf("급여: ");
		scanf_s("%d", &person[i].salary);
	}
	
	for (int i = 0; i < 3; i++) {
		printf("직원%d의 이름: %s, 연락처: %s, 급여: %d\n", i+1, person[i].name, person[i].phone, person[i].salary);
		printf("\n");
	}

	return 0;
}