#include <stdio.h>
#pragma warning (disable:4996)
// �Էµ� ���� ���Ͽ� 1-10�̸� �հ� ���, �ƴϸ� ���հ� ���
int main() {
	int input;
	scanf("%d", &input);
	if (input >= 1 && input <= 10)
	{
		puts("�հ�");
	}
	else
		puts("���հ�");

	return 0;
}