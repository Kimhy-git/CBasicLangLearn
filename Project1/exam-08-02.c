#include <stdio.h>

int main_08_02(void) {
	int num = 0;

	while (num != -1)
	{
		printf("���ڸ� �Է��ϼ��� : ");
		scanf_s("%d", &num);
		if (num == -1) 
		{
			printf("�����մϴ�.");
		}
		else 
		{
			printf("%d��(��) �Է��ϼ̳׿�.\n", num);
		}
	}

	return 0;
}