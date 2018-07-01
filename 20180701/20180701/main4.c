#include <stdio.h>
//#pragma warning (disable:4996)

void func_1(int(*p)[3]) // 2차원 배열을 2차원 답게 처리
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (p[i][j] == 4)
			{
				p[i][j] = 400;
			}
		}
	}
}

void func_2(int *p) // 2차원 배열을 1차원 답게 처리
{
	p[5] = 600;
}

int main() {
	int a[2][3] = { 1,2,3,4,5,6 };

	func_1(a); // a의 주소를 배열 포인터에 전달. 4를 400으로 바꾸시오.

	func_2(a[0]); // a의 주소를 싱글 포인터에 전달. 6을 600으로 바꾸시오.

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		puts("");
	}

	puts("");
	return 0;
}