#include <stdio.h>

int main_exam_09_04(void) {
	char mind[30] = "I Love programming!";
	printf("%s\n", mind);

	mind[7] = '\0';
	printf("%s\n", mind);

	mind[1] = '\0';
	printf("%s\n", mind);

	return 0;
}