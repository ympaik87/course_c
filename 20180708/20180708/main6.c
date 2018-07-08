#include <stdio.h>

union AAAA
{
	int first;
	struct BBB {
		char arr[4];
	} second;
	char brr[4];
};

void main() {
	union AAAA a;
	a.first = 0x12345678;
	printf("%x\n", a.first);

	printf("%x\n", a.second.arr[0]);

	printf("%x\n", a.brr[0]);
}