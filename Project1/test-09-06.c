#include <stdio.h>

int main_test_09_06(void) {
	int arr[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	int i, j;
	printf("[���� ��]\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// ���� �� > ���� ���� �ٲ�
	printf("[���� ��]\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%3d", arr[j][i]);
		}
		printf("\n");
	}

	return 0;
}