#include <stdio.h>

typedef struct
{
	char name[30];
	int age;
} Person;

int main(void) {
	Person boy = { "H", 35 };
	Person* ptr = &boy;		// Person형 포인터 변수 ptr은 구조체 변수 boy를 참조

	printf("%s (%d)\n", (*ptr).name, (*ptr).age);
	printf("%s (%d)\n", ptr->name, ptr->age);	// -> : 우측의 멤버를 참조한다

	return 0;
}