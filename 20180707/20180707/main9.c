#include <stdio.h>
#include <Windows.h>

void main(void)
{
	int i = 0;
	char *p;
	int size;
	int inc = 0;

	p = (char*)malloc(sizeof(char) * 1);
	while (i < 100) {
		p[i] = i + 1;
		inc++;
		size = _msize((void*)p) / sizeof(char);
		if((inc/(float)size)>0.9)
			realloc(p, size * 2);
		Sleep(500);
		printf("%d %d\n", p[i], size);
		i++;
	}
	free(p);
}