#include <stdio.h>

int main_test_08_02(void) {
	// Q. 정수를 두개 입력받아 구구단을 출력하는 프로그램 작성. 4와 8을 입력하면 4에서 8단까지 출력. 8과 4를 입력해도 4단에서 8단까지 출력.

	int num1 = 0, num2 = 0;
	int temp = 0;

	printf("정수를 두개 입력해주세요.\n");
	scanf_s("%d %d", &num1, &num2);
	if (num1 > num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	for (int i = num1; i < num2 + 1; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}