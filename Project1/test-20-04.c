#include <stdio.h>

void fct(int);
int sum = 25;

void main() {
	int num1 = 10;
	int* ptr = &num1;
	fct(num1);
	num1++;
	fct(num1);

	printf("%p", ptr);
}

void fct(int n) {
	int num2 = 12;
}