#include <stdio.h>

// �迭 �ڷ���
int main_exam_09_02(void) {
	int i;
	int odd[3];
	int even[5] = {2, 4, 6, 8, 10};

	odd[0] = 1;
	odd[1] = 3;
	odd[2] = 5;

	printf("%d %d %d\n", odd[0], odd[1], odd[2]);

	// �迭�� ũ��(����)�� �ִ�� ����ִ°� ����
	// int evenSize = sizeof(even) / sizeof(int);

	for (i = 0; i < 5; i++) {
		printf("%d ", even[i]);
	}
	printf("\n");

	return 0;
}