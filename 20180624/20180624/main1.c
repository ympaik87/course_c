#include <stdio.h>
#pragma warning (disable:4996)
// �Էµ� ���� ���Ͽ� ¦���̸� ¦�� ���, �ƴϸ� Ȧ�� ���
int main() {
	int input;
	scanf("%d", &input);
	if (input % 2)
	{
		printf("%d is odd number\n", input);
		puts("Ȧ��");
	}
	else
		printf("%d is even number\n", input);

	return 0;
}