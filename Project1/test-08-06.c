#include <stdio.h>

int main(void) {
	int height = 7;

	// �� �� �̰� �� ��??
	// �Ƕ�̵�
	for (int i = 0; i < height; i++) {
		for (int j = height; j >= 0; j--) {
			if (i < j) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		for (int k = 0; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}

	printf("-----\n");

	// ���̾�
	for (int i = 0; i < height; i++) {
		for (int j = height; j >= 0; j--) {
			if (i < j) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		for (int k = 0; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = height; i >= 0; i--) {
		for (int j = height; j >= 0; j--) {
			if (i < j) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		for (int k = 0; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}