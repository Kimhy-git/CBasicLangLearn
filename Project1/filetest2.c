#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int ch, i;

	// rt : read text
	FILE* fp = fopen("test\\data.txt", "rt");

	if (fp == NULL) {
		printf("file open failed!");
		return -1;
	}

	for (i = 0; i < 3; i++) {
		// fgetc : ĳ���� �ϳ��� �������� �Լ�
		ch = fgetc(fp);
		printf("%c \n", ch);
	}

	// �Է½�Ʈ�� �ݾ��ֱ�
	fclose(fp);

	return 0;
}