#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char* s1 = "Take a look!";
	// strlen() -> ���ڿ� ���̸� ����. ���� ������ ���̸� �����´�. ���ڿ��� �������� �ι��ڸ� �����ϰ� �ִ�.
	char* s2 = (char*)malloc(sizeof(char) * strlen(s1) + 1);

	// strcpy -> ���ڿ� ���� �Լ�
	strcpy(s2, s1);
	printf("%s\n", s2);

	if (s2 != NULL) free(s2);

	return 0;
}