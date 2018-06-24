#include <stdio.h>
//#pragma warning (disable:4996)

int main() {
	int arr[5] = {3, 4, 1, 5, 2};
	int max = 0;
	int ind;
	for (ind = 0; ind < 5; ind++) {
		if (arr[ind] > max)
		{
			max = arr[ind];
		}
	}
	printf("%d", max);
	
	puts("");
	return 0;
}