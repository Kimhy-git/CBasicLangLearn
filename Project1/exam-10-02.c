#include <stdio.h>

int main_exam_10_02(void) {
	int num = 10;
	int *pnum = &num;

	*pnum = 20;

	printf("num : %d\n", num);
	(*pnum)++; (*pnum)++;
	printf("num : %d\n", num);
	printf("*pnum : %d\n", *pnum);

	return 0;
}