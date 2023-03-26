#include <stdio.h>

int main_07_07(void) {
	int num;
	printf("input some positive number : ");
	scanf_s("%d", &num);

	switch (num)
	{
		case 1:
		case 3:
		case 5:
			printf("odd\n");
			break;
		case 2:
		case 4:
		case 6:
			printf("even\n");
			break;
		default:
			printf("maybe bigger than 6\n");
	}
	printf("switch state end.\n");

	return 0;
}