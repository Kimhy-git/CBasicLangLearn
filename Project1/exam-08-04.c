#include <stdio.h>

int main_08_04(void) {
	int num = -1;

	do {
		printf("-1 �Է� �� ����.\n");
		scanf_s("%d", &num);
	} while (num != -1);

	return 0;
}