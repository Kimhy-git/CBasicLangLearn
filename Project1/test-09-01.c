#include <stdio.h>

int main_test_09_01(void) {
	int arr[5] = {2, 5, 8, 17, 21};
	int total = 0;
	double average;
	int arrSize = sizeof(arr) / sizeof(int);

	for (int i = 0; i < arrSize; i++) {
		total += arr[i];
	}
	average = (double)total / arrSize;

	printf("total : %d, average: %0.1f", total, average);

	return 0;
}