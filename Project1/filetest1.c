#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// 인자1 = filename, 인자2 = stream mode
	FILE* fp = fopen("data.txt", "wt");

	if (fp == NULL) {
		printf("파일 오픈 실패");
		return -1;
	}

	// fputc -> 파일 스트림에 하나의 문자를 출력하는 함수 (file put character)
	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);

	// fclose -> stream을 닫아주는 함수
	fclose(fp);

	return 0;
}