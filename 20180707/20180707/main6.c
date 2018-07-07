#include <stdio.h>
#define FOR_LOOP(start, finish) for(int i=start; i<finish; i++)
#define call(x) func##x

void func1(void) { puts("func1"); }
void func2(void) { puts("func2"); }
void func3(void) { puts("func3"); }
void func4(void) { puts("func4"); }
void funcx(void) { puts("funcx"); }

void main(void)
{
	int x = 0;
	FOR_LOOP(1, 5)
	{
		call(x)(); // 함수포인터를 이용해야만 원하는 func1-func4를 불러올 수 있음
		x++;
	}
}