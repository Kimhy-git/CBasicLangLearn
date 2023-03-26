#include <stdio.h>

int main_test_08_05(void) {
	int height = 5;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("-----\n");

	for (int i = 0; i < height; i++) {
		for (int j = height; j >= 0; j--) {
			if (i < j) {
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}