#include <stdio.h>

// ������ ����(�迭)
int main(void) {
	/*
	int num, max = 0;
	int i, j;
	int arr[50][50];

	printf("���ڸ� �Է��Ͻÿ�.(�ִ� 50) : ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++) {
		for (j = 0; j < num; j++) {
			max++;
			if (i == num - 1) {
				arr[i][j] = max;
			}
			arr[i][j] = max;
		}
	}

	for (i = 0; i < num; i++) {
		for (j = 0; j < num; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	*/


	int arr[50][50];
	int len, idx, i, j;	// idx: �ݺ��� �ݺ�Ƚ��
	int s = 0;	// ���ι���
	int w = -1;	// ���ι���

	int inc = 1;	// �̵��� ���Ǵ� ����. ���⼺ ���.
	int val = 0;	// ���� �迭 �ε����� �־��� ��

	printf("���ڸ� �Է��Ͻÿ�.(�ִ� 50) : ");
	scanf_s("%d", &len);

	idx = len;

	while (1) {
		// ���ι��� ���� �ݺ���
		for (i = 0; i < idx; i++) {
			val++;
			w = w + inc;
			arr[s][w] = val;
		}
		// ���ΰ� �ϼ��� �� �׷����� ���δ� �ݺ�Ƚ���� 1�� �پ���� ��.
		idx = idx - 1;

		// Ż�� ���� (���ΰ� ���� �������� üũ)
		if (val == len * len) {
			break;
		}

		// ���ι��� ���� �ݺ���
		for (i = 0; i < idx; i++) {
			val++;
			s = s + inc;
			arr[s][w] = val;
		}

		// �����ϴ� ���·� ���� ��ȯ
		inc = inc * -1;
	}

	for (i = 0; i < len; i++) {
		for (j = 0; j < len; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}