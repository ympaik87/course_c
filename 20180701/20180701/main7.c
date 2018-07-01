#include <stdio.h>
#include <stdlib.h>
//#pragma warning (disable:4996)

void  func(int argc, char **argv)
{
	printf("%d %s", argc, argv[0]);
}

int main(int argc, char **argv) {
	for (int dx = 1; dx < argc; dx++)
	{
		printf("%d: %s\n", dx, argv[dx]);
	}
	switch (argv[2][0]) {
	case '+':
		printf("result: %d", atoi(argv[1]) + atoi(argv[3]));
		break;
	case '-':
		printf("result: %d", atoi(argv[1]) - atoi(argv[3]));
		break;
	}
	
/*
	printf("%d %s\n", argc, argv[0]);
	printf("%d %s\n", argc, argv[1]);
	printf("%d %s\n", argc, argv[2]);
	printf("%d %s\n", argc, argv[3]);*/
	/*char *p[] = { "abcd", "delete", "ccddee" };
	func(sizeof(p) / sizeof(p[0]), p);*/

	puts("");
	return 0;
}