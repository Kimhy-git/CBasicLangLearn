/* 
	8����

	����Լ�(Recursive Function) : �ݺ��Ǵ�, ��Ǯ�̵Ǵ� �Լ�
	-> Ż�� ������ �߿��ϴ�
	-> ���ѹݺ������� ����ũ�� ũ��
*/

#include <stdio.h>

void sayHello() {
	printf("Hello!\n");
	sayHello();
}

int main_exam_16_05(void) {
	// ���ѹݺ�~
	sayHello();

	return 0;
}