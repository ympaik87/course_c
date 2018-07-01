#include <stdio.h>
//#pragma warning (disable:4996)

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int temp(int a, int b, int (*p_func)(int, int))
{
	return  p_func(a, b); // leaf function call
}


void main() {
	int a = 10, b = 5;
	int add_res = temp(a, b, add);
	printf("%d", add_res);

	puts("");
	int sub_res = temp(a, b, sub);
	printf("%d", sub_res);

	puts("");
}