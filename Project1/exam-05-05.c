#include <stdio.h>

// �������� �켱 ����
int main_05_05(void) {

	int num1 = 3;
	int num2 = 5;

	int result;

	// ���� ���� : ���ϱ� -> ���ϱ� -> ��� -> ��������������
	result = num1++ + num2 * 3;
	printf("%d", result);

	// ���������ڴ� ��κ� �ݺ��п��� ���

	return 0;
}