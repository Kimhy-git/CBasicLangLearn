#include <stdio.h>

struct Point2D
{
	int x;
	int y;
	int z;
	int m;
};

int main(void) {
	// ����ü ũ�⸸ŭ �޸� �Ҵ�
	struct Point2D* p1 = malloc(sizeof(struct Point2D));

	// malloc�� �Ҵ�� �޸𸮿��� �Ʒ��� ���� �ʱ�ȭ�� �Ұ���
	// struct Point2D p2 = { 0, ... };

	memset(p1, 0, sizeof(struct Point2D));

	printf("%d %d\n", p1->x, p1->y);

	free(p1);

	return 0;
}