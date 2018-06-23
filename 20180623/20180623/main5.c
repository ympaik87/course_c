#include <stdio.h>
int main() {
	int a = 10, b = 6;
	printf("before -> a: %d, b: %d\n", a, b);
	a ^= b; // a = a^b가 t=a; 보다 속도가 느리나 메모리를 적게쓴다. trade off 관계.
	b ^= a;
	a ^= b;
	printf("after -> a: %d, b: %d\n", a, b);
	return 0;
}