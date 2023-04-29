#include <stdio.h>
#include <stdlib.h>

void main() {
	// int형 5개만큼
	int* iptr = (int*)malloc(sizeof(int) * 5);
	double* dptr = (double*)malloc(sizeof(double) * 3);

	int i;
	for (i = 0; i < 5; i++) {
		// 동적할당을 통해 포인터변수에 메모리 공간을 할당해주면 인덱스 지정으로 해당 위치에 접근이 가능해짐
		iptr[i] = 10 * (i + 1);
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", iptr[i]);
	}

	printf("\n");

	dptr[0] = 3.14;
	dptr[1] = 4.13;
	dptr[2] = 1.43;
	printf("%g %g %g\n", dptr[0], dptr[1], dptr[2]);

	// 힙 영역에 할당된 메모리 해제
	// null체크! 불필요한 명령을 전달하지 않는다는 의미(효율적!)
	if (iptr != NULL) free(iptr);	// 해당 메모리가 NULL이면 메모리 해제가 필요치 않기 때문
	if (dptr != NULL) free(dptr);
}