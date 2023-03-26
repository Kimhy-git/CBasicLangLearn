#include <stdio.h>

int main_07_06(void) {
	int num;
	printf("input some positive number : ");
	scanf_s("%d", &num);

	switch (num)
	{
		case 1:
			printf("num is 1.\n");
			break;
		case 2:
			printf("num is 2.\n");
			break;
		case 3:
			printf("num is 3.\n");
			break;
		default:
			printf("maybe bigger than 3.\n");
			break;
	}
	printf("switch state end.\n");

	return 0;
}