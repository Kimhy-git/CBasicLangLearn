#include <stdio.h>
// ��ũ�� ��� : �� ��ſ� ���������� ���� ����, ���������� ��� ����
#define LENGTH 10

// ���
int main_exam_02_06(void) {

	int number = 3;
	// �ɺ��� ���(const) : ������ �Ǹ� �ٲ��� �ʴ´�
	const int NUMBER = 5;
	number = 10;

	printf("%d\n", LENGTH);
	printf("%d\n", number);
	printf("%d\n", NUMBER);

	return 0;
}



