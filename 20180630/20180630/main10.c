#include <stdio.h>

void put_s(char *arr)
{
	/*for (int i = 0; arr[i] != 'F'; i++)
	{
		printf("%c ", arr[i]);
	}*/
	while (*arr)
		printf("%c", *arr++);
}

int main() {
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	put_s(s);

	puts("");
	return 0;
}