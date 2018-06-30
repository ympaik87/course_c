#include <stdio.h>
//#pragma warning (disable:4996)
void last(int *k)
{
	*k = 50;
}

void func(int *p)
{
	last(p);
}


int main() {
	int a;
	func(&a);
	printf("%d", a);

	puts("");
	return 0;
}