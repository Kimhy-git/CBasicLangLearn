#include <stdio.h>

// 연산자의 우선 순위
int main_05_05(void) {

	int num1 = 3;
	int num2 = 5;

	int result;

	// 연산 순서 : 곱하기 -> 더하기 -> 결과 -> 후위증감연산자
	result = num1++ + num2 * 3;
	printf("%d", result);

	// 증감연산자는 대부분 반복분에서 사용

	return 0;
}