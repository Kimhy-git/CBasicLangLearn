#include <stdio.h>

int main(void) {
	
	// Q1. 100�̻� 200������ ���� �߿��� 3�� 7�� ����� ����ϴ� ���α׷��� �ۼ�. ��, 3�� ����̸鼭 7�� ����̸� �� ���� �����.
	
	/*for (int i = 10; i < 51; i++) {
		if (i % 3 == 0 || i % 7 == 0) {
			printf("%d\n", i);
		}
	}*/

	// Q2. ������ �ΰ� �Է¹޾� �������� ����ϴ� ���α׷� �ۼ�. 4�� 8�� �Է��ϸ� 4���� 8�ܱ��� ���. 8�� 4�� �Է��ص� 4�ܿ��� 8�ܱ��� ���.

	int num1 = 0, num2 = 0;
	int temp = 0;

	printf("������ �ΰ� �Է����ּ���.\n");
	scanf_s("%d %d", &num1, &num2);
	if (num1 > num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	for (int i = num1; i < num2 + 1; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}