#include <stdio.h>

int main_exam_04_03(void) {
	char character = 'X';
	int inumber = 92;
	double dnumber = 20.21056;

	printf("%c\n", character);
	printf("%d\n", character);
	printf("%d\n", inumber);
	printf("%f\n", dnumber);

	// % 출력방법
	int incVal = 30;
	printf("가격이 %d%% 증가하였습니다.", incVal);

	return 0;
}