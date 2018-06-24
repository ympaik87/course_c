#include <stdio.h>
//#pragma warning (disable:4996)

int main() {
	int arr[5];
	int ind;
	for (ind = 0; ind < 5; ind++) {
		scanf_s("%d", &arr[ind]);
	}
	for (ind = 0; ind < 5; ind++) {
		printf("%d ", arr[ind]);
	}
	puts("");
	return 0;
}