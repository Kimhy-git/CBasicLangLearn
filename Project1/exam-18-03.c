#include <stdio.h>
#include <stdlib.h>

/*
	exam-18-01.c�� ����
*/

// �����Ͱ��� �������� �� ���� �����Ҵ��� ���ؼ� �Ҹ� �ñ⸦ ������ �� �ִ�!
char* getString(void) 
{
	
	// char str[100];
	// �� �����Ҵ����� ����
	char* str = (char*)malloc(sizeof(char) * 100);

	printf("�����ϴ� �ܾ��? ");
	gets(str);

	return str;
}

void main() {
	char* result = getString();
	printf("����� �����ϴ� �ܾ��: %s\n", result);

	// �� ������ �Ҵ�� �޸� ����
	if (result != NULL) free(result);
}