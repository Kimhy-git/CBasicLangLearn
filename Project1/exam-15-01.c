#include <stdio.h>

// ����� ���� �Լ��� ����. main�Լ� ���ʿ� �����Ѵ�.
int add(int a, int b) {	// �Ű�����(parameter:�Ķ����)
	return a + b;
}

// main�Լ� �Ʒ��ʿ� �����ϰ� ������ ����θ� ���� �߰����ش�.
int add2(int a, int b);

int main_exam_15_01(void) {
	int result;

	result = add(2, 4);	// ��������(arguments)
	printf("�Լ��� ��ȯ�� ��: %d\n", result);

	return 0;
}

// ���Ǻ�
int add2(int a, int b) {
	return a + b;
}