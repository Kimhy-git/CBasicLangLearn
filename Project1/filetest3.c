#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp = fopen("simple.txt", "wt");
	if (fp == NULL) {
		printf("file open failed");
		return -1;
	}

	// fputc : ���� �ϳ��� ���Ͽ� ����ϴ� �Լ�
	fputc('A', fp);
	fputc('B', fp);
	// fputs : ���ڿ��� ���Ͽ� ����ϴ� �Լ�. c��� Ư¡�� \n ���� ���ڸ� �����ϰ� ����.
	fputs("My name is Cho. \n", fp);
	fputs("Your name is Kim. \n", fp);

	fclose(fp);

	return 0;
}