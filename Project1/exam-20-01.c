#include <stdio.h>

typedef struct
{
	char name[30];
	int age;
} Person;

int main(void) {
	Person boy = { "H", 35 };
	Person* ptr = &boy;		// Person�� ������ ���� ptr�� ����ü ���� boy�� ����

	printf("%s (%d)\n", (*ptr).name, (*ptr).age);
	printf("%s (%d)\n", ptr->name, ptr->age);	// -> : ������ ����� �����Ѵ�

	return 0;
}