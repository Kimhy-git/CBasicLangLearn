#include <stdio.h>

// static : ����� ���� ������ ���� �� �Ҹ����� ����.
void increaseNumber() {
	static int number = 0;
	number++;
	printf("number : %d\n", number);
}

int main_exam_15_07(void) {
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();

	return 0;
}