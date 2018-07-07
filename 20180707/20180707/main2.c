#include <stdio.h>
//#pragma warning (disable:4996)


void func(void) {
	puts("func");
}


int main() {
	void *p;

	p = func;
	((void(*)(void))p)();
	
	puts("");
	return 0;
}