/*
	피보나치 수열

	1, 1, 2, 3, 5, 8, 13,  21, ...
	fibo(n) = fibo(n-1) + fibo(n-2);
	첫번째, 두번째 값은 1이다 -> 탈출 조건
*/

int fibo(int n) {
	if (n < 1) return 0;
	if (n == 2 || n == 1) return 1;
	return fibo(n - 1) + fibo(n - 2);
}

int main_test_16_05(void) {
	int n;
	printf("피보나치 수열을 몇번째까지 출력 : ");
	scanf_s("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		printf("%d ", fibo(i));
	}
	
	return 0;
}