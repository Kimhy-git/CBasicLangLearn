#include <stdio.h>

int main_07_05(void) {
	int num1 = 5, num2 = 8;

	if (num2 > 5)
	{
		printf("num2 > 5 is True.\n");
		if (num1 == 5)
		{
			printf("The first if state!");
		}
	}

	if (num2 < 5)
	{
		if (num1 == 5)
		{
			printf("The second if state!");
		}
	}

	return 0;
}