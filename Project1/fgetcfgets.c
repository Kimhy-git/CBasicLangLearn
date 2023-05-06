#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str[30];
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		printf("file open failed");
		return -1;
	}

	// 불러온 파일 내용은 스트림 버퍼에 담겨있다가 거기서 문자 하나를 꺼내오는 함수
	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);

	// 파일에서는 널문자를 저장하지 않고 *개행*을 기준으로 문자열을 구분
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);

	fclose(fp);

	return 0;
}