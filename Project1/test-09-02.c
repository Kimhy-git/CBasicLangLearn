#include <stdio.h>

int main_test_09_02(void) {
	char word[30];
	printf("���� �ܾ �Է����ּ���. : ");
	scanf_s("%s", word, sizeof(word));
	int wordLenght = 0;
	int index = 0;
	while(1) {
		if (word[index] == '\0') {
			break;
		}
		wordLenght++;	// ���ڿ��� ���� ī��Ʈ
		index++;
	}

	printf("���ڿ��� ������ ��� : ");
	for (int i = wordLenght; i >= 0; i--) {
		printf("%c", word[i]);
	}
	printf("\n");

	return 0;
}