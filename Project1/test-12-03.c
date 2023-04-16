#include <stdio.h>

/*
������ ���� �� ���� int�� ������ ������ ���̰� 5�� int�� �迭�� �����Ѵ�.
int * maxPtr;
int * minPtr;
int arr[5];

�׸��� MaxAndMin�̶� �̸��� �Լ��� �����ϰ� �̸� ȣ���ϸ鼭 ���� �迭�� �� ������
������ ���� ������ ��������. �׸��� �Լ� ȣ���� �Ϸ�Ǹ�, ������ ���� maxPtr����
���� ū ���� ����� �迭����� �ּ� ����, minPtr���� ���� ���� ���� �����
�迭����� �ּ� ���� ����Ǿ�� �Ѵ�.

�� ���� ������Ҵ� ���������͸� ���� �����͸� �����Ͽ� �����ϴ� ����� �̿��ؼ�
Ǯ���
*/

void MaxAndMin(int * arr, int len, int** maxPtr, int** minPtr) {
	int* max, * min;
	max = min = &arr[0];
	for (int i = 0; i < len; i++) {
		if (*max < arr[i]) {
			max = &arr[i];
		}
		if (*min > arr[i]) {
			min = &arr[i];
		}
	}
	*maxPtr = max;
	*minPtr = min;
}

int main_test_12_03(void) {
	int* maxPtr;
	int* minPtr;
	int arr[5];
	int i;

	for (i = 0; i < 5; i++) {
		printf("%d�� ���� �Է�: ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);
	printf("�ִ� : %d, �ּ� : %d", *maxPtr, *minPtr);

	return 0;
}