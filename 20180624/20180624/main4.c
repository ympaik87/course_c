#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int i=0;
	printf("1번. 0-9\n");
	while (i < 10) {
		printf("%d\n", i);
		i++;
	}
	
	printf("2번. 1-100 \n");
	i = 1;
	while (i < 101) {
		printf("%d\n", i);
		i++;
	}

	printf("3번. 0-100까지 홀수만\n");
	i = 1;
	while (i < 100) {
		printf("%d\n", i);
		i += 2;
	}

	int ind = 1;
	i = 1;
	printf("4번. 0-100까지 3의 배수\n");
	while (i < 101) {
		printf("%d\n", i);
		i = ind * 3;
		ind++;
	}

	printf("5번. 0-100까지 합\n");
	i = 0;
	int sum = 0;
	while (i < 101) {
		sum += i;
		i++;
	}
	printf("%d\n", sum);

	printf("6번. 0-100까지 3의 배수이면서 7의 배수인 것만 출력 \n");
	i = 0;
	while (i < 101) {
		if ((i % 3 == 0) && (i % 7 == 0))
			printf("%d\n", i);
		i++;
	}

	printf("7번. 0-100까지 짝수의 합 출력 \n");
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