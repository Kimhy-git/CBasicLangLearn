#include <stdio.h>

// �Է� �Լ�
int main_exam_04_06(void) {

	char character;
	int inum;
	float fnum;

	//// C99���� scanf�� ������ �� -> scanf_s ���
	//printf("character �Է�\n");
	//// & : ���ۻ���. �޸� ������. �����÷ο�� ������ ���� �� �ִ�.
	//scanf_s("%c", &character);
	//printf("inum �Է�\n");
	//scanf_s("%d", &inum);
	//printf("fnum �Է�\n");
	//scanf_s("%f", &fnum);

	//printf("character = %c\ninum = %d\nfnum = %f\n", character, inum, fnum);

	// ���ڿ�
	char name[255];

	printf("�̸��� �Է����ּ���.: ");
	// �迭�� �Է¹��� �� &(���ۻ���)�� ���̸� �ȵȴ�. �迭�� ������ �ּ� �� ��ü��
	scanf_s("%s", name, sizeof(name));
	printf("�ݰ����ϴ�. %s.", name);

	return 0;
}