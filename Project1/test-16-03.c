#include <stdio.h>

// 1���� n������ ��
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
	printf("n�� �Է��ϼ��� : ");
	scanf_s("%d", &n);
	int result = recursiveSum(n);
	printf("1���� %d������ �� : %d\n", n, result);

	return 0;
}