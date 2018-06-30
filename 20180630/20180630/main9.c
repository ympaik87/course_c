#include <stdio.h>
//#pragma warning (disable:4996)
void display_a(int *arr)
{
	for (int i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
	}
	for (int i = 0; i < 33; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main() {
	int arr[100];

	display_a(arr);

	puts("");
	return 0;
}