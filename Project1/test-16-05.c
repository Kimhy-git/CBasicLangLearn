/*
	�Ǻ���ġ ����

	1, 1, 2, 3, 5, 8, 13,  21, ...
	fibo(n) = fibo(n-1) + fibo(n-2);
	ù��°, �ι�° ���� 1�̴� -> Ż�� ����
*/

int fibo(int n) {
	if (n < 1) return 0;
	if (n == 2 || n == 1) return 1;
	return fibo(n - 1) + fibo(n - 2);
}

int main_test_16_05(void) {
	int n;
	printf("�Ǻ���ġ ������ ���°���� ��� : ");
	scanf_s("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		printf("%d ", fibo(i));
	}
	
	return 0;
}