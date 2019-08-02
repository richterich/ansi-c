#include <stdio.h>

/* one word per line */
main()
{
	int c, p;
	
	p = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (p != c) {
				putchar('\n');
			}
		}
		else {
			putchar(c);
		}
		p = c;
	}
}
