#include <stdio.h>
#include <string.h>

int mybsearch(char(*p)[20], char *find) {
	int first, last, middle;
	first = 0;
	last = 25;
	while (1) {
		middle = (first + last) / 2; // 12 M
		if (strcmp(p[middle], find) < 0)
			first = middle + 1;
		else if (strcmp(p[middle], find) > 0)
			last = middle - 1;
		else
			return middle;
	}
}

void main(void) {
	char list[][20] = { "Alice", "Bill", "Carol", "David", "Elvis", "Fred", "Gabriel", "Helen", "Isabel",
		"Jane", "Kuper", "Louic", "Mathilda", "Nadia", "Olive", "Pablo", "Queen", "Rambo", "Scarlet",
		"Trisha", "Umberto", "Vincent", "Wily", "Xxx", "Yuki", "Zorro" };
	int res = mybsearch(list, "Poblo");
	printf("%d\n", res);
}