#include <stdio.h>
//#pragma warning (disable:4996)

int main() {
	int a, *pa, **ppa;
	int b, *pb, **ppb;
	int temp;

	a = 100;
	pa = &a;
	ppa = &pa;

	b = 400;
	pb = &b;
	ppb = &pb;

	temp = **ppb;
	**ppb = **ppa;
	**ppa = temp;

	printf("after: %d %d", a, b);

	puts("");
	return 0;
}