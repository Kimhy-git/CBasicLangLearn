#include <stdio.h>

// 달팽이 문제(배열)
int main(void) {
	/*
	int num, max = 0;
	int i, j;
	int arr[50][50];

	printf("숫자를 입력하시오.(최대 50) : ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++) {
		for (j = 0; j < num; j++) {
			max++;
			if (i == num - 1) {
				arr[i][j] = max;
			}
			arr[i][j] = max;
		}
	}

	for (i = 0; i < num; i++) {
		for (j = 0; j < num; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	*/


	int arr[50][50];
	int len, idx, i, j;	// idx: 반복문 반복횟수
	int s = 0;	// 세로방향
	int w = -1;	// 가로방향

	int inc = 1;	// 이동에 사용되는 변수. 방향성 담당.
	int val = 0;	// 현재 배열 인덱스에 넣어줄 값

	printf("숫자를 입력하시오.(최대 50) : ");
	scanf_s("%d", &len);

	idx = len;

	while (1) {
		// 가로방향 진행 반복문
		for (i = 0; i < idx; i++) {
			val++;
			w = w + inc;
			arr[s][w] = val;
		}
		// 가로가 완성된 후 그려지는 세로는 반복횟수가 1씩 줄어들어야 함.
		idx = idx - 1;

		// 탈출 조건 (가로가 끝난 지점에서 체크)
		if (val == len * len) {
			break;
		}

		// 세로방향 진행 반복문
		for (i = 0; i < idx; i++) {
			val++;
			s = s + inc;
			arr[s][w] = val;
		}

		// 감소하는 형태로 방향 전환
		inc = inc * -1;
	}

	for (i = 0; i < len; i++) {
		for (j = 0; j < len; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}