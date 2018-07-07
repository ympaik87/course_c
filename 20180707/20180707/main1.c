#include <stdio.h>
//#pragma warning (disable:4996)

int main() {
	int a = 0x12345678;
	void *p;
	p = &a;
	printf("%x", *(char*)p);
	puts("");

	printf("%x", *++((char*)p));

	puts("");
	return 0;
}