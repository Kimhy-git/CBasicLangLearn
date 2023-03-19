#include <stdio.h>

// 대입연산자
int main_exam_05_02(void) {
	int num1 = 3, num2 = 4;

	// 복합 대입 연산자
	num1 += 3;	// num1 = num1 + 3;
	num2 *= 4;

	printf("복합대입연산 이후 num1의 값 : %d\n", num1);
	printf("복합대입연산 이후 num2의 값 : %d\n", num2);

	return 0;
}