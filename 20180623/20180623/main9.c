#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	char ch1 = 'A'; // 1byte == 8bit
	char ch2 = 65;
	printf("%d %c\n", ch1, ch1);
	printf("%d %c\n", ch2, ch2);
	return 0;
}