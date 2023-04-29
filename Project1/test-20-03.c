#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	char ch;
	double d;
} s1;

// 구조체를 1byte 단위로 정렬하라는 뜻
#pragma pack(push, 1)

typedef struct {
	char ch;
	double d;
} s2;

// push한 것을 원복시킴
#pragma pack(pop)

typedef struct {
	char ch;
	double d;
} s3;

void main() {
	printf("구조체 s1, s2, s3의 멤버 개수와 자료형은 모두 같습니다.\n");
	printf("s1 size : %d\n", sizeof(s1));
	printf("s2 size : %d\n", sizeof(s2));
	printf("s3 size : %d\n", sizeof(s3));
}