/*
	���丮�� ����

	���丮���� n!�� ǥ���ϸ� n * n-1 * n-2 * ... * 1
	����ڷκ��� ���� n�� �Է¹޾� ���丮�� ���� ���ϴ� �ڵ带 ����Լ��� ����Ͽ� ����
*/
#include <stdio.h>

// ���ϱ�� 0�� ���ϸ� 0�� �ȴ�~!!
int factorial(int n) {
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

int main_test_16_04(void) {
	int n;
	printf("���� ���� �Է��ϼ���(�ִ� 10) : ");
	scanf_s("%d", &n);

	printf("%d", factorial(n));

	return 0;
}