#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(void) {
	int arr[5] = { 10, 20, 30, 40, 50 };
	int* pa;
	int* pb;
	int* pc;
	int i;

	pa = (int*)malloc(sizeof(arr));
	for (i = 0; i < 5; i++) {
		pa[i] = arr[i];
	}

	pb = (int*)calloc(pa[3], sizeof(int));
	pc = (int*)realloc(NULL, pa[4]);

	// _msize -> 동적할당된 메모리의 크기를 출력하는 함수
	printf("pa size: %d\n", _msize(pa));
	printf("pb size: %d\n", _msize(pb));
	printf("pc size: %d\n", _msize(pc));

	return 0;
}