#include <stdio.h>
/*
������ ������ ����� ���� ���� �ڹٲٴ� �Լ��� �����غ���.���� �� �Լ��� �̸���
Swap3����ϸ�, Swap3(&num1, &num2, &num3) ���·� ȣ��Ǿ���Ѵ�.

---- - num1 ���� num2�� num2 ���� num3�� �׸��� num3�� ����� ���� num1�� ����Ǿ���Ѵ�. ---- -
*/

void Swap(int* num1, int* num2, int* num3) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = *num3;
	*num3 = temp;
}

int main_test_12_02(void) {
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;

	printf("%d %d %d \n", num1, num2, num3);
	Swap(&num1, &num2, &num3);
	printf("%d %d %d ", num1, num2, num3);

	return 0;
}