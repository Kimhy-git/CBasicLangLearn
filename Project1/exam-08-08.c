#include <stdio.h>

int main_08_08(void) {

	// 단수 for문
	for (int dan = 2; dan < 10; dan++) {
		// 곱하기 for문
		for (int mul = 1; mul < 10; mul++) {
			printf("%d ", dan * mul);
		}
		printf("\n");
	}

	return 0;
}