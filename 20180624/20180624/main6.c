#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int i = 0;
	int sum = 0;
label:
	sum += i;
	i++;
	if (i <= 10)
		goto label;
	printf("%d\n", sum);
	return 0;
}