#include <stdio.h>

int main_test_09_02(void) {
	char word[30];
	printf("영어 단어를 입력해주세요. : ");
	scanf_s("%s", word, sizeof(word));
	int wordLenght = 0;
	int index = 0;
	while(1) {
		if (word[index] == '\0') {
			break;
		}
		wordLenght++;	// 문자열의 길이 카운트
		index++;
	}

	printf("문자열을 뒤집은 결과 : ");
	for (int i = wordLenght; i >= 0; i--) {
		printf("%c", word[i]);
	}
	printf("\n");

	return 0;
}