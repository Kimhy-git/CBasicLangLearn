#include <stdio.h>

void printNum(int n) {
	printf("param: %d\n", n);
}

int inputNum() {
	int num;
	printf("������ �Է����ּ���: ");
	scanf_s("%d", &num);

	return num;
}

void guide(void) {
	printf("inputNum �Լ��� ���� ������ �Է��� �� �ֽ��ϴ�.\n");
	printf("���� printNum �Լ��� ���� �Է��� ������ ����� ���� �ֽ��ϴ�.\n");
}

int main_exam_15_04(void) {
	guide();

	printNum(4);
	
	printf("%d\n", inputNum());

	return 0;
}