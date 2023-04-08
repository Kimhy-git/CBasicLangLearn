#include <stdio.h>

// 사용자 정의 함수의 선언. main함수 위쪽에 선언한다.
int add(int a, int b) {	// 매개변수(parameter:파라미터)
	return a + b;
}

// main함수 아래쪽에 정의하고 싶으면 선언부를 먼저 추가해준다.
int add2(int a, int b);

int main_exam_15_01(void) {
	int result;

	result = add(2, 4);	// 전달인자(arguments)
	printf("함수가 반환한 값: %d\n", result);

	return 0;
}

// 정의부
int add2(int a, int b) {
	return a + b;
}