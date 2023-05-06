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
		// fgetc : 캐릭터 하나씩 가져오는 함수
		ch = fgetc(fp);
		printf("%c \n", ch);
	}

	// 입력스트림 닫아주기
	fclose(fp);

	return 0;
}