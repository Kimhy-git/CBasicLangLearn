#include <stdio.h>

/* 
	실수 두 개를 입력받아 더하고 출력.
	더하기 기능을 하는 함수를 작성.
*/

double dSum(double d1, double d2) {	// d1, d2 = 파라미터
	return d1 + d2;
}

int main_test_15_07(void) {
	double num1, num2, result;

	scanf_s("%lf %lf", &num1, &num2);	// double은 lf로 입력받음(숫자 아님!)
	result = dSum(num1, num2);
	printf("%0.2f + %0.2f = %0.2f", num1, num2, result);

	return 0;
}