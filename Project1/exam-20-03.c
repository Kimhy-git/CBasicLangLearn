#include <stdio.h>

// ����ü�� ��ø
typedef struct {
	char title[100];
	int published;
} Book;

typedef struct {
	Book book[3];	// ��� ������ ���� ���� 3�� ����ü ������ ����
} Bag;

int main(void) {
	// ����ü ���� ����� ���ÿ� �ʱ�ȭ
	Bag myBag = {
		{
			{"�Ĺ��� ��", 2018},
			{"���·� ����", 2015},
			{"��� �λ��� �̾߱�", 2016}
		}
	};

	for (int i = 0; i < 3; i++) {
		printf("����: %s\n�Ⱓ�⵵: %d\n", myBag.book[i].title, myBag.book[i].published);
		printf("\n");
	}

	return 0;
}