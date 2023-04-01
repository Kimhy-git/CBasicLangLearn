#include <stdio.h>

int main_exam_09_05(void) {
	char str[50];

	printf("문자열을 입력하세요: ");
	// 배열은 주소접근자(&)를 붙이지 않아도 된다.
	scanf_s(" %s", str, sizeof(str));

	printf("입력된 문자열: %s\n", str);

	return 0;
}