#include <stdio.h>
#include <stdlib.h>

void main() {
	// int�� 5����ŭ
	int* iptr = (int*)malloc(sizeof(int) * 5);
	double* dptr = (double*)malloc(sizeof(double) * 3);

	int i;
	for (i = 0; i < 5; i++) {
		// �����Ҵ��� ���� �����ͺ����� �޸� ������ �Ҵ����ָ� �ε��� �������� �ش� ��ġ�� ������ ��������
		iptr[i] = 10 * (i + 1);
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", iptr[i]);
	}

	printf("\n");

	dptr[0] = 3.14;
	dptr[1] = 4.13;
	dptr[2] = 1.43;
	printf("%g %g %g\n", dptr[0], dptr[1], dptr[2]);

	// �� ������ �Ҵ�� �޸� ����
	// nullüũ! ���ʿ��� ����� �������� �ʴ´ٴ� �ǹ�(ȿ����!)
	if (iptr != NULL) free(iptr);	// �ش� �޸𸮰� NULL�̸� �޸� ������ �ʿ�ġ �ʱ� ����
	if (dptr != NULL) free(dptr);
}