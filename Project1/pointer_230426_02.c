#include <stdio.h>

void functionTest(int*);
void getMaxAndMin(int, int*, int*);


void main() {
	int data = 10;
	printf("before : %d\n", data);
	functionTest(&data);
	printf("after : %d\n", data);
	printf("---------------\n\n");

	int arData[5] = { 4,7,3,9,8 };
	int max = 0;
	int min = 0;
	getMaxAndMin(arData, &max, &min);
	printf("�ִ밪 : %d\n", max);
	printf("�ּҰ� : %d\n", min);
}

void functionTest(int* pData) {
	*pData = 20;
}

// 5���� ������ �Է¹ް� �ּҰ��� �ִ밪�� �����ִ� �Լ�
void getMaxAndMin(int arData[], int* max, int* min) {
	*max = arData[0];
	*min = arData[0];

	for (int i = 1; i < 5; i++) {
		if (*max < arData[i]) { *max = arData[i]; }
		if (*min > arData[i]) { *min = arData[i]; }
	}
}