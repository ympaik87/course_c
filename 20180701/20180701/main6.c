#include <stdio.h>
//#pragma warning (disable:4996)

void func(char **p) {
	for (int i = 1; i < 4; i++)
	{
		printf("%c", *p[0]+i);
	}
	puts("");
	printf("%s", p[0] + 1);
	puts("");
	printf("%s", *p + 1);
	puts("");
	printf("%s", &p[0][1]);
	puts("");
	printf("%s", &(*p)[1]);
		
	puts("");
	puts("");
	printf("%c", *(p[1] + 4));
	puts("");
	printf("%c", p[1][4]);
	puts("");
	printf("%c", *(*(p+1) + 4));
	puts("");
	printf("%c", (*(p + 1))[4]);
	
	puts("");
	puts("");
	printf("%s", p[2]);
	puts("");
	while (*p[2]) {
		printf("%c", *p[2]);
		*p[2]++;
	}
	
}


int main() {
	char *p[] = { "abcd", "delete", "ccddee" };
	func(&p);

	puts("");
	return 0;
}