#include <stdio.h>

/* 
	�Ǽ� �� ���� �Է¹޾� ���ϰ� ���.
	���ϱ� ����� �ϴ� �Լ��� �ۼ�.
*/

double dSum(double d1, double d2) {	// d1, d2 = �Ķ����
	return d1 + d2;
}

int main_test_15_07(void) {
	double num1, num2, result;

	scanf_s("%lf %lf", &num1, &num2);	// double�� lf�� �Է¹���(���� �ƴ�!)
	result = dSum(num1, num2);
	printf("%0.2f + %0.2f = %0.2f", num1, num2, result);

	return 0;
}