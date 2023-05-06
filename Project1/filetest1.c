#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// ����1 = filename, ����2 = stream mode
	FILE* fp = fopen("data.txt", "wt");

	if (fp == NULL) {
		printf("���� ���� ����");
		return -1;
	}

	// fputc -> ���� ��Ʈ���� �ϳ��� ���ڸ� ����ϴ� �Լ� (file put character)
	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);

	// fclose -> stream�� �ݾ��ִ� �Լ�
	fclose(fp);

	return 0;
}