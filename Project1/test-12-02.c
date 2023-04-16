#include <stdio.h>
/*
세개의 변수에 저장된 값을 서로 뒤바꾸는 함수를 정의해보자.예를 들어서 함수의 이름이
Swap3라고하면, Swap3(&num1, &num2, &num3) 형태로 호출되어야한다.

---- - num1 값을 num2에 num2 값은 num3에 그리고 num3에 저장된 값은 num1에 저장되어야한다. ---- -
*/

void Swap(int* num1, int* num2, int* num3) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = *num3;
	*num3 = temp;
}

int main_test_12_02(void) {
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;

	printf("%d %d %d \n", num1, num2, num3);
	Swap(&num1, &num2, &num3);
	printf("%d %d %d ", num1, num2, num3);

	return 0;
}