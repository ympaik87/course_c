#include <stdio.h>
//#pragma warning (disable:4996)

void connect(int *a, int **k)
{
	*k = a;
}


int main() {
	int a = 7;
	int *p;

	connect(&a, &p); // a�� p�� ������� �ִ� �Լ�
	printf("%d", *p); // 7

	puts("");
	return 0;
}