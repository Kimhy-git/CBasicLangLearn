#include <stdio.h>

char* getString(void) {
	char str[100];
	printf("좋아하는 단어는? ");
	gets(str);

	return str;
}

void main() {
	char* result = getString();
	printf("당신이 좋아하는 단어는 : %s\n", result);
}