#include <stdio.h>
#include <stdlib.h>


#define square(x) ((x)*(x))
// 25 / square(5) = 1  이 되도록 square 매크로 작성

#define PR(x) printf("%d\n", x)
// PR(x)    x값을 출력하는 PR 매크로 함수 작성

#define ABS(x) x<0?x*-1:x
// 절대값을 출력해주는 매크로 작성

#define THREE_MAX(a,b,c) a>b ? a>c ? a:c : b>c ? b:c
// 최대값(three_max)   3개의 값중 가장 큰 값을 출력하는 매크로 작성

#define SWAP(x,y) do{int t; t=x; x=y; y=t;}while(0)
// SWAP(x, y)   swap함수 기능을 하는 매크로 함수 작성

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