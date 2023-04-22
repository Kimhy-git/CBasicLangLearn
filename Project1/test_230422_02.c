// 구구단 입력 출력
#include <stdio.h>

int main_test_230422_02(void) {

	int ku;
	scanf_s("%d", &ku);

	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", ku, i, ku*i);
	}

	return 0;
}
