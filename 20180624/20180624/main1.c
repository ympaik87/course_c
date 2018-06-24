#include <stdio.h>
#pragma warning (disable:4996)
// 입력된 수에 대하여 짝수이면 짝수 출력, 아니면 홀수 출력
int main() {
	int input;
	scanf("%d", &input);
	if (input % 2)
	{
		printf("%d is odd number\n", input);
		puts("홀수");
	}
	else
		printf("%d is even number\n", input);

	return 0;
}