#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int maxSize;
	char* str;
	int cnt = 0;
	
	printf("문자열의 최대 길이는? ");
	// 입력받을 때는 주소값으로 보내주어야 한다
	scanf("%d", &maxSize);
	
	str = (char*)malloc(maxSize + 1);
	printf("문자열 입력 : ");
	// 문자열 입력에는 &를 붙이지 않는다
	scanf("%s", str);

	for (int i = 0; i < maxSize; i++) {
		// null문자를 만나면 더이상 돌지 않고 빠져나온다
		if (str[i] == '\0') break;
		if (str[i] == 97) cnt++;
	}

	printf("a의 개수는 %d개 입니다.", cnt);

	return 0;
}