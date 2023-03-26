#include <stdio.h>

int main_08_02(void) {
	int num = 0;

	while (num != -1)
	{
		printf("숫자를 입력하세요 : ");
		scanf_s("%d", &num);
		if (num == -1) 
		{
			printf("종료합니다.");
		}
		else 
		{
			printf("%d을(를) 입력하셨네요.\n", num);
		}
	}

	return 0;
}