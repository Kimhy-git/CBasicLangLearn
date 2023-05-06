/* 파일 출력 테스트 > myInfo.txt 파일 생성 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	FILE* info = fopen("myInfo.txt", "wt");
	fputs("이름: 김혜지\n성별 : 여\n휴대폰번호 : 010 - 0000 - 0000\n", info);
	fclose(info);

	return 0;
}