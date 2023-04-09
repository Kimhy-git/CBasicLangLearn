#include <stdio.h>
#define NUM 10

// Sort
int main_sort_01(void) {

	int arr[NUM] = { 5, 7, 1, 4, 10, 2, 8, 3, 9, 6 };

	// swap 동작이 필수
	int temp = 0;

	printf("랜덤하게 섞여있는 데이터 값 : \n");
	for (int i = 0; i < NUM; i++) {
		printf("%d ", arr[i]);
	}

	// 오름차순 정렬(버블정렬)
	for (int i = 0; i < NUM - 1; i++) {
		for (int j = 0; j < NUM - 1 - i; j++) {	// NUM - 1 - i 이 중요한 부분
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	printf("\n\n");

	printf("버블정렬을 사용하여 오름차순 정렬한 결과 : \n");
	for (int i = 0; i < NUM; i++) {
		printf("%d ", arr[i]);
	}

	// 내림차순 정렬(버블정렬)
	for (int i = 0; i < NUM - 1; i++) {
		for (int j = 0; j < NUM - 1 - i; j++) {	// NUM - 1 - i 이 중요한 부분
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	printf("\n\n");

	printf("버블정렬을 사용하여 내림차순 정렬한 결과 : \n");
	for (int i = 0; i < NUM; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}