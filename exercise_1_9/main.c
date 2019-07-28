#include <stdio.h>

/* replacing one or more blanks by a single blank. */
main()
{
	int p, c;

	while ((c = getchar()) != EOF) {
		if (p != ' ' || c != ' ') {
			putchar(c);
			p = c;
		}
	}
}
