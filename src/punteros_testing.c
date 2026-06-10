#include <stdio.h>
#include <stdlib.h>

void change_value(char *letter) {
	*letter = 'b';
}

int main()
{
	/* code */

	char l;

	l = 'a';
	change_value(&l);
	printf("%c\n", l);
	printf("%c\n", l);

	return 0;
}