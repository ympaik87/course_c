#include<stdio.h>
#pragma warning(disable:4996)
void display(int rdb) {
	printf("%d\n", rdb);
}

int main() {
	int db = 400;
	
	display(db);

	return 0;
}