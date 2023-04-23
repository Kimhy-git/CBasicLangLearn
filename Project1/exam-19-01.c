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

	// 문자열을 넣고싶으면 strcpy(스트링카피)를 이용해 삽입해준다.
	// strcpy 에러를 무시하기위해 #define _CRT_SECURE_NO_WARNINGS 선언(include 상단에)
	strcpy(boy.name, "김소년");
	strcpy(girl.name, "김소녀");

	boy.age = 12;
	girl.age = 13;

	printf("소년의 이름 %s, 나이는 %d세\n", boy.name, boy.age);
	printf("소녀의 이름 %s, 나이는 %d세\n", girl.name, girl.age);

	return 0;
}