#include <stdio.h>

int main_exam_13_03(void) {
	int ch;

	while (1)
	{
		ch = getchar();

		if (ch == EOF) {
			break;
		}

		putchar(ch);
	}

	return 0;
}