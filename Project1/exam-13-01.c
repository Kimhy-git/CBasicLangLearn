#include <stdio.h>

int main_exam_13_01(void) {
	char good[] = "Good!";
	char* bad = "Bad!";

	// �迭 ���
	good[0] = 'H';	// ����
	// good = "New Good";	// �Ұ���

	// ������ ���
	// bad[0] = 'S';	// �Ұ���
	bad = "New Bad";	// ����

	printf("good : %s, bad : %s", good, bad);

	return 0;
}