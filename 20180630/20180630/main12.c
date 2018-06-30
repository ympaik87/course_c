#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int main() {
	char a[6] = "abcd"; // pause의 크기 때문에
	char b[] = "pause";
	char c[10];

	strcpy(c, a);
	strcpy(a, b);
	strcpy(b, c);

	printf("%s\t%s", a, b);

	puts("");
	return 0;
}