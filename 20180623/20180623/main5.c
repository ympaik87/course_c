#include <stdio.h>
int main() {
	int a = 10, b = 6;
	printf("before -> a: %d, b: %d\n", a, b);
	a ^= b; // a = a^b�� t=a; ���� �ӵ��� ������ �޸𸮸� ���Ծ���. trade off ����.
	b ^= a;
	a ^= b;
	printf("after -> a: %d, b: %d\n", a, b);
	return 0;
}