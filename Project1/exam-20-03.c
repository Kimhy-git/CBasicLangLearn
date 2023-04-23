#include <stdio.h>

// 구조체의 중첩
typedef struct {
	char title[100];
	int published;
} Book;

typedef struct {
	Book book[3];	// 멤버 변수로 길이 정보 3인 구조체 변수를 선언
} Bag;

int main(void) {
	// 구조체 변수 선언과 동시에 초기화
	Bag myBag = {
		{
			{"식물의 뇌", 2018},
			{"선태류 도감", 2015},
			{"당신 인생의 이야기", 2016}
		}
	};

	for (int i = 0; i < 3; i++) {
		printf("제목: %s\n출간년도: %d\n", myBag.book[i].title, myBag.book[i].published);
		printf("\n");
	}

	return 0;
}