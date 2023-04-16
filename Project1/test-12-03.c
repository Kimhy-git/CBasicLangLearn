#include <stdio.h>

/*
다음과 같이 두 개의 int형 포인터 변수와 길이가 5인 int형 배열을 선언한다.
int * maxPtr;
int * minPtr;
int arr[5];

그리고 MaxAndMin이란 이름의 함수를 정의하고 이를 호출하면서 위의 배열과 두 포인터
변수에 대한 정보를 전달하자. 그리고 함수 호출이 완료되면, 포인터 변수 maxPtr에는
가장 큰 값이 저장된 배열요소의 주소 값이, minPtr에는 가장 작은 값이 저장된
배열요소의 주소 값이 저장되어야 한다.

좀 전에 배워보았던 이중포인터를 통해 포인터를 참조하여 스왑하는 방법을 이용해서
풀어보자
*/

void MaxAndMin(int * arr, int len, int** maxPtr, int** minPtr) {
	int* max, * min;
	max = min = &arr[0];
	for (int i = 0; i < len; i++) {
		if (*max < arr[i]) {
			max = &arr[i];
		}
		if (*min > arr[i]) {
			min = &arr[i];
		}
	}
	*maxPtr = max;
	*minPtr = min;
}

int main_test_12_03(void) {
	int* maxPtr;
	int* minPtr;
	int arr[5];
	int i;

	for (i = 0; i < 5; i++) {
		printf("%d번 정수 입력: ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);
	printf("최대 : %d, 최소 : %d", *maxPtr, *minPtr);

	return 0;
}