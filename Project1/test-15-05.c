#include <stdio.h>

void printHMS(int sec) {
	int hour, minute;
	/*
	hour = sec / 3600;
	sec = sec - 3600 * hour;
	minute = sec / 60;
	sec = sec - 60 * minute;
	*/

	hour = sec / 3600;
	minute = (sec / 3600) / 60;
	sec = sec % 60;
	printf("%d시 %d분 %d초", hour, minute, sec);
}

int main_test_15_05(void) {
	int second;
	printf("초를 입력해주세요. : ");
	scanf_s("%d", &second);

	printHMS(second);

	return 0;
}