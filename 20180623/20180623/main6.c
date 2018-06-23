#include<stdio.h>
#pragma warning(disable:4996)
int main() {
	int a; // 쓰레기 값
	int b;
	
	// 키보드 입력
	scanf("%d", &a);
	scanf("%d", &b);
	printf("minimum >> %d\n", (a<b)?a:b);

	return 0;
}