#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#pragma warning (disable:4996)

int main() {
	int dx;
	int random;

	srand(time(NULL));
	for (dx = 0; dx < 5; dx++)
	{
		random = rand()%100; // ¸ðµâ·¯
		printf("%d\t", random);
	}
	puts("");
	return 0;
}