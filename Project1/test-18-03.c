#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int maxSize;
	char* str;
	int cnt = 0;
	
	printf("���ڿ��� �ִ� ���̴�? ");
	// �Է¹��� ���� �ּҰ����� �����־�� �Ѵ�
	scanf("%d", &maxSize);
	
	str = (char*)malloc(maxSize + 1);
	printf("���ڿ� �Է� : ");
	// ���ڿ� �Է¿��� &�� ������ �ʴ´�
	scanf("%s", str);

	for (int i = 0; i < maxSize; i++) {
		// null���ڸ� ������ ���̻� ���� �ʰ� �������´�
		if (str[i] == '\0') break;
		if (str[i] == 97) cnt++;
	}

	printf("a�� ������ %d�� �Դϴ�.", cnt);

	return 0;
}