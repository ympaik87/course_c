#include<stdio.h>
#pragma warning(disable:4996)
int main() {
	int a; // ������ ��
	int b;
	
	// Ű���� �Է�
	scanf("%d", &a);
	scanf("%d", &b);
	printf("minimum >> %d\n", (a<b)?a:b);

	return 0;
}