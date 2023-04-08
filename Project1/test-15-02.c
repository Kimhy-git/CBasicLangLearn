#include <stdio.h>

int sumBetween(int a, int b) {
	int result = 0;
	for (int i = a; i <= b; i++) {
		result += i;
	}
	return result;
}

int main_test_15_02(void) {
	int a, b, result;
	scanf_s("%d %d", &a, &b);

	result = sumBetween(a, b);
	printf("%d와 %d 사이의 정수의 총합: %d", a, b, result);

	return 0;
}