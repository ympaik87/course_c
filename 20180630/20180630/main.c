#include <stdio.h>
//#pragma warning (disable:4996)

int main() {
	int a[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("insert a[%d][%d]: ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("a[%d][%d]: %d\t", i, j, a[i][j]);
		}
		puts("");
	}

	int sum = 0;
	int max = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum += a[i][j];
			if (max < a[i][j])
			{
				max = a[i][j];
			}
		}
	}
	printf("sum: %d\n", sum);
	printf("max: %d\n", max);

	int sum_row;
	int sum_col[3] = {0};
	for (int i = 0; i < 2; i++)
	{
		sum_row = 0;
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
			sum_row += a[i][j];
			sum_col[j] += a[i][j];
		}
		printf("| %d", sum_row);
		puts("");
	}
	printf("-------------------------\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d\t", sum_col[i]);
	}
	puts("");
	return 0;
}