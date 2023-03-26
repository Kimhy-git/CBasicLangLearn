#include <stdio.h>
#define PLUS '+'
#define MINUS '-'
#define MULTIPLY '*'

int main_test_08_03(void) {
	// 피연산자와 연산자를 입력받아 결과값을 출력. switch case문을 이용.
	int num1 = 0, num2 = 0;
	char operator;
	
	printf("숫자를 입력해주세요. : ");
	scanf_s("%d", &num1);
	printf("연산자를 입력해주세요. : ");
	scanf_s(" %c", &operator, sizeof(operator));
	printf("숫자를 입력해주세요. : ");
	scanf_s("%d", &num1);

	switch (operator)
	{
		case PLUS:
			printf("%d %c %d = %d", num1, operator, num2, num1 + num2);
			break;
		case MINUS:
			printf("%d %c %d = %d", num1, operator, num2, num1 - num2);
			break;
		case MULTIPLY:
			printf("%d %c %d = %d", num1, operator, num2, num1 * num2);
			break;
		default:
			break;
	}

	return 0;
}