#include <stdio.h>

#define TEN = 10

// ��������
int number = 100;

int localFunc(int num) {
	int result = 0;
	int localval = 10;
	return result + num;
}

int main_exam_15_05(void) {
	int num = 5;
	int result = localFunc(num);
	int localval = 20;

	// printf("���: %d\n", result);
	printf("�������� number�� �� : %d\n", number);

	return 0;
}