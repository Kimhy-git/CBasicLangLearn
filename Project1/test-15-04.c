#include <stdio.h>

void convertCMtoM(int h) {
	double m = (double)h / 100;
	printf("%0.2f m 입니다.", m);
}

int main_test_15_04(void) {
	int height;
	printf("키(cm)를 입력해주세요. : ");
	scanf_s("%d", &height);

	convertCMtoM(height);

	return 0;
}