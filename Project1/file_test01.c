/* ���� ��� �׽�Ʈ > myInfo.txt ���� ���� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	FILE* info = fopen("myInfo.txt", "wt");
	fputs("�̸�: ������\n���� : ��\n�޴�����ȣ : 010 - 0000 - 0000\n", info);
	fclose(info);

	return 0;
}