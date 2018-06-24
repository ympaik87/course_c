#include <stdio.h>
#pragma warning (disable:4996)
// 입력된 수에 대하여 1-10이면 합격 출력, 아니면 불합격 출력
int main() {
	int input;
	int second_digit;
	scanf("%d", &input);
	second_digit = input / 10;
	switch (second_digit) {
	case 10:
	case 9:
		puts("A학점");
		break;
	case 8:
		puts("B학점");
		break;
	case 7:
		puts("C학점");
		break;
	default:
		puts("F");

	}
	return 0;
}