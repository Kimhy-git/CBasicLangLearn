#include <stdio.h>

int main_test_09_03(void) {
	char word[50];
	int max = 0;
	int i = 0;
	printf("영단어 입력 : ");
	scanf_s("%s", word, sizeof(word));

	/*
	for (int i = 0; i < 50; i++) {
		if (word[i] == '\0') break;
		if (word[i] < word[i + 1]) {
			max = word[i + 1];
		}
	}
	*/

	while (word[i] != '\0') {
		if (word[i] > max) {
			max = word[i];
		}
		i++;
	}

	printf("아스키코드값이 가장 큰 문자 : %c", max);

	return 0;
}