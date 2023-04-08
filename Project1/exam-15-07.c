#include <stdio.h>

// static : 선언된 지역 내에서 생성 후 소멸하지 않음.
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