#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


struct person
{
	char name[30];
	int age;
};

int main(void) {
	struct person boy[3] = {
		{"A", 12},
		{"B", 15},
		{"C", 10}
	};

	struct person girl[3];
	int i;

	strcpy(girl[0].name, "D");
	strcpy(girl[1].name, "E");
	strcpy(girl[2].name, "F");
	girl[0].age = 11;
	girl[1].age = 16;
	girl[2].age = 13;

	for (int i = 0; i < 3; i++) {
		printf("�ҳ��� �̸��� %s, ���̴� %d�� \n", boy[i].name, boy[i].age);
		printf("�ҳ��� �̸��� %s, ���̴� %d�� \n", girl[i].name, girl[i].age);
	}

	return 0;
}