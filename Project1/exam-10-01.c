/*
9일차 : 포인터
*/

#include <stdio.h>

int main_exam_10_01(void) {
	char cnum = 5;
	int inum = 999;
	double dnum = 3.14;

	char* cptr = &cnum;
	int* iptr = &inum;
	double* dptr = &dnum;

	// 포인터 변수의 출력은 %p를 사용
	printf("%p\n", cptr);
	printf("%p\n", iptr);
	printf("%p\n", dptr);

	return 0;
}