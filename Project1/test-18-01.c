#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char* s1 = "Take a look!";
	// strlen() -> 문자열 길이를 리턴. 순수 문자의 길이만 가져온다. 문자열은 마지막에 널문자를 포함하고 있다.
	char* s2 = (char*)malloc(sizeof(char) * strlen(s1) + 1);

	// strcpy -> 문자열 복사 함수
	strcpy(s2, s1);
	printf("%s\n", s2);

	if (s2 != NULL) free(s2);

	return 0;
}