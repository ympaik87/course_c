#include <stdio.h>

void main()
{
	int num;
	scanf_s("%d", &num);

	num += 3; // 3�� ���ϰ�
	num &= ~3; // 3�� �����

	printf("%d\n", num);
}