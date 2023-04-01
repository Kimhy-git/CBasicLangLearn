#include <stdio.h>

// 배열 자료형
int main_exam_09_02(void) {
	int i;
	int odd[3];
	int even[5] = {2, 4, 6, 8, 10};

	odd[0] = 1;
	odd[1] = 3;
	odd[2] = 5;

	printf("%d %d %d\n", odd[0], odd[1], odd[2]);

	// 배열의 크기(길이)를 최대로 잡아주는게 좋다
	// int evenSize = sizeof(even) / sizeof(int);

	for (i = 0; i < 5; i++) {
		printf("%d ", even[i]);
	}
	printf("\n");

	return 0;
}