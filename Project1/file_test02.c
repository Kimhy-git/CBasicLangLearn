/* ���� ��� �׽�Ʈ > myInfo.txt ���� ���� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	FILE* info = fopen("myInfo.txt", "at");

	if (info == NULL) {
		printf("file open failed");
		return -1;
	}

	fputs("�����ϴ� ����: �κ�\n", info);
	fputs("���: ����", info);

	fclose(info);

	return 0;
}