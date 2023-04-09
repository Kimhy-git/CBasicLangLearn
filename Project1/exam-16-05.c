/* 
	8일차

	재귀함수(Recursive Function) : 반복되는, 되풀이되는 함수
	-> 탈출 조건이 중요하다
	-> 무한반복문보다 리스크가 크다
*/

#include <stdio.h>

void sayHello() {
	printf("Hello!\n");
	sayHello();
}

int main_exam_16_05(void) {
	// 무한반복~
	sayHello();

	return 0;
}