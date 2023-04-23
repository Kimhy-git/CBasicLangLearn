#include <stdio.h>

// Call by Value 형태
typedef struct {
	int s_id;
	int age;
} Student;

Student setStudent(int s_id, int age) {
	Student s = { s_id, age };
	return s;
}

void printStudent(Student s) {
	printf("학번 : %d, 나이 : %d\n", s.s_id, s.age);
}

int main(void) {
	Student s = setStudent(20231212, 20);
	printStudent(s);

	return 0;
}