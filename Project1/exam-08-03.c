#include <stdio.h>
#include <stdbool.h>

int main_08_03(void) {
	int num;
	int cnt = 0;

	// 강제종료는 Ctrl+C
	while (true)
	{
		printf("무한 반복 중... 숫자를 입력하세요. : ");
		scanf_s("%d", &num);
		printf("%d을(를) 입력하셨네요.\n", num);

		if (cnt >= 4)
		{
			break;
		}
		printf("%d번째 시도.\n", cnt+1);
		cnt++;
	}

	return 0;
}