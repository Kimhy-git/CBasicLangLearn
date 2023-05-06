#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	// ������Ʈ ��ο� origins.txt ������ �����ϰ� �׽�Ʈ
	FILE* org = fopen("origins.txt", "rt");
	FILE* cop = fopen("origins_copys.txt", "wt");

	char str[20];

	if (org == NULL || cop == NULL) {
		printf("���� ���� ����");
		return -1;
	}

	// fgets �Լ��� ������ ���� �����ؼ� ���̻� ���� �����Ͱ� ���ų� ������ �߻��ϸ� NULL�� return �մϴ�. ���� NULL üũ�� ����! EOF üũ�� �ƴϴ�.
	while (fgets(str, sizeof(str), org) != NULL) {
		fputs(str, cop);
	}

	// feof �Լ��� ����üũ.
	if (feof(org) != 0) {
		printf("���� ���� �Ϸ�");
	}
	else {
		printf("���� ���� ����");
	}

	fclose(org);
	fclose(cop);

	return 0;
}