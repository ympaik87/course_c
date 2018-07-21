#include <stdio.h>

void main()
{
	int a = 10; // 00001010
	if ((a & 0x1) == 0)
		puts("even");
	// bit mask & (and)
	printf("%x\n", a & 0xc);

	// bit set | (inclusive or)
	printf("%x\n", a | 0x4);

	// bit clear & ~(one's complement)
	// 00001010 을
	// 00001000 으로 변경
	a = a & ~0x2;
	printf("%x\n", a);
	
	puts("--- example ---");
	
	a = 0xA5;
	if (a&(1 << 6))
		puts("true");
	else
		puts("false");

	a |= (1 << 3) + (1 << 1);
	printf("%x\n", a);

	a &= ~((1 << 2) + (1 << 1));
	printf("%x\n", a);

	a &= 0x7 << 5;
	printf("%x\n", a);

}