#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	char start;
	char end;
	int line_iter;
	scanf("%c %c %d", &start, &end, &line_iter);
	puts("the answer is below..................");
	
	int i = 1;
	int char_iter;
	char temp = start;
	while (i <= line_iter) {
		char_iter = 0;
		while (char_iter < i) {
			printf("%c", temp);
			if (temp == end)
				temp = start;
			else
				temp++;
			char_iter++;
		}
		printf("\n");
		i++;
	}

	return 0;
}