#include <stdio.h>

void swapNumber(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
	printf("�Լ� �ȿ��� Ȯ���� ��� num: %d, num2: %d \n", num1, num2);
}

int main(void) {
	int number1 = 33;
	int number2 = 99;

	swapNumber(number1, number2);
	printf("�Լ� ȣ�� �Ϸ� �� Ȯ���� ��� number: %d, number2: %d \n", number1, number2);

	return 0;
}