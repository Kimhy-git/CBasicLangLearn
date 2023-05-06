#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	// 프로젝트 경로에 origins.txt 파일을 생성하고 테스트
	FILE* org = fopen("origins.txt", "rt");
	FILE* cop = fopen("origins_copys.txt", "wt");

	char str[20];

	if (org == NULL || cop == NULL) {
		printf("파일 오픈 실패");
		return -1;
	}

	// fgets 함수는 파일의 끝에 도달해서 더이상 읽을 데이터가 없거나 오류가 발생하면 NULL을 return 합니다. 따라서 NULL 체크를 진행! EOF 체크가 아니다.
	while (fgets(str, sizeof(str), org) != NULL) {
		fputs(str, cop);
	}

	// feof 함수로 더블체크.
	if (feof(org) != 0) {
		printf("파일 복사 완료");
	}
	else {
		printf("파일 복사 실패");
	}

	fclose(org);
	fclose(cop);

	return 0;
}