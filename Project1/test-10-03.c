#include <stdio.h>

// °á°ú°ª 5 8
int main_test_10_03(void) {
	int* ptr;
	int num1 = 5;
	int num2 = 8;

	ptr = &num1;
	printf("%d\n", *ptr);

	ptr = &num2;
	printf("%d\n", *ptr);

	return 0;
}