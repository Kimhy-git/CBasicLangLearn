/* 파일 출력 테스트 > myInfo.txt 파일 생성 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	FILE* info = fopen("myInfo.txt", "at");

	if (info == NULL) {
		printf("file open failed");
		return -1;
	}

	fputs("좋아하는 음식: 두부\n", info);
	fputs("취미: 게임", info);

	fclose(info);

	return 0;
}