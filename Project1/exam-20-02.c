#include <stdio.h>

typedef struct {
	int x; int y;
} Point;

typedef struct {
	Point* start;
	Point* end;
} Line;

int main(void) {
	Point p1 = { 10, 8 };
	Point p2 = { 20, 40 };

	Line line = { &p1, &p2 };

	// line의 멤버변수 start와 end는 각각 포인터 변수
	printf("start : [%d, %d]\n", line.start->x, line.start->y);
	printf("end : [%d, %d]\n", line.end->x, line.end->y);

	return 0;
}