#include <stdio.h>

int main_exam_09_05(void) {
	char str[50];

	printf("���ڿ��� �Է��ϼ���: ");
	// �迭�� �ּ�������(&)�� ������ �ʾƵ� �ȴ�.
	scanf_s(" %s", str, sizeof(str));

	printf("�Էµ� ���ڿ�: %s\n", str);

	return 0;
}