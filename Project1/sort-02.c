#include <stdio.h>
#define NUM 7

int main(void) {
	char arr[NUM] = { 'F', 'B', 'A', 'E', 'D', 'C', 'G'};

	printf("랜덤하게 섞여있는 데이터 값 : \n");
	for (int i = 0; i < NUM; i++) {
		printf("%c ", arr[i]);
	}

	for (int i = 1; i < NUM; i++) {
		int target = arr[i];
		int cur = i - 1;
		while (cur >= 0 && target < arr[cur]) {
			arr[cur + 1] = arr[cur];
			cur--;
		}
		arr[cur + 1] = target;
	}

	printf("\n\n");

	printf("삽입정렬을 사용하여 오름차순 정렬한 결과 : \n");
	for (int i = 0; i < NUM; i++) {
		printf("%c ", arr[i]);
	}

	return 0;
}