#include <stdio.h>
#include <stdlib.h>


#define square(x) ((x)*(x))
// 25 / square(5) = 1  �� �ǵ��� square ��ũ�� �ۼ�

#define PR(x) printf("%d\n", x)
// PR(x)    x���� ����ϴ� PR ��ũ�� �Լ� �ۼ�

#define ABS(x) x<0?x*-1:x
// ���밪�� ������ִ� ��ũ�� �ۼ�

#define THREE_MAX(a,b,c) a>b ? a>c ? a:c : b>c ? b:c
// �ִ밪(three_max)   3���� ���� ���� ū ���� ����ϴ� ��ũ�� �ۼ�

#define SWAP(x,y) do{int t; t=x; x=y; y=t;}while(0)
// SWAP(x, y)   swap�Լ� ����� �ϴ� ��ũ�� �Լ� �ۼ�

#define FOR_LOOP(start, finish) for(int i=start; i<finish; i++)

int main()
{
	int a = 123, b = 11, c = 321;
	printf("%d\n", 25 / square(5));
	PR(a);
	printf("%d\n", ABS(-2));
	printf("%d\n", THREE_MAX(a, b, c));
	SWAP(a, b);
	PR(a);
	PR(b);

	return 0;
}