#include <stdio.h>

// 입력 함수
int main_exam_04_06(void) {

	char character;
	int inum;
	float fnum;

	//// C99에서 scanf는 에러를 냄 -> scanf_s 사용
	//printf("character 입력\n");
	//// & : 앤퍼샌드. 메모리 접근자. 오버플로우시 문제가 생길 수 있다.
	//scanf_s("%c", &character);
	//printf("inum 입력\n");
	//scanf_s("%d", &inum);
	//printf("fnum 입력\n");
	//scanf_s("%f", &fnum);

	//printf("character = %c\ninum = %d\nfnum = %f\n", character, inum, fnum);

	// 문자열
	char name[255];

	printf("이름을 입력해주세요.: ");
	// 배열은 입력받을 때 &(앤퍼샌드)를 붙이면 안된다. 배열은 변수가 주소 그 자체다
	scanf_s("%s", name, sizeof(name));
	printf("반갑습니다. %s.", name);

	return 0;
}