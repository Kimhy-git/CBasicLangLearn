#include <stdio.h>

int main_exam_05_04(void) {

	int a = 10;
	int b = 10;

	// �����ڰ� �۵��ϴ� �ñ��� ����
	printf("a: %d\n", a);
	printf("a: %d\n", ++a);	// ����(perfix) ���� ������
	printf("a: %d\n", a);

	printf("b: %d\n", b);
	printf("b: %d\n", b++);	// ����(postfix) ���� ������
	printf("b: %d\n", b);

	return 0;
}