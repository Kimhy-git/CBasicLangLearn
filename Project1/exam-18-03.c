#include <stdio.h>
#include <stdlib.h>

/*
	exam-18-01.c의 변형
*/

// 포인터값을 리턴으로 줄 때는 동적할당을 통해서 소멸 시기를 정해줄 수 있다!
char* getString(void) 
{
	
	// char str[100];
	// ▼ 동적할당으로 변경
	char* str = (char*)malloc(sizeof(char) * 100);

	printf("좋아하는 단어는? ");
	gets(str);

	return str;
}

void main() {
	char* result = getString();
	printf("당신이 좋아하는 단어는: %s\n", result);

	// 힙 영역에 할당된 메모리 해제
	if (result != NULL) free(result);
}