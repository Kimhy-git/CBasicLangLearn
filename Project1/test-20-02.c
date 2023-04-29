#include <stdio.h>

/*
	다음 소스코드를 사용하여 12가 출력되도록
*/

struct sizeHeader {
	char b;		// 1byte
	/* 소스코드 추가 */
	char a;		// 1byte
	int i;		// 2byte
	long l;		// 8byte
};

int main(void) {
	struct sizeHeader header;
	printf("%d\n", sizeof(header));

	return 0;
}