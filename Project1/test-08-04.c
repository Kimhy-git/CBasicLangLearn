#include <stdint.h>

int main_test_08_04(void) {
	// ���� ������ �� ���� �Էµȴ�. ù��° �������� �ι�° �������� ���ڸ� ����ϸ鼭
	// 5�� ����� ���� "Fizz" 11�� ����� ���� "Buzz", ������� ���� "FizzBuzz" ���
	// (continue �̿� ����)

	int num1 = 50, num2 = 60;
	
	for (int i = num1; i < num2 + 1; i++) {
		if (i % 5 == 0 && i % 11 == 0) {
			printf("FizzBuzz\n");
		}
		else if (i % 5 == 0) {
			printf("Fizz\n");
		}
		else if (i % 11 == 0) {
			printf("Buzz\n");
		}
		else {
			printf("%d\n", i);
		}
	}

	printf("----------\n");
	// �Ʒ��� continue break ����
	for (int i = num1; i < num2 + 1; i++) {
		if (i % 5 == 0 && i % 11 == 0) {
			printf("FizzBuzz\n");
			continue;
		}
		if (i % 5 == 0) {
			printf("Fizz\n");
			continue;
		}
		if (i % 11 == 0) {
			printf("Buzz\n");
			continue;
		}	
		printf("%d\n", i);
	}

	return 0;
}