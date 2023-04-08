#include <stdio.h>

void printNum(int n) {
	printf("param: %d\n", n);
}

int inputNum() {
	int num;
	printf("정수를 입력해주세요: ");
	scanf_s("%d", &num);

	return num;
}

void guide(void) {
	printf("inputNum 함수를 통해 정수를 입력할 수 있습니다.\n");
	printf("또한 printNum 함수를 통해 입력한 정수를 출력할 수도 있습니다.\n");
}

int main_exam_15_04(void) {
	guide();

	printNum(4);
	
	printf("%d\n", inputNum());

	return 0;
}