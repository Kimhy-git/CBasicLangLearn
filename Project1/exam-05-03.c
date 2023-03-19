#include <stdio.h>
// bool의 경우 헤더파일 추가가 필요하다
#include <stdbool.h>

// 비교연산자
int main_exam_05_03(void) {
	int a = 10, b = 11; 

	// TRUE = 1, FALSE = 0
	printf("a == b = %d\n", a == b);
	printf("a != b = %d\n", a != b);
	printf("a > b = %d\n", a > b);
	printf("a < b = %d\n", a < b);
	printf("a <= b = %d\n", a <= b);

	return 0;
}