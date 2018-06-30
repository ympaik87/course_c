#include <stdio.h>
//#pragma warning (disable:4996)

void swap(int *pa, int *pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main() {
	int a = 20;
	int b = 30;

	swap(&a, &b);

	printf("%d\t%d", a, b);

	puts("");
	return 0;
}