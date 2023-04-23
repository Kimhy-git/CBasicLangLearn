#include <stdio.h>

typedef int INT;
typedef int* PINT;
typedef unsigned int UINT;

typedef struct {
	int x; 
	int y;
} POINT;	// 얘가 이름

struct person{
	char name[30];
	int age;
};
typedef struct person PERSON;

int main(void) {
	typedef char CHAR;
	typedef char* STR;

	INT num = 3;
	PINT ptr = &num;
	UINT unum = 5;

	CHAR ch = 'c';
	STR str = "Hello!";

	printf("%d %d %d\n", num, *ptr, unum);
	printf("%c %s\n", ch, str);

	printf("-----\n");

	POINT position = { 30, 60 };
	PERSON human = { "사람", 20 };
	printf("%d %d\n", position.x, position.y);
	printf("%s %d\n", human.name, human.age);

	return 0;
}