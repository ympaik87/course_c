#include<stdio.h>
void main()
{

	int *pInt = (int*)malloc(sizeof(int) * 100);
	printf("ũ�� %d\n", _msize((void*)pInt) / sizeof(int));
	free(pInt);
}