#include <stdio.h>

// 1부터 n까지의 합
int recursiveSum(int n) {
	/*
	if (n > 0) {
		n = n + n;
		recursiveSum(n-1);
	}
	return n;
	*/

	if (n == 0) return 0;

	return n + recursiveSum(n - 1);
}

int main_test_16_03(void) {
	int n;
	printf("n을 입력하세요 : ");
	scanf_s("%d", &n);
	int result = recursiveSum(n);
	printf("1부터 %d까지의 합 : %d\n", n, result);

	return 0;
}