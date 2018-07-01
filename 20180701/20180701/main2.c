#include <stdio.h>
//#pragma warning (disable:4996)
void last(int **k) {
	**k = 400;
}


void func(int *p) {
	last(&p);
}

int main() {
	int a = 7;
	func(&a);

	puts("");
	return 0;
}