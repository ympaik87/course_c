#include <stdio.h>
#pragma warning (disable:4996)
// �Էµ� ���� ���Ͽ� 1-10�̸� �հ� ���, �ƴϸ� ���հ� ���
int main() {
	int input;
	int second_digit;
	scanf("%d", &input);
	second_digit = input / 10;
	switch (second_digit) {
	case 10:
	case 9:
		puts("A����");
		break;
	case 8:
		puts("B����");
		break;
	case 7:
		puts("C����");
		break;
	default:
		puts("F");

	}
	return 0;
}