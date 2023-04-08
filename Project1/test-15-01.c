#include <stdio.h>

void clac(int n1, int n2) {
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
	printf("%d - %d = %d\n", n1, n2, n1 - n2);
	printf("%d * %d = %d\n", n1, n2, n1 * n2);
	printf("%d / %d = %d\n", n1, n2, n1 / n2);
}

int main_test_15_01(void) {
	int a, b;
	scanf_s("%d %d", &a, & b);

	clac(a, b);

	return 0;
}