#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct person
{
	char name[30];
	int age;
};

int main(void) {
	struct person boy, girl;

	struct person man = { "man", 25 };

	// ���ڿ��� �ְ������ strcpy(��Ʈ��ī��)�� �̿��� �������ش�.
	// strcpy ������ �����ϱ����� #define _CRT_SECURE_NO_WARNINGS ����(include ��ܿ�)
	strcpy(boy.name, "��ҳ�");
	strcpy(girl.name, "��ҳ�");

	boy.age = 12;
	girl.age = 13;

	printf("�ҳ��� �̸� %s, ���̴� %d��\n", boy.name, boy.age);
	printf("�ҳ��� �̸� %s, ���̴� %d��\n", girl.name, girl.age);

	return 0;
}