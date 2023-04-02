#include <stdio.h>
#include <time.h>

// 로또 문제
// 1~45, *중복 없음*, 6개 출력
// 출력 예시: 28 12 2 4 1 보너스:7
int main_test_09_08(void) {
	int lotto[6];
	int lottoLen = sizeof(lotto) / sizeof(int);

	// rand() 초기화
	srand(time(NULL));
	
	for (int i = 0; i < lottoLen; i++) {
		lotto[i] = rand() % 45 + 1;
		for (int j = 0; j < i; j++) {
			if (lotto[i] == lotto[j]) {
				i--;	// 방금 돌았던 i를 취소! 방금 뽑은 count를 취소한다.
				break;	// 반복문 다시 순회
			}
		}
	}

	/*
	for (int i = 0; i < lottoLen-1; i++) {
		printf("%d ",lotto[i]);
	}
	printf(", 보너스: %d", lotto[lottoLen-1]);
	*/

	for (int i = 0; i < lottoLen; i++) {
		if (i == lottoLen - 1) {
			printf(", 보너스: %d", lotto[i]);
		}
		else {
			printf("%d ", lotto[i]);
		}
		
	}

	return 0;
}