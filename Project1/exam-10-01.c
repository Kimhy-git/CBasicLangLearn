/*
9���� : ������
*/

#include <stdio.h>

int main_exam_10_01(void) {
	char cnum = 5;
	int inum = 999;
	double dnum = 3.14;

	char* cptr = &cnum;
	int* iptr = &inum;
	double* dptr = &dnum;

	// ������ ������ ����� %p�� ���
	printf("%p\n", cptr);
	printf("%p\n", iptr);
	printf("%p\n", dptr);

	return 0;
}