#include <stdio.h>

int main_08_08(void) {

	// �ܼ� for��
	for (int dan = 2; dan < 10; dan++) {
		// ���ϱ� for��
		for (int mul = 1; mul < 10; mul++) {
			printf("%d ", dan * mul);
		}
		printf("\n");
	}

	return 0;
}