#include <stdio.h>

int main_test_09_03(void) {
	char word[50];
	int max = 0;
	int i = 0;
	printf("���ܾ� �Է� : ");
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

	printf("�ƽ�Ű�ڵ尪�� ���� ū ���� : %c", max);

	return 0;
}