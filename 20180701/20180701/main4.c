#include <stdio.h>
//#pragma warning (disable:4996)

void func_1(int(*p)[3]) // 2���� �迭�� 2���� ��� ó��
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

void func_2(int *p) // 2���� �迭�� 1���� ��� ó��
{
	p[5] = 600;
}

int main() {
	int a[2][3] = { 1,2,3,4,5,6 };

	func_1(a); // a�� �ּҸ� �迭 �����Ϳ� ����. 4�� 400���� �ٲٽÿ�.

	func_2(a[0]); // a�� �ּҸ� �̱� �����Ϳ� ����. 6�� 600���� �ٲٽÿ�.

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