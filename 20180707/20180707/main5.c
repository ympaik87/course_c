#include <stdio.h>
//���ڿ�ȭ ������(#), ����ȭ ������(#@), ���տ�����(##) ��

#define str(x) printf(#x" is %d\n", x) //���ڿ�ȭ ������ 
#define cha(x) printf("%c is %c\n", #@x, x) //����ȭ ������. visual studio������ ��밡��
#define con(x,i) printf\
                 ("x%s is %\
                   d\n", #i,\
                   x##i) //���� ������

void main(void)
{
	int s = 10, c = 65, xa = 3, xb = 5;
	str(s);
	cha(c);
	con(x, a);
	con(x, b);
}