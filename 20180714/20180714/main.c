#include <stdio.h>

int ala(int a, int b)
{
	int mul = 0;
	while (a > 0) { // while(a)
		if (a % 2) // if((a&0x1)==1)
			mul += b;
		a /= 2; //a>>=1;
		b *= 2; //b<<=1;
	}
	return mul;
}

int get_gcd(int a, int b)
{
	int temp;
	while (a) {
		if (b > a) {
			temp = a;
			a = b;
			b = temp;
		}
		a = a - b;
	}
	return b;
}

void main() {
	printf("multiply: %d\n", ala(27, 65));
	printf("gcd: %d\n", get_gcd(220, 30));
}