/* 
����ü : ����(�޸�)�� �ɰ��� ����� �� ����.
���� ���� ������ �޸𸮸� ȿ��������? ����� �� �ִ�.
���α׷��� ���ư��� ���ȿ����� �޸𸮸� ���� ���·� ����� �� ����!
*/
#include <stdio.h>

typedef union ubox {
	int mem1;
	int mem2;
	double mem3;
}UBox;

int main(void) {
	UBox ubx;
	ubx.mem1 = 20;
	printf("%d\n", ubx.mem2);

	ubx.mem3 = 7.15;
	// 8byte�� �ʱ�ȭ�� ������ �޸� �뷮�� ���� �ʴ´�? ��ġ�� ����? �߸� ������ �ϰ� �ִ°Ŵ�. -> �����Ⱚ�� ����
	printf("%d\n", ubx.mem1);
	printf("%d\n", ubx.mem2);
	printf("%g\n", ubx.mem3);
	return 0;
}