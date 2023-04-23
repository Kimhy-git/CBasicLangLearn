/* 
공용체 : 공간(메모리)를 쪼개서 사용할 때 쓴다.
실행 단위 내에서 메모리를 효율적으로? 사용할 수 있다.
프로그램이 돌아가는 동안에서도 메모리를 여러 형태로 사용할 수 있음!
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
	// 8byte로 초기화된 변수라서 메모리 용량이 맞지 않는다? 위치가 없다? 잘못 지정을 하고 있는거다. -> 쓰레기값이 나옴
	printf("%d\n", ubx.mem1);
	printf("%d\n", ubx.mem2);
	printf("%g\n", ubx.mem3);
	return 0;
}