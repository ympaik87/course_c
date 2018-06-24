#include <stdio.h>
#pragma warning (disable:4996)
// 입력된 수에 대하여 1-10이면 합격 출력, 아니면 불합격 출력
int main() {
	int input;
	scanf("%d", &input);
	if (input >= 1 && input <= 10)
	{
		puts("합격");
	}
	else
		puts("불합격");

	return 0;
}