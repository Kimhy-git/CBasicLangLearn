#include <stdio.h>

int main_test_10_02(void) {
	int number = 10;
	int* pnumber = &number;

	printf("10 È£Ãâ : %d\n", *pnumber);
	printf("pnumber : %p\n", pnumber);

	return 0;
}