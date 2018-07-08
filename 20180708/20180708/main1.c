#include <stdio.h>

struct num {
	int fir;
	int sec;
};

int func1(int first, int second) {
	return first + second;
}

int func2(struct num *p) {
	return p->fir * p->sec;
}

int func3(struct num *arr) {
	return arr->fir + arr->sec + (arr + 1)->fir + (arr + 1)->sec; // (*p).fir // p[0].fir
}

main()

{
	struct num a = { 1,2 }, b = { 3,4 }, c[2] = { 5,6,7,8 };

	//구조체멤버 각각 던져서 합
	int one = func1(a.fir, a.sec);
	printf("one %d\n", one);

	//구조체 변수주소 던져서 곱
	int two = func2(&b);
	printf("two %d\n", two);

	//구조체 배열주소 던져서 합
	int three = func3(c);
	printf("three %d\n", three);
}