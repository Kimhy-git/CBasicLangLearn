#include <stdio.h>

// ����� ����ȯ
int main_exam_02_08(void) {

	/*
	printf("%d\n", (short)3.1415);
	printf("%d\n", (int)3.1415);
	printf("%f\n", (double)10);
	printf("%f\n", (float)10);
	*/

	char c3 = 3;
	/* 
		����Ʈ ������ "<<" : 2������ ��ȯ
		ex) c3 = 11 , c3 << 1 = 110
	*/
	printf("%d\n", c3 << 1);

	return 0;
}