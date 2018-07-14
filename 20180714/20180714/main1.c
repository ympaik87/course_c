#include <stdio.h>

void print_char_from_ch(char ch) {
	if (ch != 'z') {
		ch += 1;
		printf("%c", ch);
		print_char_from_ch(ch);
	}
	else
		return;
}



void print_char_from_a(char ch) {
	if (ch < 'a')
	{
		return;
	}
	else {
		print_char_from_a(ch - 1);
		printf("%c", ch);
	}
		
}

void main()
{
	print_char_from_ch('d');
	puts("");

	print_char_from_a('d');
	puts("");
}