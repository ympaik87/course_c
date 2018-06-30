#include <stdio.h>
#include <stdlib.h>
void mystrcpy(char *buff, char *src)
{
	/*int i;
	for (i = 0; src[i] != NULL; i++)
	{
		buff[i] = src[i];
	}
	buff[i] = NULL;*/
	while (*buff++ = *src++);
}

int main() {
	char buff[100];
	char src[] = "abcd";

	mystrcpy(buff, src); //src의 내용을 buff에 copy하는 함수 완성

	puts(buff);
	return 0;
}