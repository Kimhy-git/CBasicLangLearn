#include <stdio.h>

/*
	���� �ҽ��ڵ带 ����Ͽ� 12�� ��µǵ���
*/

struct sizeHeader {
	char b;		// 1byte
	/* �ҽ��ڵ� �߰� */
	char a;		// 1byte
	int i;		// 2byte
	long l;		// 8byte
};

int main(void) {
	struct sizeHeader header;
	printf("%d\n", sizeof(header));

	return 0;
}