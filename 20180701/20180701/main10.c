#include <stdio.h>
//#pragma warning (disable:4996)

typedef int i;
typedef i ai[3];
typedef i *pi;

int main() {
	i a;
	ai arr; // int arr[3];
	pi p; // int *p;
	p = &a;

	puts("");
	return 0;
}