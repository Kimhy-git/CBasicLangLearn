#include <stdio.h>

int main_test_09_04(void) {
	int i, j, arr_col_len, arr_row_len;

	int arr[3][4] = {
		{10, 20},
		{30, 40, 50, 60},
		{0, 0, 70, 80}
	};

	// 2���� �迭�� ���� ���� ���
	arr_col_len = sizeof(arr[0]) / sizeof(int);
	printf("�迭�� �� �� ũ��(byte) : %d\n", sizeof(arr[0]));
	printf("�迭�� �� ���� : %d\n", arr_col_len);

	// 2���� �迭�� ���� ���� ���
	arr_row_len = (sizeof(arr) / arr_col_len) / sizeof(int);
	printf("�迭 ��ü ũ��(byte) : %d\n", sizeof(arr));
	printf("�迭�� �� ���� : %d\n", arr_row_len);

	return 0;
}