#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int* ptr;		// �Ҵ�� �޸��� �ּڰ��� ������ ������
	int count = 0;	// �Է¹��� ������ ����
	int maxSize = 3;// �Ҵ���� �޸� ũ��

	int num;
	int i;

	ptr = (int*)calloc(maxSize, sizeof(int));

	while (1) {
		printf("������ �Է��ϼ���.(-1 �Է� �� ����) : ");
		scanf("%d", &num);
		if (num == -1) break;

		// �Է��� ������ ������ �޸� ũ�⸸ŭ á�� ���
		if (count == maxSize) {
			maxSize += maxSize;

			// ���Ҵ��� ���� �޸� ���� Ȯ��
			ptr = (int*)realloc(ptr, maxSize * sizeof(int));
		}

		// ����ڰ� �Է��� ������ �� ���� �޸� �ʱ�ȭ
		// count++ �� �迭 ĭ. ���⼭ count�� 1�� �����Ѵ�.
		ptr[count++] = num;
	}

	for (i = 0; i < count; i++) {
		printf("%d ", ptr[i]);
	}
	printf("\n");

	if (ptr != NULL) free(ptr);
}