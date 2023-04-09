#include <stdio.h>

int sayHello2(int count) {
	printf("Hello!\n");

	if (count != 3) {
		sayHello2(count + 1);
	}

	return 0;
}

int main_exam_16_06(void) {
	sayHello2(1);

	return 0;
}