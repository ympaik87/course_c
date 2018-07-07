#include <stdio.h>

void main(void)
{
	/*char address;
	scanf_s("%c", &address);
	char *p;
	p = (char*)malloc(sizeof(address));
	*p = address;
	printf("%c\n", *p);*/

	char *p;
	char buff[1000];

	// 3가지 문자열 입력 방법
	// scanf("%s", buff);
	// gets(buff);
	// gets_s(buff, 1000);
	// fgets(buff, 1000, stdin);

	gets(buff);
	/*p = malloc(strlen(buff));*/
	p = (char *)malloc(sizeof(char)*strlen(buff)+1); // +1: null 문자 갯수
	strcpy(p, buff);
	puts(p);

	free(p);
}