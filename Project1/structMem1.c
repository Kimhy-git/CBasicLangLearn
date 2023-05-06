#include <stdio.h>
#include <string.h>

struct Point2D
{
	int x;
	int y;
};

void main() {
	struct Point2D p1;

	// 통째로 값 할당
	memset(&p1, 0, sizeof(struct Point2D));
}