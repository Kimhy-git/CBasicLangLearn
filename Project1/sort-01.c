#include <stdio.h>
#define NUM 10

// Sort
int main_sort_01(void) {

	int arr[NUM] = { 5, 7, 1, 4, 10, 2, 8, 3, 9, 6 };

	// swap ������ �ʼ�
	int temp = 0;

	printf("�����ϰ� �����ִ� ������ �� : \n");
	for (int i = 0; i < NUM; i++) {
		printf("%d ", arr[i]);
	}

	// �������� ����(��������)
	for (int i = 0; i < NUM - 1; i++) {
		for (int j = 0; j < NUM - 1 - i; j++) {	// NUM - 1 - i �� �߿��� �κ�
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	printf("\n\n");

	printf("���������� ����Ͽ� �������� ������ ��� : \n");
	for (int i = 0; i < NUM; i++) {
		printf("%d ", arr[i]);
	}

	// �������� ����(��������)
	for (int i = 0; i < NUM - 1; i++) {
		for (int j = 0; j < NUM - 1 - i; j++) {	// NUM - 1 - i �� �߿��� �κ�
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	printf("\n\n");

	printf("���������� ����Ͽ� �������� ������ ��� : \n");
	for (int i = 0; i < NUM; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}