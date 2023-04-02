#include <stdio.h>
#include <time.h>

// �ζ� ����
// 1~45, *�ߺ� ����*, 6�� ���
// ��� ����: 28 12 2 4 1 ���ʽ�:7
int main_test_09_08(void) {
	int lotto[6];
	int lottoLen = sizeof(lotto) / sizeof(int);

	// rand() �ʱ�ȭ
	srand(time(NULL));
	
	for (int i = 0; i < lottoLen; i++) {
		lotto[i] = rand() % 45 + 1;
		for (int j = 0; j < i; j++) {
			if (lotto[i] == lotto[j]) {
				i--;	// ��� ���Ҵ� i�� ���! ��� ���� count�� ����Ѵ�.
				break;	// �ݺ��� �ٽ� ��ȸ
			}
		}
	}

	/*
	for (int i = 0; i < lottoLen-1; i++) {
		printf("%d ",lotto[i]);
	}
	printf(", ���ʽ�: %d", lotto[lottoLen-1]);
	*/

	for (int i = 0; i < lottoLen; i++) {
		if (i == lottoLen - 1) {
			printf(", ���ʽ�: %d", lotto[i]);
		}
		else {
			printf("%d ", lotto[i]);
		}
		
	}

	return 0;
}