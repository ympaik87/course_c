#include <stdio.h>
//#pragma warning (disable:4996)

void change(int *p)
{
	*(p+1) = 200; // p[1] = 200;¿Í °°´Ù.
}



int main() {
	int a[] = { 10, 20, 30 };

	change(a);
	printf("%d\t%d\t%d", a[0], a[1], a[2]);

	puts("");
	return 0;
}