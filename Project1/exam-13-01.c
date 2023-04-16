#include <stdio.h>

int main_exam_13_01(void) {
	char good[] = "Good!";
	char* bad = "Bad!";

	// 배열 기반
	good[0] = 'H';	// 가능
	// good = "New Good";	// 불가능

	// 포인터 기반
	// bad[0] = 'S';	// 불가능
	bad = "New Bad";	// 가능

	printf("good : %s, bad : %s", good, bad);

	return 0;
}