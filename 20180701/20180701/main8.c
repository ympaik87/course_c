#include <stdio.h>
//#pragma warning (disable:4996)

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int dvd(int a, int b) { return a / b; }

int main() {
	//int (*p)(int, int); // �Լ� ������
	//p = add;
	//printf("%d\n", p(10,5));

	//p = sub;
	//printf("%d\n", p(10, 5));

	//p = mul;
	//printf("%d\n", p(10, 5));

	int(*p[4])(int, int) = { add, sub, mul, dvd }; // �Լ� ������ �迭
	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", p[i](10, 5));
	}
	puts("");
	return 0;
}