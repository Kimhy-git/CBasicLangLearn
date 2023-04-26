/*
	동적 할당을 사용한 어플리케이션
	동적 배열!
*/

#include <stdio.h>
#include <stdlib.h>

// 함수 정의
void getMaxAndMin(int*, int, int*, int*);

void main() {
	int size = 0;
	int max = 0, min = 0;
	int* dAr = 0;

	printf("정수의 개수: ");
	scanf_s("%d", &size);

	// size(사용자에게 입력받은 개수)만큼의 동적 메모리의 칸을 할당
	dAr = (int*)calloc(size, sizeof(int));

	for (int i = 0; i < size; i++) {
		printf("%d번째 정수 : ", i + 1);
		scanf_s("%d", dAr + i);
	}

	// 동적 배열의 시작주소, 배열의 칸 수, 최대값을 담을 변수의 주소, 최소값을 담을 변수의 주소
	getMaxAndMin(dAr, size, &max, &min);
	printf("최대값: %d, 최소값: %d", max, min);

}

// 사용자가 입력하는 만큼의 메모리를 생성
void getMaxAndMin(int* dAr, int size, int* max, int* min) {
	// 외부에서 전달받은 최대, 최소값 변수의 주소를 직접 접근하여 0번째 값을 넣어준다
	*max = dAr[0];
	*min = dAr[0];

	for (int i = 1; i < size; i++) {
		if (*max < dAr[i]) { *max = dAr[i]; }
		if (*min > dAr[i]) { *min = dAr[i]; }
	}
}