#include <stdio.h>
// 매크로 상수 : 값 대신에 변수명으로 적기 위해, 전역적으로 사용 가능
#define LENGTH 10

// 상수
int main_exam_02_06(void) {

	int number = 3;
	// 심볼릭 상수(const) : 선언이 되면 바뀌지 않는다
	const int NUMBER = 5;
	number = 10;

	printf("%d\n", LENGTH);
	printf("%d\n", number);
	printf("%d\n", NUMBER);

	return 0;
}



