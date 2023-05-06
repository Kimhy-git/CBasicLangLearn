#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	FILE* org = fopen("origin.txt", "rt");
	FILE* cop = fopen("origin_copy.txt", "wt");
	int ch;

	if (org == NULL || cop == NULL) {
		printf("file open failed");
		return -1;
	}

	while ((ch = fgetc(org)) != EOF) {
		fputc(ch, cop);
	}

	// feof : ���� ���� ������ ��� 0�� �ƴ� ���� ��ȯ! ������ ���� EOF�� ��ȯ�ϱ� ������ ����üũ�� ���ִ� ��
	if (feof(org) != 0) {
		printf("���Ϻ��� �Ϸ�");
	}
	else {
		printf("���Ϻ��� ����");
	}

	fclose(org);
	fclose(cop);

	return 0;
}