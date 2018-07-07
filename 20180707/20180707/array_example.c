#include <stdio.h>


int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }

int main() {
	int a = 10, b = 5;
	int input;
	int res;
	void * arr[5][2] = { {add, "ADDITION"}, {sub, "SUBTRACTION"}, {mul, "MULTIPLY"}, {div, "DIVIDE"}, {0, 0} };

	printf("/* 계산기 프로그램 */\n");
	int i = 0;
	while (arr[i][1] != NULL) {
		printf("%d. %s\n", i + 1, (char*)(arr[i][1]));
		i++;
	}
	printf("번호를 선택하세요: ");
	scanf_s("%d", &input);
	printf("결과는: %d\n",((int (*)(int, int)) arr[input - 1][0])(a,b));

	return 0;
}