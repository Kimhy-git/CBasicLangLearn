#include <stdio.h>

void convertCMtoM(int h) {
	double m = (double)h / 100;
	printf("%0.2f m �Դϴ�.", m);
}

int main_test_15_04(void) {
	int height;
	printf("Ű(cm)�� �Է����ּ���. : ");
	scanf_s("%d", &height);

	convertCMtoM(height);

	return 0;
}