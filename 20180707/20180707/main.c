#include <stdio.h>
//#pragma warning (disable:4996)

int main() {
	char a = 'A';
	int b;
	float c;
	double d;

	d = (double)(c = (float)(b = (int)a));

	//b = (int)a;
	//c = (float)b;
	//d = (double)c;

	printf("%c %d %d %d", a, b, c, d);

	puts("");
	return 0;
}