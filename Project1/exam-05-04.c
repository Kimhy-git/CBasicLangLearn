#include <stdio.h>

int main_exam_05_04(void) {

	int a = 10;
	int b = 10;

	// 연산자가 작동하는 시기의 차이
	printf("a: %d\n", a);
	printf("a: %d\n", ++a);	// 전위(perfix) 증가 연산자
	printf("a: %d\n", a);

	printf("b: %d\n", b);
	printf("b: %d\n", b++);	// 후위(postfix) 증가 연산자
	printf("b: %d\n", b);

	return 0;
}