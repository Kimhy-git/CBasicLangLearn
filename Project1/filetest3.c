#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp = fopen("simple.txt", "wt");
	if (fp == NULL) {
		printf("file open failed");
		return -1;
	}

	// fputc : 문자 하나를 파일에 출력하는 함수
	fputc('A', fp);
	fputc('B', fp);
	// fputs : 문자열을 파일에 출력하는 함수. c언어 특징인 \n 개행 문자를 포함하고 있음.
	fputs("My name is Cho. \n", fp);
	fputs("Your name is Kim. \n", fp);

	fclose(fp);

	return 0;
}