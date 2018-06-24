#include <stdio.h>
//#pragma warning (disable:4996)

int main() {
	int first;
	int second;
	int start, finish;
	int ind;
	scanf_s("%d", &first);
	scanf_s("%d", &second);

	if (first >= second) {
		start = second;
		finish = first;
	}
	else {
		start = first;
		finish = second;
	}
		
	for (ind = start; ind <= finish; ind++) {
		printf("%d ", ind);
	}
	puts("");
	return 0;
}