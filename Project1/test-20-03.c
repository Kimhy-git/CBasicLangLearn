#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	char ch;
	double d;
} s1;

// ����ü�� 1byte ������ �����϶�� ��
#pragma pack(push, 1)

typedef struct {
	char ch;
	double d;
} s2;

// push�� ���� ������Ŵ
#pragma pack(pop)

typedef struct {
	char ch;
	double d;
} s3;

void main() {
	printf("����ü s1, s2, s3�� ��� ������ �ڷ����� ��� �����ϴ�.\n");
	printf("s1 size : %d\n", sizeof(s1));
	printf("s2 size : %d\n", sizeof(s2));
	printf("s3 size : %d\n", sizeof(s3));
}