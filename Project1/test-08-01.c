#include <stdio.h>

int main_test_08_01(void) {
	
	// Q. 100이상 200이하의 숫자 중에서 3과 7의 배수를 출력하는 프로그램을 작성. 단, 3의 배수이면서 7의 배수이면 한 번만 출력함.
	
	for (int i = 10; i < 51; i++) {
		if (i % 3 == 0 || i % 7 == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}