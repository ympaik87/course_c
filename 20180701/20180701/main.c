#include <stdio.h>
//#pragma warning (disable:4996)

int main() {
	int a;
	int *p;
	int **k;

	p = &a;
	k = &p;

	/*scanf_s("%d", &a);
	scanf_s("%d", p);*/
	scanf_s("%d", *k);
	printf("%d", a);

	puts("");
	return 0;
}