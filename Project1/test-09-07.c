#include <stdio.h>
#include <time.h>
#define TEN 10

// 랜덤함수를 이용한 난수값 출력
int main_test_09_07(void) {
	
	// rand() 초기화
	srand(time(NULL));

	// 0~9 범위로 설정
	printf("%d\n", rand() % 10);

	// #define : 매크로 상수를 이용하면 배열 초기화때 길이 값을 설정해줄 수 있다.
	int arr[TEN];

	return 0;
}