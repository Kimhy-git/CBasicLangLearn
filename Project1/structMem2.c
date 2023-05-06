#include <stdio.h>

struct Point2D
{
	int x;
	int y;
	int z;
	int m;
};

int main(void) {
	// 구조체 크기만큼 메모리 할당
	struct Point2D* p1 = malloc(sizeof(struct Point2D));

	// malloc로 할당된 메모리에는 아래와 같이 초기화가 불가함
	// struct Point2D p2 = { 0, ... };

	memset(p1, 0, sizeof(struct Point2D));

	printf("%d %d\n", p1->x, p1->y);

	free(p1);

	return 0;
}