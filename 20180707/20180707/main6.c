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
		call(x)(); // �Լ������͸� �̿��ؾ߸� ���ϴ� func1-func4�� �ҷ��� �� ����
		x++;
	}
}