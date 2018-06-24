#include <stdio.h>
//#pragma warning (disable:4996)

int main() {
	char c;
	scanf_s("%c", &c);
	if (c >= 97 && c <= 122)
	{
		printf("converted to uppercase: %c", c - 32);
	}
	else
	{
		printf("converted to lowercase: %c", c + 32);
		//printf("converted to lowercase: %c", c - 'A' + 'a');
	}
	//printf("%c", ch^(1<<5));
	puts("");
	return 0;
}