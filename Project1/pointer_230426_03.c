#include <stdio.h>
#include <stdlib.h>

void main() {
	int* dAr = 0;
	// dAr = (int*)malloc(sizeof(int) * 5);
	
	// ▽ 초기화
	dAr = (int*)calloc(5, sizeof(int));

	// ▽ 새로 만든 칸은 초기화해주지 않음
	dAr = (int*)realloc(dAr, sizeof(int) * 8);
	
	for (int i = 0; i < 8; i++) {
		dAr[i] = i + 1;
		printf("%d\n", dAr[i]);
	}
	
	free(dAr);
}