#include <stdio.h>

struct Person {
	char face;
	int arm;
	float body;
};


void main() {
	struct Person hong; // 구조체 변수 (배열, 포인터)
	hong.arm = 20;
	hong.body = 100;

	scanf_s("%d", &hong.arm);
	printf("%d\n", hong.arm);

}