#include <stdio.h>

void swapNumber(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
	printf("함수 안에서 확인한 결과 num: %d, num2: %d \n", num1, num2);
}

int main_exam_16_03(void) {
	int number1 = 33;
	int number2 = 99;

	swapNumber(number1, number2);
	printf("함수 호출 완료 후 확인한 결과 number: %d, number2: %d \n", number1, number2);

	return 0;
}