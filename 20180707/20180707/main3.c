#include <stdio.h>

extern int add(int a, int b);
extern int gg;

int main() {
	printf("%d\n", gg);
	add(10, 5);
	puts("");
	return 0;
}

int gg = 10;
int add(int a, int b) { return a + b; }
