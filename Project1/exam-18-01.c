#include <stdio.h>

char* getString(void) {
	char str[100];
	printf("�����ϴ� �ܾ��? ");
	gets(str);

	return str;
}

void main() {
	char* result = getString();
	printf("����� �����ϴ� �ܾ�� : %s\n", result);
}