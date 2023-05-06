#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	FILE* org = fopen("origin.txt", "rt");
	FILE* cop = fopen("origin_copy.txt", "wt");
	int ch;

	if (org == NULL || cop == NULL) {
		printf("file open failed");
		return -1;
	}

	while ((ch = fgetc(org)) != EOF) {
		fputc(ch, cop);
	}

	// feof : 파일 끝에 도달할 경우 0이 아닌 값을 반환! 오류가 나도 EOF를 반환하기 때문에 더블체크를 해주는 것
	if (feof(org) != 0) {
		printf("파일복사 완료");
	}
	else {
		printf("파일복사 실패");
	}

	fclose(org);
	fclose(cop);

	return 0;
}