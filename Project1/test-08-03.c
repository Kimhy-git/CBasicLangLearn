#include <stdio.h>
#define PLUS '+'
#define MINUS '-'
#define MULTIPLY '*'

int main_test_08_03(void) {
	// �ǿ����ڿ� �����ڸ� �Է¹޾� ������� ���. switch case���� �̿�.
	int num1 = 0, num2 = 0;
	char operator;
	
	printf("���ڸ� �Է����ּ���. : ");
	scanf_s("%d", &num1);
	printf("�����ڸ� �Է����ּ���. : ");
	scanf_s(" %c", &operator, sizeof(operator));
	printf("���ڸ� �Է����ּ���. : ");
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