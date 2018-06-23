#include<stdio.h>
#pragma warning(disable:4996)
void box(void) { // 앞쪽 void는 리턴이 없다. (void)는 전달인자가 없다.
	printf("money\n");
	printf("money\n");
	printf("money\n");
	printf("money\n");
	printf("money\n");
}


int main() {
	box();
	return 0;
}