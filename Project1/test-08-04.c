#include <stdint.h>

int main_test_08_04(void) {
	// 정수 값으로 두 개가 입력된다. 첫번째 정수부터 두번째 정수까지 숫자를 출력하면서
	// 5의 배수일 때는 "Fizz" 11의 배수일 때는 "Buzz", 공배수일 때는 "FizzBuzz" 출력
	// (continue 이용 가능)

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
	// 아래는 continue break 응용
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