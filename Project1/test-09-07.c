#include <stdio.h>
#include <time.h>
#define TEN 10

// �����Լ��� �̿��� ������ ���
int main_test_09_07(void) {
	
	// rand() �ʱ�ȭ
	srand(time(NULL));

	// 0~9 ������ ����
	printf("%d\n", rand() % 10);

	// #define : ��ũ�� ����� �̿��ϸ� �迭 �ʱ�ȭ�� ���� ���� �������� �� �ִ�.
	int arr[TEN];

	return 0;
}