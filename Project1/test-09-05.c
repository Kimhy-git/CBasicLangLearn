#include <stdio.h>
#include <limits.h>

/*
길이가 5인 int형 배열을 선언해서 프로그램 사용자로부터 총 5개의 정수를 입력받은 다음
입력이 끝나면 다음의 내용을 출력하도록 코드를 작성하세요.

1. 입력된 정수 중 최대값
2. 입력된 정수 중 최소값
3. 입력된 정수의 총합
*/
int main(void) {
	int arr[5];
	int max, min, sum, i;

	for (i = 0; i < 5; i++) {
		printf("입력 %d번째 값: ", i+1);
		scanf_s("%d", &arr[i]);
	}
	printf("\n\n");

	/*
	max = arr[0], min = arr[0], sum=0;
	for (i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (i = 0; i < 5; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	for (i = 0; i < 5; i++) {
		sum += arr[i];
	}
	*/

	// max = min = sum = arr[0];
	max = INT_MIN, min = INT_MAX, sum = 0;
	for (i = 1; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
		sum += arr[i];
	}

	printf("1. 입력된 정수 중 최대값: %d\n2. 입력된 정수 중 최소값: %d\n3. 입력된 정수의 총합: %d\n", max, min, sum);
	return 0;
}