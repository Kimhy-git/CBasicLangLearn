#include <stdio.h>
#include <limits.h>

/*
���̰� 5�� int�� �迭�� �����ؼ� ���α׷� ����ڷκ��� �� 5���� ������ �Է¹��� ����
�Է��� ������ ������ ������ ����ϵ��� �ڵ带 �ۼ��ϼ���.

1. �Էµ� ���� �� �ִ밪
2. �Էµ� ���� �� �ּҰ�
3. �Էµ� ������ ����
*/
int main(void) {
	int arr[5];
	int max, min, sum, i;

	for (i = 0; i < 5; i++) {
		printf("�Է� %d��° ��: ", i+1);
		scanf_s("%d", &arr[i]);
	}
	printf("\n\n");

	/*
	max = arr[0], min = arr[0], sum=0;
	for (i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (i = 0; i < 5; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	for (i = 0; i < 5; i++) {
		sum += arr[i];
	}
	*/

	// max = min = sum = arr[0];
	max = INT_MIN, min = INT_MAX, sum = 0;
	for (i = 1; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
		sum += arr[i];
	}

	printf("1. �Էµ� ���� �� �ִ밪: %d\n2. �Էµ� ���� �� �ּҰ�: %d\n3. �Էµ� ������ ����: %d\n", max, min, sum);
	return 0;
}