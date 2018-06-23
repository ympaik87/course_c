#include<stdio.h>

int main()
{
	int a = 10, b = 20;
	int t;
	printf("before replacement:\na: %d, b: %d\n", a, b);
	t = a;
	a = b;
	b = t;
	printf("after replacement:\na: %d, b: %d, t: %d\n", a, b, t);
	return 0;
}