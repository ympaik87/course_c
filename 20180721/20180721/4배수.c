#include <stdio.h>

void main()
{
	int num;
	scanf_s("%d", &num);

	num += 3; // 3을 더하고
	num &= ~3; // 3을 지운다

	printf("%d\n", num);
}