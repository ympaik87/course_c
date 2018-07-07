#include <stdio.h>

void main(void)
{
	int r = 3, c = 4;
	int **x;
	char buff[1000];
	int sentence_num;
	
	printf("원하는 문장의 개수를 입력하세요: \n");
	scanf_s("%d", &sentence_num);
	getchar(); // while() getchar();
	x = (char**)malloc(sizeof(char*)*sentence_num);
	if (x == NULL) {
		printf("not allocated");
	}
	else {
		for (int i = 0; i < sentence_num; i++) {
			printf("%d번째 문장은?\n\t", i+1);
			gets(buff);
			x[i] = (char*)malloc(sizeof(char)*strlen(buff) + 1);
			strcpy(x[i], buff);
		}
		for (int i = 0; i < sentence_num; i++)
		{
			puts(x[i]);
		}
		for (int i = 0; i < r; i++)
			free(x[i]);
		free(x);
	}

}