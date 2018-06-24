#include <stdio.h>
//#pragma warning (disable:4996)

int main() {
	int arr[100];
	int numb = 0;
	for (int i = 0; i < 100; i++) {
		arr[i] = numb;
		numb += 2;
	}

	for (int ind = 0; ind < 100; ind++)
	{
		if (arr[ind] < 54)
		{
			printf("%d ", arr[ind]);
		}
	}
	
	puts("");
	return 0;
}