#include <stdio.h>

typedef enum syllable
{
	Do=1, Re=2, Mi=3, Fa=4, So=5, La=6, Ti=7
} Syllable;

void Sound(Syllable sy) {

	switch (sy)
	{
	case Do:
		puts("도는 하얀 도라지"); return 0;
	case Re:
		puts("레는 둥근 레코드"); return 0;
	case Mi:
		puts("미는 파란 미나리"); return 0;
	case Fa:
		puts("파는 예쁜 파랑새"); return 0;
	case So:
		puts("솔은 작은 솔방울"); return 0;
	case La:
		puts("라는 라디오고요"); return 0;
	case Ti:
		puts("시는 졸졸 시냇물"); return 0;
	}
	puts("다 함께 부르세~ 도레미파솔라시도솔도");

}

int main(void) {

	Syllable tone;
	// for(i=1; i<=7; i+=1)
	for (tone = Do; tone <= Ti; tone += 1) {
		Sound(tone);
	}
	return 0;
}