#include <stdio.h>
#include <stdbool.h>

int main_08_03(void) {
	int num;
	int cnt = 0;

	// ��������� Ctrl+C
	while (true)
	{
		printf("���� �ݺ� ��... ���ڸ� �Է��ϼ���. : ");
		scanf_s("%d", &num);
		printf("%d��(��) �Է��ϼ̳׿�.\n", num);

		if (cnt >= 4)
		{
			break;
		}
		printf("%d��° �õ�.\n", cnt+1);
		cnt++;
	}

	return 0;
}