#include <stdio.h>

int main_test_09_04(void) {
	int i, j, arr_col_len, arr_row_len;

	int arr[3][4] = {
		{10, 20},
		{30, 40, 50, 60},
		{0, 0, 70, 80}
	};

	// 2차원 배열의 열의 길이 계산
	arr_col_len = sizeof(arr[0]) / sizeof(int);
	printf("배열의 한 행 크기(byte) : %d\n", sizeof(arr[0]));
	printf("배열의 열 갯수 : %d\n", arr_col_len);

	// 2차원 배열의 행의 길이 계산
	arr_row_len = (sizeof(arr) / arr_col_len) / sizeof(int);
	printf("배열 전체 크기(byte) : %d\n", sizeof(arr));
	printf("배열의 행 갯수 : %d\n", arr_row_len);

	return 0;
}