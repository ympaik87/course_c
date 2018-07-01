#include <stdio.h>
//#pragma warning (disable:4996)

int main() {
	char a[] = "abcd";
	char b[] = "cccc";
	char *p[2] = { a, b };

	char g[2][5] = { "abcd", "cccc" };

	int rx, cx;
	for (rx = 0; rx < 2; rx++)
	{
		for (cx = 0; cx < 5; cx++)
		{
			printf("%c", p[rx][cx]);
		}
	}
	for (rx = 0; rx < 2; rx++)
	{
		for (cx = 0; cx < 5; cx++)
		{
			printf("%c", g[rx][cx]);
		}
	}
	puts("");
	return 0;
}