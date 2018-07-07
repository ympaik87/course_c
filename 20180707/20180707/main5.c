#include <stdio.h>
//문자열화 연산자(#), 문자화 연산자(#@), 결합연산자(##) 예

#define str(x) printf(#x" is %d\n", x) //문자열화 연산자 
#define cha(x) printf("%c is %c\n", #@x, x) //문자화 연산자. visual studio에서만 사용가능
#define con(x,i) printf\
                 ("x%s is %\
                   d\n", #i,\
                   x##i) //결합 연산자

void main(void)
{
	int s = 10, c = 65, xa = 3, xb = 5;
	str(s);
	cha(c);
	con(x, a);
	con(x, b);
}