#include <stdio.h>

int main_test_10_04(void) {

	int arr[8] = {1,2,3,4,5,6,7,8};
	int* ptr = &arr[7];
	int total = 0; int value = 0;

	for (int i = 0; i < 8; i++) {
		value = *(ptr - i);
		if (value % 2 != 0) {
			total += value;
		}
	}

	printf("total : %d", total);

	return 0;
}