#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int i=0;
	printf("1��. 0-9\n");
	while (i < 10) {
		printf("%d\n", i);
		i++;
	}
	
	printf("2��. 1-100 \n");
	i = 1;
	while (i < 101) {
		printf("%d\n", i);
		i++;
	}

	printf("3��. 0-100���� Ȧ����\n");
	i = 1;
	while (i < 100) {
		printf("%d\n", i);
		i += 2;
	}

	int ind = 1;
	i = 1;
	printf("4��. 0-100���� 3�� ���\n");
	while (i < 101) {
		printf("%d\n", i);
		i = ind * 3;
		ind++;
	}

	printf("5��. 0-100���� ��\n");
	i = 0;
	int sum = 0;
	while (i < 101) {
		sum += i;
		i++;
	}
	printf("%d\n", sum);

	printf("6��. 0-100���� 3�� ����̸鼭 7�� ����� �͸� ��� \n");
	i = 0;
	while (i < 101) {
		if ((i % 3 == 0) && (i % 7 == 0))
			printf("%d\n", i);
		i++;
	}

	printf("7��. 0-100���� ¦���� �� ��� \n");
	i = 0;
	sum = 0;
	while (i < 101) {
		if (!(i % 2))
			sum += i;
		i++;
	}
	printf("%d\n", sum);

	return 0;
}