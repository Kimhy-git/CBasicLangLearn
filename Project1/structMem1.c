#include <stdio.h>
#include <string.h>

struct Point2D
{
	int x;
	int y;
};

void main() {
	struct Point2D p1;

	// ��°�� �� �Ҵ�
	memset(&p1, 0, sizeof(struct Point2D));
}