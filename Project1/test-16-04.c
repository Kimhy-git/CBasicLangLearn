/*
	팩토리얼 문제

	팩토리얼은 n!로 표기하며 n * n-1 * n-2 * ... * 1
	사용자로부터 정수 n을 입력받아 팩토리얼 값을 구하는 코드를 재귀함수를 사용하여 구현
*/
#include <stdio.h>

// 곱하기는 0을 곱하면 0이 된다~!!
int factorial(int n) {
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

int main_test_16_04(void) {
	int n;
	printf("정수 값을 입력하세요(최대 10) : ");
	scanf_s("%d", &n);

	printf("%d", factorial(n));

	return 0;
}